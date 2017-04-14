
class monster
{
private:
	int type;
	bool isBoss;
	int score;
public:
	int getScore();
	bool askQuestion();
	void addScore(int add); //Isaiah: added
//}; moved 

/**
 * Create and give attributes to the different monsters
 */
monster(int monType)
{
	if(monType == 1)
	{
		type = monType;
		isBoss = false;
		score = 100;
	}
	else if(monType == 2)
	{
		type = monType;
		isBoss = false;
		score = 100;
	}
	else if(monType == 3)
	{
		type = monType;
		isBoss = false;
		score = 100;
	}
	else if(monType == 4)
	{
		type = monType;
		isBoss = false;
		score = 100;
	}
	else if(monType == 5)
	{
		type = monType;
		isBoss = false;
		score = 200;
	}
	else if(monType == 6)
	{
		type = monType;
		isBoss = false;
		score = 200;
	}
	else if(monType == 7)
	{
		type = monType;
		isBoss = false;
		score = 200;
	}
	else if(monType == 8)
	{
		type = monType;
		isBoss = false;
		score = 200;
	}
	else if(monType == 9)
	{
		type = monType;
		isBoss = false;
		score = 300;
	}
	else if(monType == 10)
	{
		type = monType;
		isBoss = false;
		score = 300;
	}
	else if(monType == 11)
	{
		type = monType;
		isBoss = false;
		score = 300;
	}
	else if(monType == 12)
	{
		type = monType;
		isBoss = false;
		score = 300;
	}
	else if(monType == 13)
	{
		type = monType;
		isBoss = false;
		score = 400;
	}
	else if(monType == 14)
	{
		type = monType;
		isBoss = false;
		score = 400;
	}
	else if(monType == 15)
	{
		type = monType;
		isBoss = false;
		score = 400;
	}
	else if(monType == 16)
	{
		type = monType;
		isBoss=true;
		score = 1000;
	}
	else
	{
		type = 0;
		isBoss = false;
		score = 0;
	}
}

};
