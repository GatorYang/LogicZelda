#include "MonsterWithoutKeys.cpp"
#include "Encounter.h"
#include <iostream>
using namespace std;

class MonsterWithKeys:MonsterWithoutKeys
{
public:
	void GetKey(int &KeyNumber);
};

public void GetKey(int &KeyNumber)
{
	&KeyNumber++;
}