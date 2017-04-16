#include "../include/room.h"
#include "../include/map.h"
#include "../include/menu.h"
#include "../include/monster.h"

#include <unistd.h> // for sleep()
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void up(int num)
{
  if (num == 1)
  {
    cout << R"(                                                                      
                                                                      ..;===+.
                                                                  .:=iiiiii=+=
                                                               .=i))=;::+)i=+,
                                                            ,=i);)I)))I):=i=;
                                                         .=i==))))ii)))I:i++
                                                       +)+))iiiiiiii))I=i+:'
                                  .,:;;++++++;:,.       )iii+:::;iii))+i='
                               .:;++=iiiiiiiiii=++;.    =::,,,:::=i));=+'
                             ,;+==ii)))))))))))ii==+;,      ,,,:=i))+=:
                           ,;+=ii))))))IIIIII))))ii===;.    ,,:=i)=i+
                          ;+=ii)))IIIIITIIIIII))))iiii=+,   ,:=));=,
                        ,+=i))IIIIIITTTTTITIIIIII)))I)i=+,,:+i)=i+
                       ,+i))IIIIIITTTTTTTTTTTTI))IIII))i=::i))i='
                      ,=i))IIIIITLLTTTTTTTTTTIITTTTIII)+;+i)+i`
                      =i))IIITTLTLTTTTTTTTTIITTLLTTTII+:i)ii:'
                     +i))IITTTLLLTTTTTTTTTTTTLLLTTTT+:i)))=,
                     =))ITTTTTTTTTTTLTTTTTTLLLLLLTi:=)IIiii;
                    .i)IIITTTTTTTTLTTTITLLLLLLLT);=)I)))))i;
                    :))IIITTTTTLTTTTTTLLHLLLLL);=)II)IIIIi=:
                    :i)IIITTTTTTTTTLLLHLLHLL)+=)II)ITTTI)i=
                    .i)IIITTTTITTLLLHHLLLL);=)II)ITTTTII)i+
                    =i)IIIIIITTLLLLLLHLL=:i)II)TTTTTTIII)i'
                  +i)i)))IITTLLLLLLLLT=:i)II)TTTTLTTIII)i;
                +ii)i:)IITTLLTLLLLT=;+i)I)ITTTTLTTTII))i;
               =;)i=:,=)ITTTTLTTI=:i))I)TTTLLLTTTTTII)i;
             +i)ii::,  +)IIITI+:+i)I))TTTTLLTTTTTII))=,
           :=;)i=:,,    ,i++::i))I)ITTTTTTTTTTIIII)=+'
         .+ii)i=::,,   ,,::=i)))iIITTTTTTTTIIIII)=+
        ,==)ii=;:,,,,:::=ii)i)iIIIITIIITIIII))i+:'
       +=:))i==;:::;=iii)+)=  `:i)))IIIII)ii+'
     .+=:))iiiiiiii)))+ii;
    .+=;))iiiiii)));ii+
   .+=i:)))))))=+ii+
  .;==i+::::=)i=;
  ,+==iiiiii+,
  `+=+++;`)" << endl;
  } else if (num == 6)
  {
    cout << R"(
                     .--------------.
                .---'  o        .    `---.
             .-'    .    O  .         .   `-.
          .-'     @@@@@@       .             `-.
        .'@@   @@@@@@@@@@@       @@@@@@@   .    `.
      .'@@@  @@@@@@@@@@@@@@     @@@@@@@@@         `.
     /@@@  o @@@@@@@@@@@@@@     @@@@@@@@@     O     \
    /        @@@@@@@@@@@@@@  @   @@@@@@@@@ @@     .  \
   /@  o      @@@@@@@@@@@   .  @@  @@@@@@@@@@@     @@ \
  /@@@      .   @@@@@@ o       @  @@@@@@@@@@@@@ o @@@@ \
 /@@@@@                  @ .      @@@@@@@@@@@@@@  @@@@@ \
 |@@@@@    O    `.-./  .        .  @@@@@@@@@@@@@   @@@  |
/ @@@@@        --`-'       o        @@@@@@@@@@@ @@@    . \
|@ @@@@ .  @  @    `    @            @@      . @@@@@@    |
|   @@                         o    @@   .     @@@@@@    |
|  .     @   @ @       o              @@   o   @@@@@@.   |
\     @    @       @       .-.       @@@@       @@@      /
 |  @    @  @              `-'     . @@@@     .    .    |
 \ .  o       @  @@@@  .              @@  .           . /
  \      @@@    @@@@@@       .                   o     /
   \    @@@@@   @@\@@    /        O          .        /
    \ o  @@@       \ \  /  __        .   .     .--.  /
     \      .     . \.-.---                   `--'  /
      `.             `-'      .                   .'
        `.    o     / | `           O     .     .'
          `-.      /  |        o             .-'
             `-.          .         .     .-'
                `---.        .       .---'
                     `--------------')" << endl;
  } else if (num == 4)
  {
    cout << R"(                       /  \
                      |    |
  (`----._____.-'"""`. \__/ .'"""`-._____.----')
   (____       .      `|  |'      .       ____)
     (___`----' .     _|  |_     . `----'___)
       (__`----'  _.-' |  | `-._  `----'__)
         `._____.'_    |  |    _`._____.'
                /o )-< |  | >-( o\
               / .'    |  |    `. \
              J J      |  |      L L
              | |      |  |      | |
              J J      |  |      F F
               \ \     |  |     / /
                \ `.   |  |   .' /
                 `. `-.|  |.-' .'
                   `-. |.-' .-'
                     .-' .-'.
                   .' .-' |. `.
                  / .' |  | `. \
                 / /   |  |   \ \
                J J    |  |    L L
                | |    |  |    | |
                J J    |  |    F F
                 \ `.  |  |  .' /
                  `. `-|  !-' .'
                    `-.!-' .-'
                     .' .-|`.
                    / .|  |. \
                   J J |  | L L
                   | | |  | | |
                   J J |  | F F
                    `.\|  |/.'
                      `|  |'
                       |  |
  VK                   |  |
                       |  |
                       `--')" << endl;
                       
  }
  else if (num == 5)
  {
    cout << R"(                                
                                .:xxxxxxxx:. 
                             .xxxxxxxxxxxxxxxx. 
                            :xxxxxxxxxxxxxxxxxxx:. 
                           .xxxxxxxxxxxxxxxxxxxxxxx: 
                          :xxxxxxxxxxxxxxxxxxxxxxxxx: 
                          xxxxxxxxxxxxxxxxxxxxxxxxxxX: 
                          xxx:::xxxxxxxx::::xxxxxxxxx: 
                         .xx:   ::xxxxx:     :xxxxxxxx 
                         :xx  x.  xxxx:  xx.  xxxxxxxx 
                         :xx xxx  xxxx: xxxx  :xxxxxxx 
                         'xx 'xx  xxxx:. xx'  xxxxxxxx 
                          xx ::::::xx:::::.   xxxxxxxx 
                          xx:::::.::::.:::::::xxxxxxxx 
                          :x'::::'::::':::::':xxxxxxxxx. 
                          :xx.::::::::::::'   xxxxxxxxxx 
                          :xx: '::::::::'     :xxxxxxxxxx. 
                         .xx     '::::'        'xxxxxxxxxx. 
                       .xxxx                     'xxxxxxxxx. 
                     .xxxx                         'xxxxxxxxx. 
                   .xxxxx:                          xxxxxxxxxx. 
                  .xxxxx:'                          xxxxxxxxxxx. 
                 .xxxxxx:::.           .       ..:::_xxxxxxxxxxx:. 
                .xxxxxxx''      ':::''            ''::xxxxxxxxxxxx. 
                xxxxxx            :                  '::xxxxxxxxxxxx 
               :xxxx:'            :                    'xxxxxxxxxxxx: 
              .xxxxx              :                     ::xxxxxxxxxxxx 
              xxxx:'                                    ::xxxxxxxxxxxx 
              xxxx               .                      ::xxxxxxxxxxxx. 
          .:xxxxxx               :                      ::xxxxxxxxxxxx:: 
          xxxxxxxx               :                      ::xxxxxxxxxxxxx: 
          xxxxxxxx               :                      ::xxxxxxxxxxxxx: 
          ':xxxxxx               '                      ::xxxxxxxxxxxx:' 
            .:. xx:.                                   .:xxxxxxxxxxxxx' 
          ::::::.'xx:.            :                  .:: xxxxxxxxxxx': 
  .:::::::::::::::.'xxxx.                            ::::'xxxxxxxx':::. 
  ::::::::::::::::::.'xxxxx                          :::::.'.xx.'::::::. 
  ::::::::::::::::::::.'xxxx:.                       :::::::.'':::::::::   
  ':::::::::::::::::::::.'xx:'                     .'::::::::::::::::::::.. 
    :::::::::::::::::::::.'xx                    .:: ::::::::::::::::::::::: 
  .:::::::::::::::::::::::. xx               .::xxxx ::::::::::::::::::::::: 
  :::::::::::::::::::::::::.'xxx..        .::xxxxxxx ::::::::::::::::::::' 
  '::::::::::::::::::::::::: xxxxxxxxxxxxxxxxxxxxxxx :::::::::::::::::' 
    '::::::::::::::::::::::: xxxxxxxxxxxxxxxxxxxxxxx :::::::::::::::' 
        ':::::::::::::::::::_xxxxxx::'''::xxxxxxxxxx '::::::::::::' 
             '':.::::::::::'                        `._'::::::'' )" << endl;
  }else if (num == 7)
  {
    cout << R"(
))))))))`"###mnn$$$$"""%%%%%%%`""$$$$$$$mmn..m###(((((((((((((((((((((((((((((
))))))))))'$$$""'%%%%%%%%%%%%%%%%%%%%%%`""$$$$$n###.(((((((((((((((((((((((((.
)))))))))))$##%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%`"$$$n#.(((((((((((((((((((.m###
)))))))))))`##n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%`"$$$n.((((((((((((((.m####"'
))))))))))))###%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%`"$$n.(((((((((.m####"'(((
))))))))))))'##m%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%`"$$n((((((.m###"'((((((
mmmmn..))))))###%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%`$$n((.m###"'((((((((
###########n.###%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%`$$n(###"'((((((((((
))))`"""########%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"$$.#"'((((((((((((
)))))))))))`m##"%%%%%%%m$$%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%`$$"((((((((((((((
))))))))))))m##%%%%%%%m$$'%%%%%%%%%%%%%%%%%%%%%$n.%%%%%%%%%%$$'(((((((((((((((
))))))))))))##"%%%%%%m$$"%%%%%%%%%%%%%%%%.n%%%%"$$n.%%%%%$$.$"((((((((((((((((
)))))))))))%##%%%%%%%$$n%%%%%%%%%%%%%%%%m$$n%%%%`"$$n.%%%`$$n.((((((((((((((((
))))))))))m##"%%%%%%%$$$%%%%%%%%%%%%%%%m$$$$n.%%%%`"$$n.%%`"$$n(((((((((((((((
))))))).m##"%%%%%%%%%$$$%%%%%%%%%%%%%%%$$"'"$$n.%%%%`"$$.%%%`$$n.(((((((((((((
))))).m##"%%%%%%%%%%%"$$n%%%%%%%%%%%%%%$$n `"$$n%%%%%`$$.%%%`"$$$((((((((((((
)))))m##"'%%%%%%%%%%%%$$$%%%%%%%%%%%%%%`$$n `"$$n%%%%`$$%%%%%`$"##n(((((((((
))).m##"%%%%%%%%%%%%%m"$$n%%%%%%%%%%%%%%`"$$n "$$.%%%%$$%%%%m$" "##n((((((((
).m##"'%%%%%%%%%%%%%m$$"$$%%%%%%%%%%%%%%%%"$$n. "$$%%%%`$n%.m$" "##n(((((((
m##"'%%%%%%%%%%%%%%%$$':$$n%%%%%%%%%%%%%%%%`"$$n. $$%%%%%"$n$$" "##n((((((
##"%%%%%%%%%%%%%%%%m$$::"$$n%%%%%%%%%%%%%%%%%`"$$$$"%%%%%%$$.$ "##((((((
#"%%%%%%%%%%%%%%%%%$$':::"$$n.%%%%%%%%%%%%%%%%%%`$'%%%%%%%$$n" ##n((((m
%%%%%%%%%%%%%%%%%%%$$::::::"$$m.%%%%%%%%%%%%%%%%%%%%%%%%%%`"$$. `##n(.m#
%%%%%%%%%%%%%%%%%%%$$::::::::`"$$n.%%%%%%%%%%%%%%%%%%%%%%%%%`"$n. `##m##"
%%%%%%%%%%%%%%%%%%%$$n:::::::::$`$$n.%%%%%%%%%%%%%%%%%%%%%%%%%"$$. m##"'
%%%%%%%%%%%%%%%%%%%"$$:::::::::`$$"$$n%%%%%%%%%%%%%%%%%%%%%%%%%"$n nW'"
%%%%%%%%%%%%%%%%%%%%$$::::::::::$$ `$$n%%%%%%%%%%%%%%%%%%%%%%%%"$$. ''
%%%%%%%%%%%%%%%%%%%%$$n:::::::::$$n "$$%%%%%%%%%%%%%%%%%%%%%%%%`$$n.
%%%%%%%%%%%%%%%%%%%%"$$:::::::::"$$ $$n%%%%%%%%%%%%%%%%%%%%%%%"$$n
%%%%%%%%%%%%%%%%%%%%%$$::::::::::$$ `$$n%%%%%%%%%%%%%%%%%%%%%%"$$
%%%%%%%%%%%%%%%%%%%%%$$::::::::::$$ "$$n.m$$$n%%%%%%%%%%%%%%%%$$n
%%%%%%%%%%%%%%%%%%%%%$$n:::::::::$$n .m$$$"""$n%%%%%%%%%%%%%%%`$$n
%%%%%%%%%%%%%%%%%%%%%`$$:::::::::"$$ $$$"'%%%`"%%%%%%%%%%%%%%%%n$"
%%%%%%%%%%%%%%%%%%%%%%$$::::::::::$$ $$$n%%%%%%%%%%%%%%%%%%%%%.m$$n.
%%%%%%%%%%%%%%%%%%%%%%$$::::::::::$$n `$$$.%%%%%%%%%%%%%%%%%%%%"$$n"$
%%%%%%%%%%%%%%%%%%%%%%$$n:::::::::"$$ `"$$.%%%%%%$$n$m.%%%%%%%%"$$n'$.
%%%%%%%%%%%%%%%%%%%%%%`$$::::::::::$$n `$$n.%%%%"$$""$n%%%%%%%%`"$n`$n.
%%%%%%%%%%%%%%%%%%%%%%%$$::::::::::`$$ `$$n.%%%`$nm$"%%%%%%%%%%"$$`$
%%%%%%%%%%%%%%%%%%%%%%%$$:::::::::::$$n `"$$n%%`"$$n%%%%%%%%%%%$$n$'
%%%%%%%%%%%%%%%%%%%%%%%$$n::::::::::`$$ `"$mn.`"$n.%%%%%%%%%"$$'
%%%%%%%%%%%%%%%%%%%%%%%"$$:::::::::::$$n `"$$n.`"$$.%%%%%%%.$$
%%%%%%%%%%%%%%%%%%%%%%%%$$:::::::::::`$$ `$$n.`$$.%%%%%.$$"
%%%%%%%%%%%%%%%%%%%%%%%%$$n:::::::::::$$n `"$$n`$$.%%%%.$$
%%%%%%%%%%%%%%%%%%%%%%%%"$$:::::::::::`$$ `"$n."$.%%m$$
%%%%%%%%%%%%%%%%%%%%%%%%%$$::::::::::::$$n `"$n$$.$$$'
%%%%%%%%%%%%%%%%%%%%%%%%%$$::::::::::::`$$ "$$$$$"'
%%%%%%%%%%%%%%%%%%%%%%%%%$$n::::::::::::$$n .$$W"'
%%%%%%%%%%%%%%%%%%%%%%%%%`$$::::::::::::`$$ .$W" )" << endl;
  }else if (num == 3)
  {
    cout << R"(
                                   _
                                 ,d8b,
                         _,,aadd8888888bbaa,,_
                    _,ad88P"""8,  I8I  ,8"""Y88ba,_
                 ,ad88P" `Ya  `8, `8' ,8'  aP' "Y88ba,
               ,d8"' "Yb   "b, `b  8  d' ,d"   dP" `"8b,
              dP"Yb,  `Yb,  `8, 8  8  8 ,8'  ,dP'  ,dP"Yb
           ,ad8b, `Yb,  "Ya  `b Y, 8 ,P d'  aP"  ,dP' ,d8ba,
          dP" `Y8b, `Yb, `Yb, Y,`8 8 8',P ,dP' ,dP' ,d8P' "Yb
         ,88888888Yb, `Yb,`Yb,`8 8 8 8 8',dP',dP' ,dY88888888,
         dP     `Yb`Yb, Yb,`8b 8 8 8 8 8 d8',dP ,dP'dP'     Yb
        ,8888888888b "8, Yba888888888888888adP ,8" d8888888888,
        dP        `Yb,`Y8P""'             `""Y8P',dP'        Yb
       ,88888888888P"Y8P'_.---.._     _..---._`Y8P"Y88888888888,
       dP         d'  8 '  ____  `. .'  ____  ` 8  `b         Yb
      ,888888888888   8   <(@@)>  | |  <(@@)>   8   888888888888,
      dP          8   8    `"""         """'    8   8          Yb
     ,8888888888888,  8          ,   ,          8  ,8888888888888,
     dP           `b  8,        (.-_-.)        ,8  d'           Yb
    ,88888888888888Yaa8b      .'       `.      d8aaP88888888888888,
    dP               ""8b     _,gd888bg,_     d8""               Yb
   ,888888888888888888888b,    ""Y888P""    ,d888888888888888888888,
   dP                   "8"b,             ,d"8"                   Yb
  ,888888888888888888888888,"Ya,_,ggg,_,aP",888888888888888888888888,
  dP                      "8,  "8"\x/"8"  ,8"                      Yb
 ,88888888888888888888888888b   8\\x//8   d88888888888888888888888888,
 8888bgg,_                  8   8\\x//8   8                  _,ggd8888
  `"Yb, ""8888888888888888888   Y\\x//P   8888888888888888888"" ,dP"'
    _d8bg,_"8,              8   `b\x/d'   8              ,8"_,gd8b_
  ,iP"   "Yb,8888888888888888    8\x/8    8888888888888888,dP"  `"Yi,
 ,P"    __,888              8    8\x/8    8              888,__    "Y,
,8baaad8P"":Y8888888888888888 aaa8\x/8aaa 8888888888888888P:""Y8baaad8,
dP"':::::::::8              8 8::8\x/8::8 8              8:::::::::`"Yb
8::::::::::::8888888888888888 8::88888::8 8888888888888888::::::::::::8
8::::::::::::8,             8 8:::::::::8 8             ,8::::::::::::8
8::::::::::::8888888888888888 8:::::::::8 8888888888888888::::::::::::8
8::::::::::::Ya             8 8:::::::::8 8             aP::::::::::::8
8:::::::::::::888888888888888 8:::::::::8 888888888888888:::::::::::::8
8:::::::::::::Ya            8 8:::::::::8 8            aP:::::::::::::8
Ya:::::::::::::88888888888888 8:::::::::8 88888888888888:::::::::::::aP
`8;:::::::::::::Ya,         8 8:::::::::8 8         ,aP:::::::::::::;8'
 Ya:::::::::::::::"Y888888888 8:::::::::8 888888888P":::::::::::::::aP
 `8;::::::::::::::::::::""""Y8888888888888P""""::::::::::::::::::::;8'
  Ya:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::aP
   "b;:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::;d"
    `Ya;:::::::::::::::::::::::::::::::::::::::::::::::::::::::;aP'
      `Ya;:::::::::::::::::::::::::::::::::::::::::::::::::::;aP'
         "Ya;:::::::::::::::::::::::::::::::::::::::::::::;aP"
            "Yba;;;:::::::::::::::::::::::::::::::::;;;adP"
                `"""""""Y888888888888888888888P"""""""')" << endl;
  }else if (num == 2)
  {
    cout << R"(

                          .,aad88888888888baa,.
                     ,ad8888888888888888888888888ba,
                 ,ad888888888888888888888888888888888ba,
              ,ad888888888P""'             `""Y888888888ba,
            a888888888P""                       ""Y888888888a
          a88888888""                               ""88888888a
        a888888888b,                                   "Y8888888a
      ,8888888888888b,                                   `Y8888888,
     d8888888' "888888b,                                   `8888888b
    8888888"     "Y88888b,                                   "8888888
   8888888'        "Y88888b,                                  `8888888
  d888888'     a,  8a"Y88888b,                                 `888888b
 d888888'      `8, `8) "Y88888b,                  ,ad888g,      `888888b
,888888'        8)  ]8   "Y88888b,            ,ad888888888b      `888888,
d88888P        ,8' ,8'     "Y88888b,      ,gPPR888888888888       Y88888b
888888'       ,8' ,8'        "Y88888b,,ad8""   `Y888888888P       `888888
888888        8)  8)           "Y888888"        (8888888""         888888
888888        8,  8,          ,ad8Y88888b,      d888""             888888
888888        `8, `8,     ,ad8""   "Y88888b,,ad8""                 888888
888888         `8, `" ,ad8""         "Y88888b"                     888888
Y88888,           ,gPPR8b           ,ad8Y88888b,                  ,88888P
`88888b          dP:::::Yb      ,ad8""   "Y88888b,                d88888'
 888888,         8):::::(8  ,ad8""         "Y88888b,             ,888888
 `888888,        Yb:;;;:d888""               "Y88888b,          ,888888'
  Y888888,        "8ggg8P"                     "Y88888b,       ,888888P
   Y88888b,                                      "Y88888b,    ,d88888P
    Y88888b,                                       "Y88888b, ,d88888P
     Y888888,                                        "Y888888888888P
      "888888b,                                        "8888888888"
        Y888888ba                                       a8888888P
         "Y8888888ba,                               ,ad8888888P"
            "Y88888888ba,._                   _.,ad88888888P"
               "Y88888888888bbaa,,_____,,aadd88888888888P"
                   "Y8888888888888888888888888888888P"  
                       ""Y888888888888888888888P""      )" << endl;
  }
}

