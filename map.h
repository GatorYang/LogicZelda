#ifndef mapGeneration
#define mapGeneration

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <chrono>

using namespace std;

class map {
private:
	//reserved for future testing
	//int doorCount;
	//int discoveredRoomCount;
	//	int remainingRoomCount;
	//int [][] activeRoomLocation;
	//	int mainMap [4][4] = {{0}}; 
	char playerMap [4][4] = {""};
	
	// player's room location in side the whole map
	int placeHolderX;
	int placeHolderY;
	
	
public:
	//Keeps track of Current room the player is in.
	int playerRoomX;
	int playerRoomY;
	
	//Base Array for creating the dunguen. 
	int mainMap [4][4] = {{0}}; 
	
	//Methods for both the backend map and in-game player map.
	void MakeMap();
	void PlayerMapPrint();
	void MakePlayerMap();
	void PrintMap();
	void UpdatePlayerMap();
	void UpdatePlayerMap2();
	
	//Methods for Checking if there is a room next to current room.
	bool isRoomLeft();
	bool isRoomRight();
	bool isRoomUp();
	bool isRoomDown();
	
	//Deletes everything in a room.
	void CleanRoom(int x, int y);
	int getY();
	int getX();
	void setX(int newx);
	void setY(int newy);
	
	//Methods for Checking if there is a room next to current room.
	int  getRoomValue();
	bool moveDown();
	bool moveLeft();
	bool moveRight();
	bool moveUp();
};

//Uses a random generator based on the time to formulate the dunguen map.
void map::MakeMap(){
	mt19937 engine(time(0)); 
	uniform_int_distribution<int> startRoom(0,3);
	int currentRoomX = startRoom(engine);
	placeHolderX = currentRoomX; 
	int currentRoomY = 3; 
	mainMap[currentRoomY][currentRoomX] = 1; 
	uniform_int_distribution<int> direction(0,2);
	
	uniform_int_distribution<int> roomType(2,6);
	
	bool finalMove = false;
	bool badMove = true; 
	
	while(!finalMove){
		//cout << "first while" << endl;
		badMove = true; 
		while(badMove){
			//cout << "second while" << endl;
			int nextRoom = direction(engine); 
			
			if(nextRoom == 0){
				if(currentRoomX - 1 < 0 ) {
					break;
				} 
				else{
					currentRoomX--; 
					if(mainMap[currentRoomY][currentRoomX] != 0){
						break;
					}
					else{
					mainMap[currentRoomY][currentRoomX] = roomType(engine); 
					badMove = false;
					}
				}	
			}
			else if(nextRoom == 1){
				if(currentRoomY - 1 < 0 ){
					finalMove = true; 
					//Change last room to boss room. 
					mainMap[currentRoomY][currentRoomX] = 7;
					placeHolderY = currentRoomX;
				}
				else {
					currentRoomY--;
					if(mainMap[currentRoomY][currentRoomX] != 0){
						break;
					}
					else{
					mainMap[currentRoomY][currentRoomX] = roomType(engine);
					badMove = false;
					}
				}
			}
			else{
				if(currentRoomX + 1 > 3){
					break;
				}
				else {
					currentRoomX ++; 
					if(mainMap[currentRoomY][currentRoomX] != 0){
						break;
					}
					else{
					mainMap[currentRoomY][currentRoomX] = roomType(engine);
					badMove = false;
					}
				}
			}
		}
	}
}
//Prints out the back-end map... purely for developer purposes. 
void map::PrintMap(){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << mainMap[i][j];
			cout << "\t"; 
		}
		cout << endl;
	}
};

//Prints out the player map.
void map::PlayerMapPrint(){
	cout<< "Dungeon Floor Map" << endl;
	cout<< "O is discovered room." << endl;
	cout<< "X is boss room." << endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << playerMap[i][j];
			cout << "\t"; 
		}
		cout << endl;
	}
};

//Makes base of the player Map.
void map::MakePlayerMap(){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			playerMap[i][j] = '#';
		}
	}
};

//Makes the actual player map based on the random generation from MakeMap();
void map::UpdatePlayerMap(){
	playerMap[3][placeHolderX] = 'O'; 
	playerMap[0][placeHolderY] = 'X'; 
	
	playerRoomX = placeHolderX;
	playerRoomY = 3;
	
};

//Makes An updated version of player map. 
void map:: UpdatePlayerMap2(){
	playerMap[playerRoomY][playerRoomX] = 'O';
};

void map::CleanRoom(int x, int y){
	playerMap[x][y] = '8';
}

//Checks to see if there is a room to the left of current room.
bool map::isRoomLeft (){
	if(playerRoomX -1 < 0){
		return false;
	}
	else if(mainMap[playerRoomX -1][playerRoomY] == 0){
		return false;
	}
	else
		return true;
};

//Checks to see if there is a room to the right of current room.
bool map::isRoomRight (){
	if(playerRoomX +1 > 3)
		return false;
	else if(mainMap[playerRoomX + 1][playerRoomY] == 0){
		return false;
	}
	else
		return true;
};

//Checks to see if there is a room to the above of current room.
bool map::isRoomUp(){
	if(playerRoomY -1 < 0){
		return false;
	}
	else if (mainMap[playerRoomX][playerRoomY - 1] == 0)
		return false;
	else
		return true;
};

//Checks to see if there is a room to the below of current room.
bool map::isRoomDown(){
	if(playerRoomY + 1 > 3){
		return false;
	}
	else if (mainMap[playerRoomX][playerRoomY + 1] == 0)
		return false;
	else
		return true;
};

//Get method for Column of current room.
int map::getX(){
	return playerRoomX;	
};

//Get method for row of current room.
int map::getY(){
	return playerRoomY;	
};

//Set Method
void map::setX(int newx){
	playerRoomX = newx;
};

//Set Method
void map::setY(int newy){
	playerRoomY = newy;
};

//Gets room value of current room for Room layout header.
int map::getRoomValue(){
	return mainMap[playerRoomY][playerRoomX];
}

//Checks to see if there is a room to the left of current room.
bool map::moveLeft()
{
	if(playerRoomX - 1 >= 0)
	{
		if(mainMap[playerRoomY][playerRoomX - 1] != 0)
		{
			playerRoomX--;
			return true;
		}else
		{
			cout << "Looks like there is not a room on the other side of the door. Weird..." << endl;
			return false;
		}
	}
	return false;
}

//Checks to see if there is a room to the right of current room.
bool map::moveRight()
{
					// I changed # to value 3, i think that should be correct. 
	if(playerRoomX + 1 <= 3)
	{
		if(mainMap[playerRoomY][playerRoomX + 1] != 0)
		{
			playerRoomX++;
			return true;
		}else
		{
			cout << "Looks like there is not a room on the other side of the door. Weird..." << endl;
			return false;
		}
	}
	return false;
}

//Checks to see if there is a room to the above of current room.
bool map::moveUp()
{
	if(playerRoomY - 1 >= 0)
	{
		if(mainMap[playerRoomY - 1][playerRoomX] != 0)
		{
			playerRoomY--;
			return true;
		}else
		{
			cout << "Looks like there is not a room on the other side of the door. Weird..." << endl;
			return false;
		}
	}
	return false;
}

//Checks to see if there is a room to the below of current room.
bool map::moveDown()
{
	if(playerRoomY + 1 <= 3)
	{
		if(mainMap[playerRoomY + 1][playerRoomX] != 0)
		{
			playerRoomY++;
			return true;
		} else
		{
			cout << "Looks like there is not a room on the other side of the door. Weird..." << endl;
			return false;
		}
	}
	return false;
}

#endif
