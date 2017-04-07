#include <iostream>
#include "DUNGEONGENERATION.h"
using namespace std;

int main()
{
    Rooms room;

    for (int i=1;i<=9;i++){
        room.SetTemplate(i);
        room.CreateRoom();
        room.PrintRoom();

    }
    return 0;
}