void animation(string ani){
	cout << ani << std::flush;
    for (int x = 0; x < 3; x++ ) {
        sleep(1);
        cout  << "\b\\" << flush;
        sleep(1);
        cout  << "\b|" << flush;
        sleep(1);
        cout  << "\b/" << flush;
        sleep(1);
        cout  << "\b-" << flush;
    }
}


void startUp()
{
  animation("Starting Up...");
    cout << endl;
    animation("Looking for the Map...");
    cout << endl;
    animation("Finding Rooms...");
    cout << endl;
    animation("Understanding Monsters...");
    cout << endl;
    animation ("Getting Question...");
    cout << endl;
    
    cout<<"Done..." << endl;
    cout << "Team-22 Presents:"<<endl;
    for(int x = 0; x < 20; x ++)
    cout<<endl;
}


int main()
{
  
  map map;
  map.MakeMap();
  
  player player;
  string playerName = "";
  string playerIn = "";
  menu menu;
  
  
  /*Getting the user name*/
  cout << "What is your name?: ";
  cin >> playerName;
  cin.clear();
  cin.ignore(10000, '\n'); /* Clears out the input incase the user includes multiple words seperated by spaces. */
  player.setName(playerName);
  cout << endl;
  
  cout << "Are you a boy or a girl?" << endl;
  cin >> playerIn;
  cin.clear();
  cin.ignore(10000, '\n');
  while(!playerIn.compare("boy") || !playerIn.compare("girl"))
  { 
    cout << "Try again: ";
    cin >> playerIn;
    cin.clear();
    cin.ignore(10000, '\n');
  }
  player.set(playerIn);
  
  map.MakePlayerMap();
  map.UpdatePlayerMap();
  map.PlayerMapPrint();
  map.PrintMap();
  
  Room room;
  room.setUpRoomInt(map.getRoomValue());
  room.printRoom();
  
  string input = "";
  
  /*Game Loop*/
  while(1)
  {
     /*Getting the player commands while removing any excess tokens*/
     cout << "Input: ";
     cin >> input;
     cout << endl;
     cin.ignore(10000, '\n');
     bool check = true;
     
    /* Various Player Input */ 
    //Compare returns 0 therefore we need ! to make it true. 
    if(!input.compare("HELP"))
    {
      menu.openmenu();
      check = false;
    }
    if(!input.compare("QUIT"))
    {
      menu.exitGame(player);
      check = false;
    }
    if(player.getHealth() <=0)
    {
      menu.playerDeath(player);
    }
    if(!input.compare("SCORE"))
    {
      cout << "Score: " << player.getScores() << endl;
      check = false;
    }
    if(!input.compare("MAP")){
      map.UpdatePlayerMap2();
      map.PlayerMapPrint();
      check = false;
    }
    if(!input.compare("HEALTH")){
     cout << "Your current health is " << player.getHealth() << " Out of 10!" << endl;
     check = false;
    }
    if(!input.compare("STUCK")){
      cout << "welp, sorry, but you got stuck and starved to death :)" << endl;
      menu.playerDeath(player);
      check = false;
    }
    if(!input.compare("ME"))
    {
      player.printPlayer();
      check = false;
    }
    if(!input.compare("UP"))
    {
      up(map.getRoomValue());
      if (map.getRoomValue() == 4 && player.getHealth() < 8)
      {
        player.changeHealth(2);
        cout << "Somehow you feel healthier..." << endl;
      }
      check = false;
    }
    if(!input.compare("^^vv<><>ab"))
    {
      cout << "Amazing you found the debug mode. Good luck out there." << endl;
      if(player.getHealth() < 999)
      {
        player.changeHealth(999 - player.getHealth());
      }
      check = false;
    }
    
    
    
    /* Movement */
    /*If the player enters either w,a,s,d , it tries to move the player in that direction
    If the player is successful in going through a door, then it will update the player postion on the map, and load the next room*/
    if(!input.compare("w"))
    {
      int res = room.move('w');
      if(res > 1)
      {
        if(map.moveUp())
        {
          cout << "You move to the next room." << endl;
          room.setUpRoomInt(map.getRoomValue());
          room.upRoom();
          map.UpdatePlayerMap2();
        }
      }
      check = false;
    }
    if(!input.compare("a"))
    {
      int res = room.move('a');
      if(res > 1)
      {
        if(map.moveLeft())
        {
          cout << "You move to the next room." << endl;
          room.setUpRoomInt(map.getRoomValue());
          room.leftRoom();
          map.UpdatePlayerMap2();
        }
      }
      check = false;
    }
    if(!input.compare("s"))
    {
      int res = room.move('s');
      if(res > 1)
      {
        if(map.moveDown())
        {
          cout << "You move to the next room." << endl;
          room.setUpRoomInt(map.getRoomValue());
          room.downRoom();
          map.UpdatePlayerMap2();
        }
      }
      check = false;
    }
    if(!input.compare("d"))
    {
      int res = room.move('d');
      if(res > 1)
      {
        if(map.moveRight())
        {
          cout << "You move to the next room." << endl;
          room.setUpRoomInt(map.getRoomValue());
          room.rightRoom();
          map.UpdatePlayerMap2();
        }
      }
      check = false;
    }
    
    /* If the user has given any input that does not correspond to any of the options. */
    if (check){
      cout << "unaccaptable input!" << endl;
    }
    
    /* Monster Encounter */ 
    if(room.getMonVal() >= 1 && room.getMonVal() <= 16)
    {
      monster monster(room.getMonVal());
      bool defeat = false;
      
      while(!defeat)
      {
        if (monster.askQuestion())
        {
          cout << "Good Job! You have defeated the Monster!" << endl;
          defeat = true;
        } else
        {
          cout << "\n\n\n\nWrong answer. Looks like you take some damage. Try again." << endl;
          player.changeHealth(-1);
          if(player.getHealth() <= 0)
            menu.playerDeath(player);
        }
        
        if(defeat && room.getMonVal() == 16)
        {
          player.changeScore(42);
          menu.winGame(player);
        }
        if(defeat)
        {
          room.killMon();
          player.changeScore(1);
        }
      }
    }
    
    
    /* Print out the Room at the end of each iteration. */
    room.printRoom();
  }
}