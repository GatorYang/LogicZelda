#include "../include/Space.h"
#include <stdlib.h>

Space::Space()
{
   isMonster = false;
   isObstacle = false;
   hasDoor = false;
}

Space::Space(int num)
{
   value = num;
   if(value == 0){
      isMonster= false;
      isObstacle= false;
      monVal = 0;

   } else if (value == 20){
      isMonster = false;
      isObstacle = true;
   } else if (value >=  1 && value <= 16){
      isMonster =  true;
      monVal = value;
      isObstacle = false;
   } else if (value == 21)
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

