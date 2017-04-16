#include "../include/space.h"
#include <stdlib.h>

Space::Space()
{
   isMonster = false;
   obstacle = false;
   door = false;
}

Space::Space(int num)
{
   value = num;
   if(value == 0){
      isMonster= false;
      obstacle= false;
      monVal = 0;
      door = false;

   } else if (value == 20){
      isMonster = false;
      obstacle = true;
      monVal = 0;
      door = false;
   } else if (value >=  1 && value <= 16){
      isMonster =  true;
      monVal = value;
      obstacle = false;
      door = false;
   } else if (value == 21)
   {
      door = true;
      isMonster = false;
      obstacle = false;
      monVal = 0;
   }

}

void Space::killMon()
{
   isMonster = false;
   monVal = 0;
   value = 0;
}

