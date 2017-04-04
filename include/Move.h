#ifndef MOVE_H
#define MOVE_H

#include "Defs.h"

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
};

#endif // MOVE_H
