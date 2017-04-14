#include "../include/Room.h"
#include "../include/Space.h"
#include "../include/Defs.h"
#include <vector>
#include <iostream>
using namespace std;

Room::Room(){
   real = false;
   spaceC = 0;
   spaceR = 0;
   monCount = 0;
   
   determineCount();
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
   spots.resize(SIZE_OF_ROOM);
   for(int x = 0; x < SIZE_OF_ROOM; x++)
   {
      spots[x].resize(SIZE_OF_ROOM);
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
           cout << "웃" << " ";
         else if (spots[r][c].getValue() >= 1 && spots[r][c].getValue() < MAX_Q) {
            cout << "۩" << " ";
         }else if(spots[r][c].getValue() == VALUE_DOOR)
         {
            cout <<"۞" << " ";
         }else if(spots[r][c].getValue() == MAX_Q)
         {
            cout <<"☠" << " ";
         }else if(spots[r][c].getValue() == VALUE_OBS)
         {
            cout <<"O" << " ";
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
   {
      setUpRoom(t_1);
      monCount = t_1Count; /* The monCount is set to the value that the constructor makes after going through the array */
   }else if (type == 2)
   {
      setUpRoom(t_2);
      monCount = t_2Count;
   }else if (type == 3)
   {
      setUpRoom(t_3);
      monCount = t_3Count;
   }else if (type == 4)
   {
      setUpRoom(t_4);
      monCount = t_4Count;
   }else if (type == 5)
   {
      setUpRoom(t_5);
      monCount = t_5Count;
   }else if (type == 6)
   {
      setUpRoom(t_6);
      monCount = t_6Count;
   }else if (type == 7)
   {
      setUpRoom(t_7);
      monCount = t_7Count;
   }
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
   if(spots[spaceR][spaceC].hasDoor() && spaceC == 0 && monCount > 0){
      cout << "Door is locked. I wonder how to unlock?" << endl;
      return 0;
   }
   
   if(spots[spaceR][spaceC].hasDoor() && spaceC == 0 && monCount == 0){
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
   }else
   {
      cout << "You can't do that. Try again." << endl;
   }
   
   return 0;
}
int Room::moveRight(){
   if(spots[spaceR][spaceC].hasDoor() && spaceC == 6 && monCount > 0){
      cout << "Door is locked. I wonder how to unlock?" << endl;
      return 0;
   }
   
   if(spots[spaceR][spaceC].hasDoor() && spaceC == 6 && monCount == 0){
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
   }else
   {
      cout << "You can't do that. Try again." << endl;
   }
   
   return 0;
}
int Room::moveUp(){
   if(spots[spaceR][spaceC].hasDoor() && spaceR == 0 && monCount > 0){
      cout << "Door is locked. I wonder how to unlock?" << endl;
      return 0;
   }
   if(spots[spaceR][spaceC].hasDoor() && spaceR == 0 && monCount == 0){
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
   }else
   {
      cout << "You can't do that. Try again." << endl;
   }
   
   return 0;
}
int Room::moveDown(){
   if(spots[spaceR][spaceC].hasDoor() && spaceR == 5 && monCount > 0){
      cout << "Door is locked. I wonder how to unlock?" << endl;
      return 0;
   }
   
   if(spots[spaceR][spaceC].hasDoor() && spaceR == 5 && monCount == 0){
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
   } else
   {
      cout << "You can't do that. Try again." << endl;
   }
   
   return 0;
}

int Room::getMonVal(){
   return spots[spaceR][spaceC].getMonVal();
}

void Room::killMon()
{
   spots[spaceR][spaceC].killMon();
   monCount--;
   
   if(monCount == 0)
   {
      cout << "The doors mysteriously unlock." << endl;
   }
}

void Room::rightRoom()
{
   spaceR = 3;
   spaceC = 0;
}

void Room::leftRoom()
{
   spaceR = 3;
   spaceC = 6;
}

void Room::upRoom()
{
   spaceR = 6;
   spaceC = 3;
}

void Room::downRoom()
{
   spaceR = 0;
   spaceC = 3;
}

void Room::determineCount()
{
   t_1Count = 0;
   t_2Count = 0;
   t_3Count = 0;
   t_4Count = 0;
   t_5Count = 0;
   t_6Count = 0;
   t_7Count = 0;

   for(int r = 0; (unsigned)r < t_1.size(); r++)
   {
      for(int c = 0; (unsigned)c < t_1[r].size(); c++)
      {
         if(t_1[r][c] >= 1 && t_1[r][c] <= MAX_Q)
         {
            t_1Count++;
         }
      }
   }
   
   for(int r = 0; (unsigned)r < t_2.size(); r++)
   {
      for(int c = 0; (unsigned)c < t_2[r].size(); c++)
      {
         if(t_2[r][c] >= 1 && t_2[r][c] <= MAX_Q)
         {
            t_2Count++;
         }
      }
   }
   
   for(int r = 0; (unsigned)r < t_3.size(); r++)
   {
      for(int c = 0; (unsigned)c < t_3[r].size(); c++)
      {
         if(t_3[r][c] >= 1 && t_3[r][c] <= MAX_Q)
         {
            t_3Count++;
         }
      }
   }
   
   for(int r = 0; (unsigned)r < t_4.size(); r++)
   {
      for(int c = 0; (unsigned)c < t_4[r].size(); c++)
      {
         if(t_4[r][c] >= 1 && t_4[r][c] <= MAX_Q)
         {
            t_4Count++;
         }
      }
   }
   
   for(int r = 0; (unsigned)r < t_5.size(); r++)
   {
      for(int c = 0; (unsigned)c < t_5[r].size(); c++)
      {
         if(t_5[r][c] >= 1 && t_5[r][c] <= MAX_Q)
         {
            t_5Count++;
         }
      }
   }
   
   for(int r = 0; (unsigned)r < t_6.size(); r++)
   {
      for(int c = 0; (unsigned)c < t_6[r].size(); c++)
      {
         if(t_6[r][c] >= 1 && t_6[r][c] <= MAX_Q)
         {
            t_6Count++;
         }
      }
   }
   
   for(int r = 0; (unsigned)r < t_7.size(); r++)
   {
      for(int c = 0; (unsigned)c < t_7[r].size(); c++)
      {
         if(t_1[r][c] >= 1 && t_7[r][c] <= MAX_Q)
         {
            t_7Count++;
         }
      }
   }
}