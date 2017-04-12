#include "../include/Room.h"
#include "../include/Space.h"
#include <vector>
#include <iostream>

Room::Room(){
   real = false;
}

Room::Room(std::vector< std::vector<int> > spaceValues)
{
   spots.resize(7);
   for(int x = 0; x < SIZE_OF_ROOM; x++)
   {
      spots[x].resize(7);
      for(int y = 0; y < SIZE_OF_ROOM; y++)
      {
         spots[x][y] =  Space(spaceValues[x][y]);
      }
   }

   real = true;
}

void Room::setUpRoom(std::vector< std::vector<int> > spaceValues)
{
   spots.resize(7);
   for(int x = 0; x < SIZE_OF_ROOM; x++)
   {
      spots[x].resize(7);
      for(int y = 0; y < SIZE_OF_ROOM; y++)
      {
         spots[x][y] =  Space(spaceValues[x][y]);
      }
   }

   real = true;
}

void Room::printRoom(){
   for(int r = 0; (unsigned) r < spots.size(); r++){
      for(int c = 0; (unsigned) c < spots[0].size(); c++){
         if(spaceR == r && spaceC == c)
           std::cout << "x" << " ";
         else
          std::cout << spots[r][c].getValue() << " ";
      }
      std::cout << std::endl;
   }
}

int Room::getMonsterX(){
   int monX = 0;
   for(int x = 0; x < SIZE_OF_ROOM; x++){
      for(int y = 0; y < SIZE_OF_ROOM; y++){
         if(spots[x][y].getMonster()){
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
         if(spots[x][y].getMonster()){
            monY = y;
         }
      }
   }

   return monY;
}

void Room::setUpRoom(int type){
   if(type == 0){
      real = false;
   }
   if(type == 1)
      setUpRoom(t_1);
   else if (type == 2)
      setUpRoom(t_2);
   else if (type == 3)
      setUpRoom(t_3);
   else if (type == 4)
      setUpRoom(t_4);
   else if (type == 5)
      setUpRoom(t_5);
   else if (type == 6)
      setUpRoom(t_6);
   else if (type == 7)
      setUpRoom(t_7);
}

int Room::move(char dir){
   if (dir == 'l' || dir == 'a'){
      return moveLeft();
   }
   if(dir == 'r' || dir == 'd')
      return moveRight();
   if(dir == "u" || dir == 'w')
     return  moveUp();
   if(dir == 'd' || dir == 's')
     return  moveDown();
   else
     return 0;
}

int Room::moveLeft(){
   if(spots[spaceR][spaceC].hasDoor() && spaceC = 0){
      return 4;
   }
   
   if (spaceC >= 1){
      if (spots[spaceR][spaceC - 1].isObstacle())
         return 0;
      else{
         spaceC--;
         return 1;
      }
   }
   
   return 0;
}
int Room::moveRight(){
   if(spots[spaceR][spaceC].hasDoor() && spaceC = 6){
      return 2;
   }
   
   if (spaceC <= 5){
      if (spots[spaceR][spaceC + 1].isObstacle())
         return 0;
      else{
         spaceC++;
         return 1;
      }
   }
   
   return 0;
}
int Room::moveUp(){
   if(spots[spaceR][spaceC].hasDoor() && spaceR = 0){
      return 3;
   }
   
   if (spaceC >= 1){
      if (spots[spaceR - 1][spaceC].isObstacle())
         return 0;
      else{
         spaceR--;
         return 1;
      }
   }
   
   return 0;
}
int Room::moveDown(){
   if(spots[spaceR][spaceC].hasDoor() && spaceR = 0){
      return 5;
   }
   
   if (spaceC <= 5){
      if (spots[spaceR + 1][spaceC].isObstacle())
         return 0;
      else{
         spaceR++;
         return 1;
      }
   }
   
   return 0;
}
