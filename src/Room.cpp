#include "../include/Room.h"
#include "../include/Space.h"
#include <vector>
#include <iostream>
using namespace std;

Room::Room(){
   real = false;
   spaceC = 0;
   spaceR = 0;
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

/**
 * Prints room
 * If spot value is a monster (between 1 and 16), then output M for monster
 * If spot is the player, then output P for the player
 * Walls will be X 
 * Everything else display " "
 * use \t to space out the map in correct proportions
 */ 
void Room::printRoom(){
   for(int r = 0; (unsigned) r < spots.size(); r++){
      for(int c = 0; (unsigned) c < spots[0].size(); c++){
         if(spaceR == r && spaceC == c)
           cout << "P" << " ";
         else if (spots[r][c].getValue() >= 1 && spots[r][c].getValue() <= 16) {
            cout << "M" << " ";
         }else if(spots[r][c].getValue() == 21)
         {
            cout <<"D" << " ";
         }else
          cout << "-" << " ";
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

void Room::setUpRoomInt(int type){
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
   if(dir == 'u' || dir == 'w')
     return  moveUp();
   if(dir == 'd' || dir == 's')
     return  moveDown();
   else
     return 0;
}
/**
 * The following four functions control the movement of the player
 * around the room. They check the bounds so that the player doesn't go
 * off screen.
 */ 
int Room::moveLeft(){
   if(spots[spaceR][spaceC].hasDoor() && spaceC == 0){
      return 4;
   }
   
   if (spaceC >= 1){
      if (spots[spaceR][spaceC - 1].isObstacle()) {
         cout << "Yo you dummy! There's an obstacle there" << endl;
         return 0;
      }
         
      else{
         spaceC--;
         return 1;
      }
   }
   
   return 0;
}
int Room::moveRight(){
   if(spots[spaceR][spaceC].hasDoor() && spaceC == 6){
      return 2;
   }
   
   if (spaceC <= 5){
      if (spots[spaceR][spaceC + 1].isObstacle()) {
         cout << "Yo you dummy! There's an obstacle there" << endl;
         return 0;
      }
      else{
         spaceC++;
         return 1;
      }
   }
   
   return 0;
}
int Room::moveUp(){
   if(spots[spaceR][spaceC].hasDoor() && spaceR == 0){
      return 3;
   }
   
   if (spaceR >= 1){
      if (spots[spaceR - 1][spaceC].isObstacle()) {
         cout << "Yo you dummy! There's an obstacle there" << endl;
         return 0;
      }
      else{
         spaceR--;
         return 1;
      }
   }
   
   return 0;
}
int Room::moveDown(){
   if(spots[spaceR][spaceC].hasDoor() && spaceR == 0){
      return 5;
   }
   
   if (spaceR <= 5){
      if (spots[spaceR + 1][spaceC].isObstacle()) {
         cout << "Yo you dummy! There's an obstacle there" << endl;
         return 0;
      }
      else{
         spaceR++;
         return 1;
      }
   }
   
   return 0;
}

int Room::getMonVal(){
   return spots[spaceR][spaceC].getMonVal();
}

void Room::killMon()
{
   spots[spaceR][spaceC].killMon();
}
