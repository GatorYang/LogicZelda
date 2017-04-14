#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

#include "space.h"
#include <vector>

class Room
{
   private:
      ///Functions
      /** Sets up the spaces of the room */
      void spaceSetUp();
      ///Constants
      const static int SIZE_OF_ROOM = 7; /**< Number of spaces inside of the room */
      int moveLeft();
      int moveRight();
      int moveDown();
      int moveUp();
      void determineCount();

      ///Member Variables
      std::vector< std::vector<Space> > spots; /**< 2D array of the spaces within the room */
      int spaceR;
      int spaceC;
      bool real;
      int monCount;
      int t_1Count;
      int t_2Count;
      int t_3Count;
      int t_4Count;
      int t_5Count;
      int t_6Count;
      int t_7Count;
      
      
      std::vector< std::vector<int> > t_1 = {
         {0,0,0,21,0,0,0},
         {0,0,0,0,0,1,0},
         {0,0,0,0,0,0,0},
         {21,0,0,0,0,0,21},
         {0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,21,0,0,0},
         };

      std::vector< std::vector<int> > t_2 = {
         {0,0,0,21,0,0,0},
         {0,2,0,0,0,0,0},
         {0,0,0,0,0,4,0},
         {21,0,0,0,0,0,21},
         {0,0,0,0,0,0,0},
         {0,0,6,0,0,0,0},
         {0,0,0,21,0,0,0},
         };

      std::vector< std::vector<int> > t_3 = {
         {0,0,0,21,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,3,0,0,0,0},
         {21,0,0,0,0,0,21},
         {0,0,0,0,0,0,0},
         {0,9,0,0,0,8,0},
         {0,0,0,21,0,0,0},
         };

      std::vector< std::vector<int> > t_4 = {
         {0,0,0,21,0,0,0},
         {0,0,7,0,0,0,0},
         {0,0,0,0,0,0,0},
         {21,0,0,4,0,0,21},
         {0,0,0,0,0,15,0},
         {0,0,0,0,0,0,0},
         {0,0,0,21,0,0,0},
         };

      std::vector< std::vector<int> > t_5 = {
         {0,0,0,21,0,0,0},
         {0,0,14,0,0,0,0},
         {0,0,0,0,0,0,0},
         {21,0,0,0,5,0,21},
         {0,0,0,0,0,0,0},
         {0,1,0,0,0,0,0},
         {0,0,0,21,0,0,0},
         };

      std::vector< std::vector<int> > t_6 = {
         {0,0,0,21,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,0,10,0,0},
         {21,0,0,0,0,6,21},
         {0,0,0,0,0,0,0},
         {0,11,0,0,0,12,0},
         {0,0,0,21,0,0,0},
         };

      std::vector< std::vector<int> > t_7 = {
         {0,0,0,21,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,16,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0},
         };

   protected:
   
   public:

      /** Gives the Space object in that spot
	  * @param  x : the x coordinate
	  * @param  y : the y coordinate
	  * @return spot : Space object
	  */
      Space* getSpot(int r, int c) { return &spots[r][c]; }
      bool exists(){ return real;}

      Room();

      int getMonsterX();
      int getMonsterY();
      int getMonVal();
      
      int move (char dir);

      void setUpRoom(std::vector< std::vector<int> > spaceValues);
      void setUpRoomInt(int type);


      /// 0: Empty 1:Monster 2: Obstacle 3: Door
      Room(std::vector< std::vector<int> > spaceValues);

      void printRoom();
      void killMon();
      
      void rightRoom();
      void leftRoom();
      void upRoom();
      void downRoom();
      
      int getMonCount(){ return monCount; }

};

#endif // ROOM_H
