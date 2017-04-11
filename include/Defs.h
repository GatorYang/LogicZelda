#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

#include "Space.h"
#include "Move.h"
#include "Room.h"

/* class Space;
 * class Room;
 * class Move;
 */

std::vector< std::vector<Room> > dungeonLayout;
Move PlayerM;
Room currentRoom;

///Dialog
std::string d_obstacleFailure = "Looks like there is an object in the way. That fills you with determination!";
std::string d_noDoor = "Looks like there is not a door there.";
std::string d_doorIsLocked = "Looks like that this door needs to be unlocked.";

#endif // DEFS_H_INCLUDED