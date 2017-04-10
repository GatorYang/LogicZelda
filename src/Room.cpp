#include "../include/Room.h"
#include "../include/Space.h"
#include <vector>

Room::Room()
{
}

Room::Room(std::vector< std::vector<int> > spaceValues)
{
   for(int x = 0; x < SIZE_OF_ROOM; x++)
   {
      for(int y = 0; y < SIZE_OF_ROOM; y++)
      {
         spots[x][y] =  Space(spaceValues[x][y]);
      }
   }
}


