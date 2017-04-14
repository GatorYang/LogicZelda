#include <iostream>
#include "player.h"
#include "map.h"
#include "menu.h"
#include <string>
#include <vector>
#include "include/Room.h"
#include "monster.h"
using namespace std;

int main()
{
  map map;
  map.MakeMap();
  
  player player;
  string playerName = "";
  menu menu;
  
  
  
  cout << "What is your name?: ";
  cin >> playerName;
  player.setName(playerName);
  cout << endl;
  
  map.MakePlayerMap();
  map.UpdatePlayerMap();
  map.PlayerMapPrint();
  map.PrintMap();
  
  Room room;
  cout << "Room Value : " << map.getRoomValue() << endl;
  room.setUpRoomInt(map.getRoomValue());
  room.printRoom();
  
  string input = "";
  
  /*Game Loop*/
  while(1)
  {
     cin.clear();
     cin >> input;
     
     
    /* Various Player Input */ 
    //Compare returns 0 therefore we need ! to make it true. 
    if(!input.compare("HELP"))
    {
      menu.openmenu();
    }
    if(!input.compare("QUIT"))
    {
      menu.exitGame(player);
    }
    if(player.getHealth() <=0)
    {
      menu.playerDeath(player);
    }
    if(!input.compare("SCORE"))
    {
      cout << "Score: " << player.getScores() << endl;
    }
    if(!input.compare("MAP")){
      map.UpdatePlayerMap2();
      map.PlayerMapPrint();
    }
    
    
    /* Movement */
    if(!input.compare("w"))
    {
      int res = room.move('w');
      if(res > 1)
      {
        if(map.moveUp())
        {
          room.setUpRoomInt(map.getRoomValue());
          room.upRoom();
          map.UpdatePlayerMap2();
        }
      }
    }
    if(!input.compare("a"))
    {
      int res = room.move('a');
      if(res > 1)
      {
        if(map.moveLeft())
        {
          room.setUpRoomInt(map.getRoomValue());
          room.leftRoom();
          map.UpdatePlayerMap2();
        }
      }
    }
    if(!input.compare("s"))
    {
      int res = room.move('s');
      if(res > 1)
      {
        if(map.moveDown())
        {
          room.setUpRoomInt(map.getRoomValue());
          room.downRoom();
          map.UpdatePlayerMap2();
        }
      }
    }
    if(!input.compare("d"))
    {
      int res = room.move('d');
      if(res > 1)
      {
        if(map.moveRight())
        {
          room.setUpRoomInt(map.getRoomValue());
          room.rightRoom();
          map.UpdatePlayerMap2();
        }
      }
    }
    
    /* Monster Encounter */ 
    if(room.getMonVal() >= 1 && room.getMonVal() <= 16)
    {
      monster monster(room.getMonVal());
      bool defeat = false;
      
      while(!defeat)
      {
        if (monster.askQuestion())
        {
          cout << "Good Job! You have defeated the Monster!" << endl;
          defeat = true;
        } else
        {
          cout << "Wrong answer. Looks like you take some damage. Try again." << endl;
          player.changeHealth(-1);
          if(player.getHealth() <= 0)
            menu.playerDeath(player);
        }
        
        if(defeat && room.getMonVal() == 16)
        {
          player.changeScore(42);
          menu.winGame(player);
        }
        if(defeat)
        {
          room.killMon();
          player.changeScore(1);
        }
      }
    }
    
    
    /* Print out the Room at the end of each iteration. */
    room.printRoom();
  }
}