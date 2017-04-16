#ifndef menu_H
#define menu_H

#include "../include/player.h"
#include <string>

class menu
{
public:
	/*If the player wins the game*/
	void winGame(player p);
	/*If the player's health reaches zero*/
	void playerDeath(player p);
	/*If the player needs help*/
	void openmenu();
	/*Constructor*/
	menu();
	/*If the player chooses to quit*/
	void exitGame(player p);
	void back(int n);
	void print(std::string in);
};
#endif