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
	int playerRoomX;
	int playerRoomY;
	int mainMap [4][4] = {{0}}; 
	void MakeMap();
	void PlayerMapPrint();
	void MakePlayerMap();
//	bool MapVerification();
	// int [][] RandomSetRoom();
	void PrintMap();
	void UpdatePlayerMap();
	void UpdatePlayerMap2();
//	void DoorConnection();
	// void UpdateRoomLocation()
//	void TravelRoom();
	bool isRoomLeft();
	bool isRoomRight();
	bool isRoomUp();
	bool isRoomDown();
	void CleanRoom(int x, int y);
	int getY();
	int getX();
	void setX(int newx);
	void setY(int newy);
	int  getRoomValue();
	bool moveDown();
	bool moveLeft();
	bool moveRight();
	bool moveUp();
};
#endif
