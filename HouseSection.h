#ifndef HOUSESECTION_H
#define HOUSESECTION_H

#include "Room.h"

#include <string>
#include <vector>

class HouseSection 
{
    private:
        std::string name;
        std::vector<Room> rooms;

    public:
        HouseSection(const std::string& name);
        void addRoom(const Room& room);
        // void performActionOnAllRooms(const std::string& action);
};

#endif