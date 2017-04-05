#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED

#include <string>
#include "Move.h"
#include "Room.h"
#include "Space.h"




Room Map[][];
Move PlayerM = new Move();

Room currentRoom;


///Player coordinates
int currentRoomX;
int currentRoomY;
int currentSpaceX;
int currentSpaceY;

///Dialog
std::string d_obstacleFailure = "Looks like there is an object in the way. That fills you with determination!"
std::string d_noDoor = "Looks like there is not a door there.";
std::string d_doorIsLocked = "Looks like that this door needs to be unlocked.";

///Constants
const int SIZE_OF_ROOM = 7; /**< Number of spaces inside of the room */
const int SIZE_OF_MAP = 0;
const int DOWN_RIGHT_EDGE_ROOM = SIZE_OF_ROOM - 1; /**< (x) The furtherest right || y the furtherest down */
const int UP_LEFT_EDGE_ROOM = 0; /**< (x) The furtherest left || y the furtherest up */
#endif // DEFS_H_INCLUDED
