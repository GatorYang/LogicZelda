#include <iostream>

using namespace std;

int main()
{
    
    map.generateDungeon();// basically we should have somthing generate the whole dungeon, aka have map made, assign each room lay out to each rooom, this whole thing can be under one single class tbh
    
    //first introduce the player to the game:
    menu.welomeMessage(); // print out put the situation of the game, the rules, the controls, the goals
    //------------
    //then out put questions regarding asking names and such and store it in Player class
    // bunch code take in in put and set up player poperly
    //------
    menu.printPlayerMap(); //print out the map player should see, NOT the over all, its just rooms player've discovered
    menu.printRoom(); // print out the room lay out player is in and player position in the room and the monster positions
    
    
    
    while (input != "QUIT"){ // it keeps running take in player action n stuch and play the game
        
        if (input == "map"){
            player.printPlayerMap();
        }
        
        if (input == "help"){
            menu.printInstructions();
        }
        
        if (input == any of the movements input "WASD"){
            movements shit //move the player corsponding the input
            update the player positon in the map
            map.printRoom; //show updated positions after movement
        }
        
        if (player.getPosition == monster.possiton && monster is still alive){
            monster.fightMonster()// call method that fight monster ( it should print out monster's ACSII, printout questions, take in questions, update Player class's health/key numbers accordingly)
            if ( player.getHealth <= 0){
                player.printDeathMSG();
                END GAME
            }
            then change monster positon to dead, so if player set on it again it wouldnt triger.
        }
        
        if (player positon == door position && all monster in room is killed(this should be a method inside Room class to check.)){
            map method that ask player if want to move to next room at this positon (Y/N)
            if (input == Y){
                map method update player's position accordingly to a new room, 
                map method so reset the room and print out the new room lay out,
                map method update the PLAYERMap, so shows what player is discovered.
            }
        }
        
        if (playerPosition == doorPositon && all monster are NOT dead){
            map method print message that not all monster are killed in the room;
        }
        
        if (playerRoom == BossRoom && player.getKeys == 4 ){
            monster.printBossQ();
            monster.fightBoss();
            if (monster.BossHealth == dead){
                 monster.printWinMSG();
            END GAME
            }
        }
        
    }
    
}
