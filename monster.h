#include <iostream>
#include "Encounter.h"
using namespace std;

class monster
{
private:
	int type;
	bool isBoss;
	int score
public:
	int getScore();
};

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
/**
 * Uses monster type to print the corresponding questions
 */
void monster::printQuestions() {
	if (type == 1) {
		cout << "When three professors are seated in a restaurant, " << endl;
		cout << "asks them: “Does everyone want coffee?” The first " << endl;
		cout << "professor says: “I do not know.” The second professor " << endl;
		cout << "then says: “I do not know.” Finally, the third professor " << endl;
		cout << "says: “No, not everyone wants coffee.” How many coffee " << endl;
		cout << "should the hostess bring out?" << endl;
	} else if (type == 2) {
		cout << "Each inhabitant of a remote village always tells the truth " << endl;
		cout << "or always lies.A villager will give only a “Yes” or a “No” " << endl;
		cout << "response to a question a tourist asks. Suppose you are a " << endl;
		cout << "tourist visiting this area and come to a fork in the road. " << endl;	
		cout << "One branch leads to the ruins you want to visit; the other " << endl;
		cout << "branch leads deep into the jungle. A villager is standing " << endl;
		cout << "at the fork in the road. What one question can you ask the " << endl;
		cout << "villager to determine which branch to take? " << endl;
	}
}
}
	
}
}

public void AddScore()
{
	return score;
}
