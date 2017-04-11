#ifndef DungeonGeneration_H
#define DungeonGeneration_H

#include <vector>
#include "Room.h"

class DungeonGeneration
{
   public:
   void dGen(std::vector< std::vector<Room> > &dLayout);
};

#endif // DungeonGeneration_H