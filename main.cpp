#include <iostream>
// #include "dungeonGeration.h"
#include "player.h"
#include "map.h"
#include "menu.h"
#include <string>
#include <vector>
#include "include/Room.h"
using namespace std;

int main(){
   // monster mon; 
    map m;
 //   room rooom;
    m.MakeMap();
    
    player steve;
    string playername;
    int playerposX;
    int playerposY;
     
    menu menu;
     
    cout << "What is your name?" << endl;
    cin >> playername;
    steve.setName(playername);
    // m.PrintMap();	

    cout << endl;
    cout << endl;
    // Makes and Prints out dunguen map
    m.MakePlayerMap();
    m.UpdatePlayerMap();
    m.PlayerMapPrint();
    
    cout << "You look around, and this is the room you see:" << endl;
    //Print out starting layout.
    
    // Room room =   Room({{0,0,0,0,0,0,0},
    //                     {0,0,0,0,0,0,0},
    //                     {0,0,0,0,0,0,0},
    //                     {0,0,0,0,0,0,0},
    //                     {0,0,0,0,0,0,0},
    //                     {0,0,0,0,0,0,0},
    //                     {0,0,0,0,0,0,0},
    //                     });
                   
    // room.printRoom();
    // room.printRoom();
    
    Room rm;
    rm.setUpRoom(m.getRoomValue);
    rm.printRoom();
    
    
    string firstRoom[7][7] = {
   {"|","-","-","D","-","-","|"},
   {"|","-","-","-","-","-","|"},
   {"|","-","-","-","-","-","|"},
   {"D","-","-","P","-","-","D"},
   {"|","-","-","-","-","-","|"},
   {"|","-","-","-","-","-","|"},
   {"|","-","-","D","-","-","|"},
    };

   for(int i = 0; i < 7; i ++){
      for(int j = 0; j < 7; j ++){
         /**
          * Need to fix the if statemen so that it displays "M" instead
          * of "-" if there is a monster at that location
          */
         //  if (monster[i][j] == true) {    //Doesn't work yet.
         //     cout << "M";  
         //  } else {
             cout << firstRoom[i][j]; 
         //  }
         
      }
      cout << endl;
   }
    
  //  cout << "OMG THERE IS A MONSTER INFRONT OF YOU!" << endl;
    
    string input;
    
    
    //player enters game, continues looping until player types in "QUIT" or dies which triggers a system exit
    while(true)
    {
       if (input == "HELP")
       {
          menu.openmenu();
       }
       if(input == "QUIT")
       {
          menu.exitGame(steve);
       }
       if(steve.getHealth() <= 0)
       {
         //  menu.playerDeath;
       }
       
       if(steve.getX() == room.getMonsterX() && steve.getY == room.getMonsterY() ) {
             /**
              * Uses askQuestions and then get answer from the user.
              * The result of the players answer is coded here.
              * If the player is wrong, they will take damage and will need to
              * answer the question again.
              */
             mon m(room.monsterType());   // this doesn't work yet. Isaiah's gonna make it work      
             bool defeated = false;
             while (!defeated) {
                if (mon.askQuestion() == true) {
                   cout << "Good job! You have defeated the Monster!";
                   defeated = true;
                } else {
                   cout << "Wrong answer... You have received damage. Try again"
                   steve.changeHealth(-1);
                }    
            }
           
    //   }
    //   if (input == "W"){
    //       //somthing move player up in the room object
    //       dLayout[mPlayer.getRoomX][mPlayer.getRoomY].printRoom();
    //   }
       
       
        
       cin >> input;
    }
    
   
    
    
    


}
