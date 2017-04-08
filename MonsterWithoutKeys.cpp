#include <iostream>
#include "Encounter.h"
using namespace std;

class MonsterWithoutKeys
{
private:
	int holdItemType;
	bool isBoss;
	int score
public:
	void AddScore(int &playerScore);
	void GiveItem(int &healthItemsHeld);
};

MonsterWithoutKeys(bool boss ,int item, int score)
{
	isBoss = boss;
	holdItemType = item;
	this->score = score;
}

public void AddScore(int &playerScore)
{
	playerScore = playerScore + score;
}

public void GiveItem(int &healthItemsHeld)
{
	healthItemsHeld++;
}