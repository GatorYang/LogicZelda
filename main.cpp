#include <iostream>
#include "player.h"
#include "map.h"
#include "menu.h"
#include <string>
#include <vector>
#include "include/Room.h"
#include "monster.h"
#include <unistd.h> // for sleep()

using namespace std;

void animation(string ani){
	cout << ani << std::flush;
    for (int x = 0; x < 0; x++ ) {
        sleep(1);
        cout  << "\b\\" << flush;
        sleep(1);
        cout  << "\b|" << flush;
        sleep(1);
        cout  << "\b/" << flush;
        sleep(1);
        cout  << "\b-" << flush;
    }
}


void startUp()
{
  animation("Starting Up...");
    cout << endl;
    animation("Looking for the Map...");
    cout << endl;
    animation("Finding Rooms...");
    cout << endl;
    animation("Understanding Monsters...");
    cout << endl;
    animation ("Getting Question...");
    cout << endl;
    
    cout<<"Done..." << endl;
    cout << "Team-22 Presents:"<<endl;
    for(int x = 0; x < 20; x ++)
    cout<<endl;
}

int main()
{
  startUp();
  
  map map;
  map.MakeMap();
  
  player player;
  string playerName = "";
  menu menu;
  
  
  
  cout << "What is your name?: ";
  cin >> playerName;
  cin.clear();
  cin.ignore(10000, '\n'); /* Clears out the input incase the user includes multiple words seperated by spaces. */
  
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
     
     cout << "Input: ";
     cin >> input;
     cout << endl;
     cin.ignore(10000, '\n');
     bool check = true;
     
    /* Various Player Input */ 
    //Compare returns 0 therefore we need ! to make it true. 
    if(!input.compare("HELP"))
    {
      menu.openmenu();
      check = false;
    }
    if(!input.compare("QUIT"))
    {
      menu.exitGame(player);
      check = false;
    }
    if(player.getHealth() <=0)
    {
      menu.playerDeath(player);
    }
    if(!input.compare("SCORE"))
    {
      cout << "Score: " << player.getScores() << endl;
      check = false;
    }
    if(!input.compare("MAP")){
      map.UpdatePlayerMap2();
      map.PlayerMapPrint();
      check = false;
    }
    if(!input.compare("HEALTH")){
     cout << "Your current health is " << player.getHealth() << " Out of 10!" << endl;
     check = false;
    }
    if(!input.compare("STUCK")){
      cout << "welp, sorry, but you got stuck and starved to death :)" << endl;
      menu.playerDeath(player);
      check = false;
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
      check = false;
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
      check = false;
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
      check = false;
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
      check = false;
    }
    
    if (check){
      cout << "unaccaptable input!" << endl;
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
          cout << "\n\n\n\nWrong answer. Looks like you take some damage. Try again." << endl;
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