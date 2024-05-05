#include "loader.h"
#include "rapidjson/filereadstream.h"
#include <QDebug>
loader::loader(const char *filename) {
    FILE* fp = fopen(filename, "r");
    char readBuffer[65536];
    rapidjson::FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    document.ParseStream(is);
    fclose(fp);
}


std::vector<Room*> loader::loadRooms() {
    std::vector<Room*> rooms;
    for (int i = 0; i < this->document["main_story"].Size(); i++) {
        Room* N = nullptr;
        Room* E = nullptr;
        Room* S = nullptr;
        Room* W = nullptr;
        Room* tempRoom = new Room(i);
        for (int x = 0; x < this->document["main_story"][i]["choices"].Size(); x++) {
            std::string button = this->document["main_story"][i]["choices"][x]["button"].GetString();
            int leads_to = this->document["main_story"][i]["choices"][x]["leads_to"].GetInt();
            qDebug() << button << tempRoom->getID();
            if (button == "North") N = new Room(leads_to);
            if (button == "East") E = new Room(leads_to);
            if (button == "South") S = new Room(leads_to);
            if (button == "West") W = new Room(leads_to);
        }
        tempRoom->setExits(N, E, S, W); // set exits after all exits are defined
        rooms.push_back(tempRoom);
        delete N;
        delete E;
        delete S;
        delete W;
    }

    return rooms; // return the vector of rooms
}

std::string loader::getText(int id){
    return document["main_story"][id]["text"].GetString();
}
