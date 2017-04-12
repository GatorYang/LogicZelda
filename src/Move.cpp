#include <iostream>

#include "../include/Room.h"
#include "../include/Move.h"


bool Move::moveLeft(){
  if( !(dLayout[roomR][roomC].getSpot(spaceR, spaceC)->getDoorLocked()) && (dLayout[roomR][roomC].getSpot(spaceR, spaceC)->getIsDoor()) && spaceR == UP_LEFT_EDGE_ROOM )
  {
     //std::cout << d_moveToLeftRoom;
     return moveRoomLeft();
  }

  if( spaceR - 1 >= 0 && (dLayout[roomR][roomC].getSpot(spaceR - 1, spaceC)->getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(spaceR - 1 >= 0)
  {
     //std::cout << d_moveLeft;
     spaceR--;
     return true;
  }
  else{
   return false;
  }
}
bool Move::moveRoomLeft()
{
  if(dLayout[roomR -1][roomC].exists()){
   roomR--;
   spaceR = DOWN_RIGHT_EDGE_ROOM;
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}


bool Move::moveRight(){

  if( !(dLayout[roomR][roomC].getSpot(spaceR, spaceC)->getDoorLocked()) && (dLayout[roomR][roomC].getSpot(spaceR, spaceC)->getIsDoor()) && spaceR == DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveToRightRoom;
     return moveRoomRight();
  }

  if( (spaceR + 1 <= SIZE_OF_ROOM - 1) && (dLayout[roomR][roomC].getSpot(spaceR + 1, spaceC)->getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(spaceR + 1 <= DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     spaceR++;
     return true;
  }else
  {
     return false;
  }
}
bool Move::moveRoomRight()
{
  if(dLayout[roomR + 1][roomC].exists()){
   roomR++;
   spaceR = UP_LEFT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}

bool Move::moveUp(){

  if( !(dLayout[roomR][roomC].getSpot(spaceR, spaceC)->getDoorLocked()) && (dLayout[roomR][roomC].getSpot(spaceR, spaceC)->getIsDoor()) && spaceC == UP_LEFT_EDGE_ROOM)
  {
     //std::cout << d_moveToUpRoom;
     return moveRoomUp();
  }

  if( (spaceC - 1 >= UP_LEFT_EDGE_ROOM) && (dLayout[roomR][roomC].getSpot(spaceR, spaceC - 1)->getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(spaceC - 1 >= UP_LEFT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     spaceC--;
     return true;
  }else
  {
     return false;
  }
}
bool Move::moveRoomUp()
{
  if(dLayout[roomR][roomC - 1].exists()){
   roomC--;
   spaceC = DOWN_RIGHT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}

bool Move::moveDown(){
  if( !(dLayout[roomR][roomC].getSpot(spaceR, spaceC)->getDoorLocked()) && (dLayout[roomR][roomC].getSpot(spaceR,spaceC)->getIsDoor()) && spaceC == DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveToDownRoom;
     return moveRoomDown();
  }

  if( (spaceC + 1 <= DOWN_RIGHT_EDGE_ROOM) && (dLayout[roomR][roomC].getSpot(spaceR, spaceC + 1)->getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(spaceC + 1 <= DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     spaceC++;
     return true;
  } else
  {
     return false;
  }
}

bool Move::moveRoomDown()
{
  if(dLayout[roomR][roomC + 1].exists()){
   roomC++;
   spaceC = UP_LEFT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}

void Move::printMap()
{
   std::cout << "MAP:" << std::endl;

   for(int y = 0; (unsigned)y < Map.size(); y++)
   {
      for(int x = 0; (unsigned)x < Map[x].size(); x++)
      {
         std::cout << Map[y][x] << " ";
      }
      std::cout << std::endl;
   }

   std::cout << "You are in room: " << Map[roomR][roomC] << std::endl;
}

Move::Move()
{
   dLayout[6][1].setUpRoom(t_1); //1
   dLayout[5][1].setUpRoom(t_2); //2
   dLayout[5][2].setUpRoom(t_3); //3
   dLayout[5][3].setUpRoom(t_4); //4
   dLayout[4][3].setUpRoom(t_5); //5
   dLayout[3][3].setUpRoom(t_6); //6
   dLayout[3][4].setUpRoom(t_7); //7
   dLayout[2][4].setUpRoom(t_8); //8
   dLayout[1][4].setUpRoom(t_9); //9
   dLayout[1][5].setUpRoom(t_10); //10
   dLayout[0][5].setUpRoom(t_11); //11
   dLayout[0][6].setUpRoom(t_12); //12

   roomC = 1;
   roomR = 6;
   spaceC = 3;
   spaceR = 3;
}

void Move::printRoom()
{
   dLayout[roomR][roomC].printRoom(spaceR, spaceC);
}

int Move::getMonsterNow()
{
   return dLayout[roomR][roomC].getSpot(spaceR, spaceC)->getMonVal();
}

