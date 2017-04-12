#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

#include "Room.h"

class Move
{
   public:
	  /** Move the Player left, will move to left room if the space has a (unlocked)door and is at the edge
	  * @return If the operation is succesful.
	  */
      bool moveLeft();
	  /** Move the Player right, will move to right room if the space has a (unlocked)door and is at the edge
	  * @return If the operation is succesful.
	  */
      bool moveRight();
	  /** Move the Player up, will move to up room if the space has a (unlocked)door and is at the edge
	  * @return If the operation is succesful.
	  */
      bool moveUp();
	  /** Move the Player down, will down to left room if the space has a (unlocked)door and is at the edge
	  * @return If the operation is succesful.
	  */
      bool moveDown();
      void printMap();


      int getSpaceR() {return spaceR;}
      int getSpaceC() {return spaceC;}
      int getRoomC() {return roomC;}
      int getRoomR() {return roomR;}

      Room* getCurrrentRoom() {return &dLayout[roomR][roomC];};
      Space* getCurrentSpace(){return dLayout[roomR][roomC].getSpot(spaceR, spaceC);}
      Move();
      void printRoom();
      int getMonsterNow();
   protected:

   private:
      bool moveRoomLeft();
      bool moveRoomRight();
      bool moveRoomUp();
      bool moveRoomDown();

      ///Player coordinates
      int spaceR;
      int spaceC;
      int roomR;
      int roomC;


      ///Constants
      const static int SIZE_OF_ROOM = 7; /**< Number of spaces inside of the room */
      const static int SIZE_OF_MAP = 0;
      const static int DOWN_RIGHT_EDGE_ROOM = SIZE_OF_ROOM - 1; /**< (x) The furtherest right || y the furtherest down */
      const static int UP_LEFT_EDGE_ROOM = 0; /**< (x) The furtherest left || y the furtherest up */

      //Room ** dLayout = 0;
   // {0,0,0,0,0,11,12}
   // {0,0,0,0,9,10,0}
   // {0,0,0,0,8,0,0}
   // {0,0,0,6,7,0,0}
   // {0,0,0,5,0,0,0}
   // {0,2,3,4,0,0,0}
   // {0,1,0,0,0,0,0}
   std::vector< std::vector<int> > t_1 = {{0,0,0,3,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,6,0,0,0,0,2},
                                       {0,0,0,1,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,3,0,0,7,0,0},
                                       {0,0,0,0,0,0,0},
                                       };

std::vector< std::vector<int> > t_2 = {{0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,3},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,3,0,0,0},
                                      };

std::vector< std::vector<int> > t_3 = {{0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {3,0,0,0,0,0,3},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                      };

std::vector< std::vector<int> > t_4 = {{0,0,0,3,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {3,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      };

std::vector< std::vector<int> > t_5 = {{0,0,0,3,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,3,0,0,0},
                                      };

std::vector< std::vector<int> > t_6 = {{0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,3},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,3,0,0,0},
                                      };

std::vector< std::vector<int> > t_7 = {{0,0,0,3,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {3,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      };

std::vector< std::vector<int> > t_8 = {{0,0,0,3,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,3,0,0,0},
                                      };

std::vector< std::vector<int> > t_9 = {{0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,3},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,3,0,0,0},
                                      };

std::vector< std::vector<int> >t_10 = {{0,0,0,3,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {3,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      };

std::vector< std::vector<int> > t_11 = {{0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,3},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,3,0,0,0},
                                      };

std::vector< std::vector<int> > t_12 = {{0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {3,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      };

std::vector< std::vector<int> > t_13 = {{0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      {0,0,0,0,0,0,0},
                                      };

//      std::vector< std::vector<Room*> > dLayout = {
//         {new Room(0), new Room(0),   new Room(0),   new Room(0),   new Room(0),   new Room(t_11), new Room(t_12)},
//         {new Room(0), new Room(0),   new Room(0),   new Room(0),   new Room(t_9), new Room(t_10), new Room(0)},
//         {new Room(0), new Room(0),   new Room(0),   new Room(0),   new Room(t_8), new Room(0),    new Room(0)},
//         {new Room(0), new Room(0),   new Room(0),   new Room(t_6), new Room(t_7), new Room(0),    new Room(0)},
//         {new Room(0), new Room(0),   new Room(0),   new Room(t_5), new Room(0),   new Room(0),    new Room(0)},
//         {new Room(0), new Room(t_2), new Room(t_3), new Room(t_4), new Room(0),   new Room(0),    new Room(0)},
//         {new Room(0), new Room(t_1), new Room(0),   new Room(0),   new Room(0),   new Room(0),    new Room(0)}
//      };

      //std::vector< std::vector<Room> > dLayout;
      Room dLayout[7][7];

      std::vector< std::vector<int> > Map = {
         {0, 0, 0, 0, 0, 11, 12},
         {0, 0, 0, 0, 9, 10, 0},
         {0, 0, 0, 0, 8, 0,  0},
         {0, 0, 0, 6, 7, 0,  0},
         {0, 0, 0, 5, 0, 0,  0},
         {0, 2, 3, 4, 0, 0,  0},
         {0, 1, 0, 0, 0, 0,  0}
      };

      ///Dialog
       std::string d_obstacleFailure = "Looks like there is an object in the way. That fills you with determination!";
       std::string d_noDoor = "Looks like there is not a door there.";
       std::string d_doorIsLocked = "Looks like that this door needs to be unlocked.";

};

#endif // MOVE_H_INCLUDED
