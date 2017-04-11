#include <iostream>
// #include "dungeonGeration.h"
#include "player.h"
#include "map.h"
//#include "menu.h"
#include "../include/Room.h"
using namespace std;

int main(){
    map m;
    m.MakeMap();
    
    player steve;
    string playername;
    int playerposX;
    int playerposY;
    
    cout << "What is your name?" << endl;
    cin >> playername;
    steve.setName(playername);
    
  //  menu menu;
    
    
    
   // m.PrintMap();	

    cout << endl;
    cout << endl;
    // Makes and Prints out dunguen map
    m.MakePlayerMap();
    m.UpdatePlayerMap();
    m.PlayerMapPrint();
    
    cout << "You looks around, and this is the room you see:" << endl;
    //Print out starting layout.
    
    Room room = Room({{0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       {0,0,0,0,0,0,0},
                                       });
    room.printRoom();
    room.printRoom();
    

}
