#include <iostream>
#include <string>
#include <cstdlib>
#include "map.h"
#include <sstream>

using namespace std; 



int main () {

map m;
m.MakeMap();


m.PrintMap();	

cout << endl;
cout << endl;

m.MakePlayerMap();
m.UpdatePlayerMap();
m.PlayerMapPrint();

Room cRoom;

cRoom.setUpRoom(m.getRoomValue);

return 0;
}
