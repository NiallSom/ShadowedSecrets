#ifndef LOADER_H
#define LOADER_H

#include "rapidjson/document.h"
#include <room.h>
#include <vector>

using namespace std;
using namespace rapidjson;

class loader
{
private:
    Document document;
public:
    loader(const char *filename);

    vector<Room<int>*>loadRooms();
    string getText(int id);
    vector<string> getButtons(int roomID);
};

#endif // LOADER_H
