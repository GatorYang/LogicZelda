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
      
      /*These functions are called by move in respective of the given char direction corresponding to wasd.*/
      int moveLeft();
      int moveRight();
      int moveDown();
      int moveUp();
      
      /*Determines the amount of monsters are in each of the templates and the assigns it to a corresponding t_#Count*/
      void determineCount();

      ///Member Variables
      std::vector< std::vector<Space> > spots; /**< 2D array of the spaces within the room */
      
      /*The current location of the player within the room*/
      int spaceR;
      int spaceC;
      
      /* Values related to the amount of questions we are doing. THen the relation of the door and obstacle */
      int MAX_Q = 16;
      int VALUE_DOOR = 21;
      int VALUE_OBS = 20;
      
      /*if the room exists*/
      bool real;
      
      /*The current monster count in the current room*/
      int monCount;
      
      /*The number of monsters in each of the teamplates*/
      int t_1Count;
      int t_2Count;
      int t_3Count;
      int t_4Count;
      int t_5Count;
      int t_6Count;
      int t_7Count;
      
      /*Seven room templates for loading various rooms when the player enters them*/
      std::vector< std::vector<int> > t_1 = {
         {0,0,0,VALUE_DOOR,0,0,0},
         {0,0,0,0,0,1,0},
         {0,0,0,0,0,0,0},
         {VALUE_DOOR,0,0,0,0,0,VALUE_DOOR},
         {0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,VALUE_DOOR,0,0,0},
         };

      std::vector< std::vector<int> > t_2 = {
         {0,0,0,VALUE_DOOR,0,0,0},
         {0,2,0,0,0,0,0},
         {0,0,0,0,0,4,0},
         {VALUE_DOOR,0,0,0,0,0,VALUE_DOOR},
         {0,0,0,0,0,0,0},
         {0,0,6,0,0,0,0},
         {0,0,0,VALUE_DOOR,0,0,0},
         };

      std::vector< std::vector<int> > t_3 = {
         {0,0,0,VALUE_DOOR,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,3,0,0,0,0},
         {VALUE_DOOR,0,0,0,0,0,VALUE_DOOR},
         {0,0,0,0,0,0,0},
         {0,9,0,0,0,8,0},
         {0,0,0,VALUE_DOOR,0,0,0},
         };

      std::vector< std::vector<int> > t_4 = {
         {0,0,0,VALUE_DOOR,0,0,0},
         {0,0,7,0,0,0,0},
         {0,0,0,0,0,0,0},
         {VALUE_DOOR,0,0,4,0,0,VALUE_DOOR},
         {0,0,0,0,0,15,0},
         {0,0,0,0,0,0,0},
         {0,0,0,VALUE_DOOR,0,0,0},
         };

      std::vector< std::vector<int> > t_5 = {
         {0,0,0,VALUE_DOOR,0,0,0},
         {0,0,14,0,0,0,0},
         {0,0,0,0,0,0,0},
         {VALUE_DOOR,0,0,0,5,0,VALUE_DOOR},
         {0,0,0,0,0,0,0},
         {0,1,0,0,0,0,0},
         {0,0,0,VALUE_DOOR,0,0,0},
         };

      std::vector< std::vector<int> > t_6 = {
         {0,0,0,VALUE_DOOR,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,0,10,0,0},
         {VALUE_DOOR,0,0,0,0,6,VALUE_DOOR},
         {0,0,0,0,0,0,0},
         {0,11,0,0,0,12,0},
         {0,0,0,VALUE_DOOR,0,0,0},
         };

      std::vector< std::vector<int> > t_7 = {
         {0,0,0,VALUE_DOOR,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0},
         {0,0,0,MAX_Q,0,0,0},
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
      
      /*Returns if the desired room is real*/
      bool exists(){ return real;}
      
      /*Constructor*/
      Room();

      /*Returns the x and y position of a monster*/
      int getMonsterX();
      int getMonsterY();
      
      /*Returns the value of the monster of where the player is right now.
      0: indcates that there is no Monster
      1~MAX_Q: indcates that there is a monster there and what type it is*/
      int getMonVal();
      
      /*Param: direction corresponding to wasd on the keyboard, then moves the player in the room accordingly if it can be done
      Returns:
      0: moved Failed
      1> : indcates that the player has tried to go through an unlocked door, and need to send that request to map object.*/
      int move (char dir);

     /* Sets up a room based on a vector of vectors*/
      void setUpRoom(std::vector< std::vector<int> > spaceValues);
      
      /*Sets up a room based on an int that corresponds to a particular template of t_*/
      void setUpRoomInt(int type);


      /*Constructor that take a vector of int vectors*/
      Room(std::vector< std::vector<int> > spaceValues);

      /*Prints the current room where the player is.
      Gives the current location of where the player, monsters, and doors are*/
      void printRoom();
      
      /*Kills the monster in the space that the player is currently in*/ 
      void killMon();
      
      /*If the player is successful is moving rooms, then a one of these functions is called in relation of where the new room is compared to the prior room*/
      void rightRoom();
      void leftRoom();
      void upRoom();
      void downRoom();
      
      /*Returns the current amount of monsters in the room*/
      int getMonCount(){ return monCount; }

};

#endif // ROOM_H
