#include "loader.h"
#include "rapidjson/filereadstream.h"
#include <QDebug>
#include "enemy.h"
using namespace rapidjson;
loader::loader(const char *filename) {
    FILE* fp = fopen(filename, "r");
    char readBuffer[65536];
    FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    document.ParseStream(is);
    fclose(fp);
}
using namespace std;
struct itemStruct{
    string name;
    int weight;
    int damage;
    itemStruct(string n, int w, int d) : name(n), weight(w), damage(d) {}
};

vector<Room<int>*> loader::loadRooms() {
    vector<Room<int>*> rooms;
    for (int i = 0; i < this->document["rooms"].Size(); i++) {
        Room<int>* tempRoom = new Room<int>(i);
        string description = this->document["rooms"][i]["description"].GetString();
        tempRoom->setDescription(description);
        for (int x = 0; x < this->document["rooms"][i]["leads_to"].Size(); x++) {
            string button = this->document["rooms"][i]["leads_to"][x]["button"].GetString();
            int leads_to = this->document["rooms"][i]["leads_to"][x]["leads_to"].GetInt();
            tempRoom->setAction(button,leads_to);
            if (document["rooms"][i].HasMember("items")){
                for (int j = 0; j<document["rooms"][i]["items"].Size();j++){
                    itemStruct tempItem(document["rooms"][i]["items"][j]["name"].GetString(),
                                    document["rooms"][i]["items"][j]["weight"].GetInt(),
                                    document["rooms"][i]["items"][j]["damage"].GetInt());
                    tempRoom->addItem(new item(tempItem.name,tempItem.weight,tempItem.damage));
                }
            }
            if (document["rooms"][i].HasMember("enemy")){
                Enemy *entity = new Enemy(document["rooms"][i]["enemy"]["name"].GetString());
                tempRoom->addEnemy(entity);
                delete entity;
            }
        }
        rooms.push_back(tempRoom);
    }
    return rooms; // return the vector of rooms
}

vector<string> loader::getButtons(int roomID){
    vector<string> buttons;
    for (int x = 0; x < this->document["rooms"][roomID]["leads_to"].Size(); x++) {
        string button = this->document["rooms"][roomID]["leads_to"][x]["button"].GetString();
        buttons.push_back(button);
    }
    return buttons;
}

string loader::getText(int id){
    return document["main_story"][id]["text"].GetString();
}
