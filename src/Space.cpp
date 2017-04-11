#include "../include/Space.h"

//Space::Space()
//{
//   isMonster = false;
//   isObstacle = false;
//   hasDoor = false;
//}

Space::Space(int value)
{
   if(value == 0){
      isMonster= false;
      isObstacle= false;
   } else if (value == 1){
      isMonster = true;
      isObstacle = false;
   } else if (value == 2){
      isMonster =  false;
      isObstacle = true;
   } else if (value == 3)
   {
      hasDoor = true;
      doorIsLocked = false;
   }

}

//Space::Space(int value, bool hasDoor, bool isDoorLocked)
//{
//   if(value == 0){
//      isMonster= false;
//      isObstacle= false;
//   } else if (value == 1){
//      isMonster = true;
//      isObstacle = false;
//   } else if (value == 2){
//      isMonster =  false;
//      isObstacle = true;
//   }
//
//   this->hasDoor = hasDoor;
//   this->doorIsLocked = isDoorLocked;
//}

