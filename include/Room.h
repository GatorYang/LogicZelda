#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

#include "Space.h"
#include <vector>

class Room
{
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
      int getMonVal(){ return spots[spaceR][spaceC].getMonVal(); };
      
      int move (char dir);

      void setUpRoom(std::vector< std::vector<int> > spaceValues);
      void setUpRoom(int type);


      /// 0: Empty 1:Monster 2: Obstacle 3: Door
      Room(std::vector< std::vector<int> > spaceValues);

      void printRoom();

   protected:

   private:
      ///Functions
      /** Sets up the spaces of the room */
      void spaceSetUp();
s
      ///Constants
      const static int SIZE_OF_ROOM = 7; /**< Number of spaces inside of the room */

      ///Member Variables
      std::vector< std::vector<Space> > spots; /**< 2D array of the spaces within the room */
      int SpaceR;
      int SpaceC;
      bool real;
      
      int moveLeft();
      int moveRight();
      int moveDown();
      int moveUp();
      
      std::vector< std::vector<int> > t_1 = {
         {0,0,0,3,0,0,0},
         {0,0,0,0,0,0,0},
         {0,6,0,0,0,0,2},
         {0,0,0,1,0,0,0},
         {0,0,0,0,0,0,0},
         {0,3,0,0,7,0,0},
         {0,0,0,0,0,0,0},
         };

      std::vector< std::vector<int> > t_2 = {
         {0,0,0,3,0,0,0},
         {0,0,0,0,0,0,0},
         {0,6,0,0,0,0,2},
         {0,0,0,1,0,0,0},
         {0,0,0,0,0,0,0},
         {0,3,0,0,7,0,0},
         {0,0,0,0,0,0,0},
         };

      std::vector< std::vector<int> > t_3 = {
         {0,0,0,3,0,0,0},
         {0,0,0,0,0,0,0},
         {0,6,0,0,0,0,2},
         {0,0,0,1,0,0,0},
         {0,0,0,0,0,0,0},
         {0,3,0,0,7,0,0},
         {0,0,0,0,0,0,0},
         };

      std::vector< std::vector<int> > t_4 = {
         {0,0,0,3,0,0,0},
         {0,0,0,0,0,0,0},
         {0,6,0,0,0,0,2},
         {0,0,0,1,0,0,0},
         {0,0,0,0,0,0,0},
         {0,3,0,0,7,0,0},
         {0,0,0,0,0,0,0},
         };

      std::vector< std::vector<int> > t_5 = {
         {0,0,0,3,0,0,0},
         {0,0,0,0,0,0,0},
         {0,6,0,0,0,0,2},
         {0,0,0,1,0,0,0},
         {0,0,0,0,0,0,0},
         {0,3,0,0,7,0,0},
         {0,0,0,0,0,0,0},
         };

      std::vector< std::vector<int> > t_6 = {
         {0,0,0,3,0,0,0},
         {0,0,0,0,0,0,0},
         {0,6,0,0,0,0,2},
         {0,0,0,1,0,0,0},
         {0,0,0,0,0,0,0},
         {0,3,0,0,7,0,0},
         {0,0,0,0,0,0,0},
         };;

      std::vector< std::vector<int> > t_7 = {
         {0,0,0,3,0,0,0},
         {0,0,0,0,0,0,0},
         {0,6,0,0,0,0,2},
         {0,0,0,1,0,0,0},
         {0,0,0,0,0,0,0},
         {0,3,0,0,7,0,0},
         {0,0,0,0,0,0,0},
         };


};

#endif // ROOM_H
