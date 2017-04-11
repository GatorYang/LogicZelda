#include "../include/Room.h"
#include "../include/Space.h"
#include <vector>

Room::Room(int v){
   real = false;
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
   
   real = true;
}

Room::printRoom(){
   for(int x = 0; (unsigned) x < spots.size(); x++){
      for(int y = 0; (unsigned) y < spots[x].size(); y++){
         std::cout << spots[x][y] << " ";
      }
      std::cout << std::endl;
   }
}

int Room::getMonsterX(){
   int monX = 0;
   for(int x = 0; x < SIZE_OF_ROOM; x++){
      for(int y = 0; y < SIZE_OF_ROOM; y++){
         if(spots.[x][y].getMonster()){
            monX = x;
         }
      }
   }
   
   return monX;
}

int Room::getMonsterY(){
   int monY = 0;
   for(int x = 0; x < SIZE_OF_ROOM; x++){
      for(int y = 0; y < SIZE_OF_ROOM; y++){
         if(spots.[x][y].getMonster()){
            monY = y;
         }
      }
   }
   
   return monY;
}



