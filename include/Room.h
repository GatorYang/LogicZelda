#ifndef ROOM_H
#define ROOM_H

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
      Space getSpot(int x, int y) { return spots[x][y]; }
      bool exists(){ return real;}


      /// 0: Empty 1:Monster 2: Obstacle 3: Door
      Room(std::vector< std::vector<int> >spaceValues);
      Room();
      
      void printRoom();

   protected:

   private:
      ///Functions
      /** Sets up the spaces of the room */
      void spaceSetUp();

      ///Constants
      const static int SIZE_OF_ROOM = 7; /**< Number of spaces inside of the room */

      ///Member Variables
      Space spots[SIZE_OF_ROOM][SIZE_OF_ROOM]; /**< 2D array of the spaces within the room */
      int currentSpaceX;
      int currentSpaceY;
      bool real;


};

#endif // ROOM_H
