#include <iostream>
#include "Encounter.h"
using namespace std;

class MonsterWithoutKeys
{
private:
	int type;
	bool isBoss;
	int score
public:
	int getScore();
};

MonsterWithoutKeys(int monType)
{
	if(monType == 1)
	{
		isBoss = false;
		score = 100;
	}
	if(monType == 2)
	{
		isBoss = false;
		score = 100;
	}
	if(monType == 3)
	{
		isBoss = false;
		score = 100;
	}
	if(monType == 4)
	{
		isBoss = false;
		score = 100;
	}
	if(monType == 5)
	{
		isBoss = false;
		score = 200;
	}
	if(monType == 6)
	{
		isBoss = false;
		score = 200;
	}
	if(monType == 7)
	{
		isBoss = false;
		score = 200;
	}
	if(monType == 8)
	{
		isBoss = false;
		score = 200;
	}
	if(monType == 9)
	{
		isBoss = false;
		score = 300;
	}
	if(monType == 10)
	{
		isBoss = false;
		score = 300;
	}
	if(monType == 11)
	{
		isBoss = false;
		score = 300;
	}
	if(monType == 12)
	{
		isBoss = false;
		score = 300;
	}
	if(monType == 13)
	{
		isBoss = false;
		score = 400;
	}
	if(monType == 14)
	{
		isBoss = false;
		score = 400;
	}
	if(monType == 15)
	{
		isBoss = false;
		score = 400;
	}
	if(monType == 16)
	{
		isBoss=true;
		score = 1000;
	}

}

public void AddScore()
{
	return score;
}
