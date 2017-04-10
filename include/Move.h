#ifndef MOVE_H
#define MOVE_H

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
   protected:

   private:
      bool moveRoomLeft();
      bool moveRoomRight();
      bool moveRoomUp();
      bool moveRoomDown();

      ///Player coordinates
      int spaceX;
      int spaceY;
      int roomY;
      int roomX;


      ///Constants
      const static int SIZE_OF_ROOM = 7; /**< Number of spaces inside of the room */
      const static int SIZE_OF_MAP = 0;
      const static int DOWN_RIGHT_EDGE_ROOM = SIZE_OF_ROOM - 1; /**< (x) The furtherest right || y the furtherest down */
      const static int UP_LEFT_EDGE_ROOM = 0; /**< (x) The furtherest left || y the furtherest up */

};

#endif // MOVE_H
