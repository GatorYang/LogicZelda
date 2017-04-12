#include <string>
#include <vector>
#include <iostream>
#include "map.h"

using namespace std;
//Trial Print room Made by Robert It also incorporatess movement to a degree. 
int main(){
   
    map m;
    m.MakeMap();
   cout << "Welcome to the MiniGame! Use 1234 to move.";
     cout << endl;
   cout << endl;
   m.PrintMap();
   cout << endl;
   cout << endl;
   // Makes and Prints out dunguen map
    m.MakePlayerMap();
    m.UpdatePlayerMap();
    m.PlayerMapPrint();
   cout << endl;
   cout << endl;
   cout << "You look around your surroundings... P is player and D is door. " << endl;
   cout << endl;
string firstRoom[7][7] = {
   {"|","-","-","D","-","-","|"},
   {"|","-","-","-","-","-","|"},
   {"|","-","-","-","-","-","|"},
   {"D","-","-","P","-","-","D"},
   {"|","-","-","-","-","-","|"},
   {"|","-","-","-","-","-","|"},
   {"|","-","-","D","-","-","|"},
};

string secondRoom[7][7] = {
   {"|","-","-","D","-","-","|"},
   {"|","M","-","M","-","M","|"},
   {"|","-","-","-","-","-","|"},
   {"D","-","-","-","-","-","D"},
   {"|","-","-","-","-","-","|"},
   {"|","-","-","P","-","-","|"},
   {"|","-","-","D","-","-","|"},
};



   for(int i = 0; i < 7; i ++){
      for(int j = 0; j < 7; j ++){
         cout << firstRoom[i][j] << '\t';
      }
      cout << endl;
   }
   
   bool rightDoor = true;
   bool downDoor = true;
   bool leftDoor = true;
   bool upDoor = true; 
   
    cout<< "Row is.. " << m.playerRoomY << endl;
    cout<< "Col is.. " << m.playerRoomX << endl;
   //Right Door check
   if(m.playerRoomX +1 > 3)
		rightDoor = false;
	else if(m.mainMap[m.playerRoomY ][m.playerRoomX + 1] == 0){
		rightDoor = false;
	}
	else
		rightDoor = true;
	
	//Down door Check
	if(m.playerRoomY + 1 > 3)
		downDoor = false;
	else if(m.mainMap[m.playerRoomY+1][m.playerRoomX] == 0){
		downDoor = false;
	}
	else
		downDoor = true;
	
	//Left Door Check
	if(m.playerRoomX - 1 < 0)
		leftDoor = false;
	else if(m.mainMap[m.playerRoomY ][m.playerRoomX - 1] == 0){
		leftDoor = false;
	}
	else
		leftDoor = true;
		
	//Up Door check
	if(m.playerRoomY - 1 < 0)
		upDoor = false;
	else if(m.mainMap[m.playerRoomY-1][m.playerRoomX] == 0){
		upDoor = false;
	}
	else
		upDoor = true;
	
	
	if(!rightDoor)
		cout<< "You notice the right door is blocked." << endl;
	if(!downDoor)
		cout<< "You notice the down door is blocked." << endl;
	if(!upDoor)
		cout<< "You notice the up door is blocked." << endl;
	if(!leftDoor)
		cout<< "You notice the left door is blocked." << endl;
   
  int placeHolderX = 3;
  int placeHolderY = 3;
  bool mexican = true;
   
   int input;
   while(mexican){
      
      
      cin >> input;
      if(input == 1){
         if(placeHolderX == 0){
            cout << "You cannot move that way try again!" << endl;
         }
         else{
         firstRoom[placeHolderX][placeHolderY] = "-";
         firstRoom[placeHolderX - 1][placeHolderY] = "P";
         placeHolderX = placeHolderX - 1;
         }
      }
      else if (input == 2){
          if(placeHolderX == 6){
            cout << "You cannot move that way try again!" << endl;
         }
         else{
         firstRoom[placeHolderX][placeHolderY] = "-";
         firstRoom[placeHolderX + 1][placeHolderY] = "P";
         placeHolderX = placeHolderX + 1;
         }
      }
      
      else if (input == 3){
          if(placeHolderY == 1){
            cout << "You cannot move that way try again!" << endl;
         }
         else{
         firstRoom[placeHolderX][placeHolderY] = "-";
         firstRoom[placeHolderX][placeHolderY - 1] = "P";
         placeHolderY = placeHolderY - 1;
         }
      }
      
       else if (input == 4){
          if(placeHolderY == 5){
            cout << "You cannot move that way try again!" << endl;
         }
         else{
         firstRoom[placeHolderX][placeHolderY] = "-";
         firstRoom[placeHolderX][placeHolderY + 1] = "P";
          placeHolderY = placeHolderY + 1;
         }
      }
      
      if(placeHolderX == 0 && placeHolderY == 3){
         cout << "You have entered the room above you!" << endl; 
         cout << "You look around and see a new room!" << endl; 
         placeHolderX = 5;
         mexican = false;
         break;
      }
      
      for(int i = 0; i < 7; i ++){
         for(int j = 0; j < 7; j ++){
          cout << firstRoom[i][j] << '\t';
         }
         cout << endl;
      }
   }
   
   for(int i = 0; i < 7; i ++){
      for(int j = 0; j < 7; j ++){
         cout << secondRoom[i][j] << '\t';
      }
      cout << endl;
   }
   
   bool pizza = true;
   while(pizza){
      cin >> input;
      if(input == 1){
         if(placeHolderX == 0){
            cout << "You cannot move that way try again!" << endl;
         }
         else{
         secondRoom[placeHolderX][placeHolderY] = "-";
         secondRoom[placeHolderX - 1][placeHolderY] = "P";
         placeHolderX = placeHolderX - 1;
         }
      }
      else if (input == 2){
          if(placeHolderX == 6){
            cout << "You cannot move that way try again!" << endl;
         }
         else{
         secondRoom[placeHolderX][placeHolderY] = "-";
         secondRoom[placeHolderX + 1][placeHolderY] = "P";
         placeHolderX = placeHolderX + 1;
         }
      }
      
      else if (input == 3){
          if(placeHolderY == 1){
            cout << "You cannot move that way try again!" << endl;
         }
         else{
        secondRoom[placeHolderX][placeHolderY] = "-";
         secondRoom[placeHolderX][placeHolderY - 1] = "P";
         placeHolderY = placeHolderY - 1;
         }
      }
      
       else if (input == 4){
          if(placeHolderY == 5){
            cout << "You cannot move that way try again!" << endl;
         }
         else{
         secondRoom[placeHolderX][placeHolderY] = "-";
         secondRoom[placeHolderX][placeHolderY + 1] = "P";
          placeHolderY = placeHolderY + 1;
         }
      }
      
      if(placeHolderX == 0 && placeHolderY == 3){
         cout << "You have entered the room above you!" << endl; 
         cout << "You look around and see a new room! M is Monster." << endl; 
         placeHolderX = 5;
         pizza = false;
         break;
      }
      
      for(int i = 0; i < 7; i ++){
         for(int j = 0; j < 7; j ++){
          cout << secondRoom[i][j] << '\t';
         }
         cout << endl;
      }
   }
   
   for(int i = 0; i < 7; i ++){
      for(int j = 0; j < 7; j ++){
         cout << secondRoom[i][j] << '\t';
      }
      cout << endl;
   }
   



}