#include <iostream>

#include "../include/Defs.h"
#include "../include/Room.h"
#include "../include/Move.h"


bool Move::moveLeft(){
  if( !(currentRoom.getSpot(spaceX, spaceY).getDoorLocked()) && (currentRoom.getSpot(spaceX, spaceY).getIsDoor()) && spaceX == UP_LEFT_EDGE_ROOM )
  {
     //std::cout << d_moveToLeftRoom;
     return moveRoomLeft();
  }

  if( spaceX - 1 >= 0 && (currentRoom.getSpot(spaceX - 1, spaceY).getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(spaceX - 1 >= 0)
  {
     //std::cout << d_moveLeft;
     spaceX--;
     return true;
  }
  else{
   return false;
  }
}
bool Move::moveRoomLeft()
{
  if(Map[roomX -1][roomY].exists()){
   roomX--;
   currentRoom = Map[roomX][roomY];
   spaceX = DOWN_RIGHT_EDGE_ROOM;
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}


bool Move::moveRight(){

  if( !(currentRoom.getSpot(spaceX, spaceY).getDoorLocked()) && (currentRoom.getSpot(spaceX, spaceY).getIsDoor()) && spaceX == DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveToRightRoom;
     return moveRoomRight();
  }

  if( (spaceX + 1 <= SIZE_OF_ROOM - 1) && (currentRoom.getSpot(spaceX + 1, spaceY).getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(spaceX + 1 <= DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     spaceX++;
     return true;
  }else
  {
     return false;
  }
}
bool Move::moveRoomRight()
{
  if(Map[roomX + 1][roomY].exists()){
   roomX++;
   currentRoom = Map[roomX][roomY];
   spaceX = UP_LEFT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}

bool Move::moveUp(){

  if( !(currentRoom.getSpot(spaceX, spaceY).getDoorLocked()) && (currentRoom.getSpot(spaceX, spaceY).getIsDoor()) && spaceY == UP_LEFT_EDGE_ROOM)
  {
     //std::cout << d_moveToUpRoom;
     return moveRoomUp();
  }

  if( (spaceY - 1 >= UP_LEFT_EDGE_ROOM) && (currentRoom.getSpot(spaceX, spaceY - 1).getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(spaceY - 1 >= UP_LEFT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     spaceY--;
     return true;
  }else
  {
     return false;
  }
}
bool Move::moveRoomUp()
{
  if(Map[roomX][roomY - 1].exists()){
   roomY--;
   currentRoom = Map[roomX][roomY];
   spaceY = DOWN_RIGHT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}


bool Move::moveDown(){
  if( !(currentRoom.getSpot(spaceX, spaceY).getDoorLocked()) && (currentRoom.getSpot(spaceX,spaceY).getIsDoor()) && spaceY == DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveToDownRoom;
     return moveRoomDown();
  }

  if( (spaceY + 1 <= DOWN_RIGHT_EDGE_ROOM) && (currentRoom.getSpot(spaceX, spaceY + 1).getObstacle()) )
  {
     //std::cout << d_obstacleFailure;
     return false;
  }

  if(spaceY + 1 <= DOWN_RIGHT_EDGE_ROOM)
  {
     //std::cout << d_moveRight;
     spaceY++;
     return true;
  } else
  {
     return false;
  }
}

bool Move::moveRoomDown()
{
  if(Map[roomX][roomY + 1].exists()){
   roomY++;
   currentRoom = Map[roomX][roomY];
   spaceY = UP_LEFT_EDGE_ROOM; // basically 0
   return true;
  }
  else{
   //std::cout << d_roomMoveFailure;
   return false;
  }
}
