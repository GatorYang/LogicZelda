#include "Move.h"
#include "Def.h"
#include <iostream>

bool Move::moveLeft(){
  if( !(currentRoom.getSpot().getDoorLocked()) && (currentRoom.getSpot().getIsDoor()) && currentSpaceX == UP_LEFT_EDGE_ROOM )
  {
     //std::cout << d_moveToLeftRoom;
     return moveRoomLeft();
  }

  if( currentSpaceX - 1 >= 0 && (currentRoom.getSpot(currentSpaceX - 1, currentSpaceY).getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(currentSpaceX - 1 >= 0)
  {
     //std::cout << d_moveLeft;
     currentSpaceX--;
     return true;
  }
}
bool Move::moveRoomLeft()
{
  if(Map[currentRoomX -1][currentRoomY] != 0){
   currentRoomX--;
   currentRoom = Map.Map[currentRoomX][currentRoomY];
   currentSpaceX = DOWN_RIGHT_EDGE_ROOM;
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}


bool Move::moveRight(){

  if( !(currentRoom.getSpot().getDoorLocked()) && (currentRoom.getSpot().getIsDoor()) && currentSpaceX == DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveToRightRoom;
     return moveRoomRight();
  }

  if( (currentSpaceX + 1 <= SIZE_OF_ROOM - 1) && (currentRoom.getSpot(currentSpaceX + 1, currentSpaceY).getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(currentSpaceX + 1 <= DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     currentSpaceX++;
     return true;
  }
}
bool Move::moveRoomRight()
{
  if(Map[currentRoomX + 1][currentRoomY] != 0){
   currentRoomX++;
   currentRoom = Map.Map[currentRoomX][currentRoomY];
   currentSpaceX = UP_LEFT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}

bool Move::moveUp(){

  if( !(currentRoom.getSpot().getDoorLocked()) && (currentRoom.getSpot().getIsDoor()) && currentSpaceY == UP_LEFT_EDGE_ROOM)
  {
     //std::cout << d_moveToUpRoom;
     return moveRoomUp();
  }

  if( (currentSpace Y - 1 >= UP_LEFT_EDGE_ROOM) && (currentRoom.getSpot(currentSpaceX, currentSpaceY - 1).getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(currentSpaceY - 1 >= UP_LEFT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     currentSpaceY--;
     return true;
  }
}
bool Move::moveRoomUp()
{
  if(Map[currentRoomX][currentRoomY - 1] != 0){
   currentRoomY--;
   currentRoom = Map.Map[currentRoomX][currentRoomY];
   currentSpaceY = DOWN_RIGHT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}


bool Move::moveDown(){
  if( !(currentRoom.getSpot().getDoorLocked()) && (currentRoom.getSpot().getIsDoor()) && currentSpaceY == DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveToDownRoom;
     return moveRoomDown();
  }

  if( (currentSpace Y + 1 <= DOWN_RIGHT_EDGE_ROOM) && (currentRoom.getSpot(currentSpaceX, currentSpaceY + 1).getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(currentSpaceY + 1 <= DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     currentSpaceY++;
     return true;
  }
}
bool Move::moveRoomDown()
{
  if(Map[currentRoomX][currentRoomY + 1] != 0){
   currentRoomY++;
   currentRoom = Map.Map[currentRoomX][currentRoomY];
   currentSpaceY = UP_LEFT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}
