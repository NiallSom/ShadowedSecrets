#ifndef LOADER_H
#define LOADER_H

#include "rapidjson/document.h"
#include <room.h>
#include <vector>
class loader
{
private:
    rapidjson::Document document;
public:
    loader(const char *filename);

    std::vector<Room*>loadRooms();
    std::string getText(int id);
};

#endif // LOADER_H
