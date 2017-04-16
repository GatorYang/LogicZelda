#ifndef Map_H
#define Map_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <chrono>

using namespace std;

class map {
private:
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
#endif
