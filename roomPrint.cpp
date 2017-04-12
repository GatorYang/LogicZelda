#include <string>
#include <vector>
#include <iostream>

using namespace std;
//Trial Print room Made by Robert It also incorporatess movement to a degree. 
int main(){
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
   {"|","-","-","-","-","-","|"},
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
   
   
   
   



}