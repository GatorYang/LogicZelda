#ifndef ROOM_H
#define ROOM_H
#include "Defs.h"

class Room
{
   public:
      Room();
      virtual ~Room();
	  
      /** Gives the Space object in that spot
	  * @param  x : the x coordinate
	  * @param  y : the y coordinate
	  * @return spot : Space object
	  */
      Space getSpot(int x, int y) { return spots[x][y]; }

   protected:

   private:
      /** Sets up the spaces of the room */
      void spaceSetUp();

      Space spots[SIZE_OF_ROOM][SIZE_OF_ROOM]; /**< 2D array of the spaces within the room */
};

#endif // ROOM_H
