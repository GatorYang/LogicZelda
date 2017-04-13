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
  
  cout << "What is your name: ";
  cin >> playerName;
  player.setName(playerName);
  cout << endl;
  
  map.MakePlayerMap();
  map.UpdatePlayerMap();
  map.PlayerMapPrint();
  /*cout << "X: " << map.getX() << "Y: " << map.getY() << endl;*/
  
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
    
    /* Movement */
    if(!input.compare("w"))
    {
      int res = room.move('w');
      if(res > 1)
        map.moveUp();
    }
    if(!input.compare("a"))
    {
      int res = room.move('a');
      if(res > 1)
        map.moveLeft();
    }
    if(!input.compare("s"))
    {
      int res = room.move('s');
      if(res > 1)
        map.moveRight();
    }
    if(!input.compare("d"))
    {
      int res = room.move('d');
      if(res > 1)
        map.moveDown();
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
          cout << "Wrong answer. Looks like you take some damage. Try again.";
          player.changeHealth(-1);
          if(player.getHealth() <= 0)
            menu.playerDeath(player);
        }
        
        if(defeat)
           room.killMon();
      }
    }
    
    room.printRoom();
  }
}
