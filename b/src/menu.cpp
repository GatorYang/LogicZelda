#include <string>
#include <iostream>
#include <unistd.h> // for sleep()
#include "../include/menu.h"
using namespace std;

	menu::menu()
	{
		cout << R"(
		
		▄▄▌ ▐ ▄▌▄▄▄ .▄▄▌   ▄▄·       • ▌ ▄ ·. ▄▄▄ .    ▄▄▄▄▄      
		██· █▌▐█▀▄.▀·██•  ▐█ ▌▪▪     ·██ ▐███▪▀▄.▀·    •██  ▪     
		██▪▐█▐▐▌▐▀▀▪▄██▪  ██ ▄▄ ▄█▀▄ ▐█ ▌▐▌▐█·▐▀▀▪▄     ▐█.▪ ▄█▀▄ 
		▐█▌██▐█▌▐█▄▄▌▐█▌▐▌▐███▌▐█▌.▐▌██ ██▌▐█▌▐█▄▄▌     ▐█▌·▐█▌.▐▌
		 ▀▀▀▀ ▀▪ ▀▀▀ .▀▀▀ ·▀▀▀  ▀█▄▀▪▀▀  █▪▀▀▀ ▀▀▀      ▀▀▀  ▀█▄▀▪

		)" << '\n';
		
		cout << "██╗      ██████╗  ██████╗ ██╗ ██████╗    ██████╗ ██╗   ██╗███╗   ██╗ ██████╗ ███████╗ ██████╗ ███╗   ██╗" << endl;
		cout << "██║     ██╔═══██╗██╔════╝ ██║██╔════╝    ██╔══██╗██║   ██║████╗  ██║██╔════╝ ██╔════╝██╔═══██╗████╗  ██║"<< endl;
		cout << "██║     ██║   ██║██║  ███╗██║██║         ██║  ██║██║   ██║██╔██╗ ██║██║  ███╗█████╗  ██║   ██║██╔██╗ ██║"<< endl;
		cout << "██║     ██║   ██║██║   ██║██║██║         ██║  ██║██║   ██║██║╚██╗██║██║   ██║██╔══╝  ██║   ██║██║╚██╗██║"<< endl;
		cout << "███████╗╚██████╔╝╚██████╔╝██║╚██████╗    ██████╔╝╚██████╔╝██║ ╚████║╚██████╔╝███████╗╚██████╔╝██║ ╚████║"<< endl;
		cout << "╚══════╝ ╚═════╝  ╚═════╝ ╚═╝ ╚═════╝    ╚═════╝  ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝ ╚═════╝ ╚═╝  ╚═══╝"<< endl;
		cout << endl;
                                                                                                        
		//cout << "Welcome to insert game name" << endl;
		cout << "You are trapped in a dungeon and must defeat all the monsters to escape! or die alone in here." << endl;
		cout << "You will DIE if you lose all of your health." << endl;
		cout << "If you are stuck in a room, type 'STUCK'." << endl;
		cout << "Type 'w' to move up, 's' to move down, 'a' to move left, and 'd' to move right" << endl;
		cout << "Type in 'HELP' to pull up instructions" << endl;
		cout << "Type in 'QUIT' to exit the game" << endl;
		cout << "Type in 'MAP' to see dungeon map" << endl;
		cout << "Type in 'HEALTH' to see player health" << endl;
		cout << "Type in 'ME' to see You" << endl;
		
		cout << "And, this is you: 웃" << endl;
	}
	
	void menu::openmenu()
	{
		cout << "INSTRUCTIONS:" << endl;
		cout << "Type 'w' to move up, 's' to move down, 'a' to move left, and 'd' to move right" << endl;
		cout << "If you are stuck in a room, type 'STUCK'." << endl;
		cout << "Type in 'HELP' to pull up instructions" << endl;
		cout << "Type in 'QUIT' to exit the game" << endl;
		cout << "Type in 'MAP' to see dungeon map" << endl;
		cout << "Type in 'MAP' to see dungeon map" << endl;
		cout << "Type in 'HEALTH' to see player health" << endl;
		cout << "Type in 'ME' to see you" << endl;
		cout << "Defeat all monsters to move on! " << endl;
	}
	
	void menu::exitGame(player p)
	{
		cout << "Thanks for playing " << p.getName()<< endl;
		cout << "Your score is: " << p.getScores() << endl;
		cout << "Press enter to close the program" << endl;
		cin.get();
		cin.get();
		exit(0);
	}
	
	void menu::playerDeath(player p)
	{
		cout << "Unfortunately...you have died...👻" << endl;
		cout << R"(
		  ▄████  ▄▄▄       ███▄ ▄███▓▓█████     ▒█████   ██▒   █▓▓█████  ██▀███  
		 ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀    ▒██▒  ██▒▓██░   █▒▓█   ▀ ▓██ ▒ ██▒
		▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███      ▒██░  ██▒ ▓██  █▒░▒███   ▓██ ░▄█ ▒
		░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄    ▒██   ██░  ▒██ █░░▒▓█  ▄ ▒██▀▀█▄  
		░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒   ░ ████▓▒░   ▒▀█░  ░▒████▒░██▓ ▒██▒
		 ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░   ░ ▒░▒░▒░    ░ ▐░  ░░ ▒░ ░░ ▒▓ ░▒▓░
		  ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░     ░ ▒ ▒░    ░ ░░   ░ ░  ░  ░▒ ░ ▒░
		░ ░   ░   ░   ▒   ░      ░      ░      ░ ░ ░ ▒       ░░     ░     ░░   ░ 
		      ░       ░  ░       ░      ░  ░       ░ ░        ░     ░  ░   ░     
		                                                     ░                   
		)" << '\n';
		exitGame(p);
	}
	
	void menu::winGame(player p)
	{
		cout << R"(
		┬ ┬┌─┐┬ ┬  ┬ ┬┌─┐┌┐┌  ┬                                                             
		└┬┘│ ││ │  ││││ ││││  │                                                             
		 ┴ └─┘└─┘  └┴┘└─┘┘└┘  o                                                             
		┌─┐┌─┐┌─┐┌┬┐   ┬┌─┐┌┐   ┌─┐                                                         
		│ ┬│ ││ │ ││   ││ │├┴┐   ┌┘                                                         
		└─┘└─┘└─┘─┴┘  └┘└─┘└─┘   o                                                          
		┌┐┌┌─┐┬ ┬  ┌─┐┌─┐  ┌─┐┌┐┌  ┬ ┬┬┌┬┐┬ ┬  ┬ ┬┌─┐┬ ┬┬─┐  ┌┐ ┌─┐┬─┐┬┌┐┌┌─┐  ┬  ┬┌─┐┌─┐  ┬
		││││ ││││  │ ┬│ │  │ ││││  ││││ │ ├─┤  └┬┘│ ││ │├┬┘  ├┴┐│ │├┬┘│││││ ┬  │  │├┤ ├┤   │
		┘└┘└─┘└┴┘  └─┘└─┘  └─┘┘└┘  └┴┘┴ ┴ ┴ ┴   ┴ └─┘└─┘┴└─  └─┘└─┘┴└─┴┘└┘└─┘  ┴─┘┴└  └─┘  o
	
	                                                                                                                                                                                                                                                                                                                                                                           
		)" << '\n';
		cout << "Thanks for playing " << p.getName()<< endl;
		cout << "Your score is: " << p.getScores() << endl;
		
		cout << "\n\n\n\n \n\n\n\n \n\n\n\n \n\n\n\n \n\n\n\n \n\n\n\n ";
		
		
	string d_1  = "Isaiah here.";
    string d_2  = "It means a lot to me that you're here today.";
    string d_3  = "I want to thank you from the bottom of my heart for playing this game.";
    string d_4  = "I'm glad that you managed to get through the entire game and beat the boss";
    string d_5  = "Now that you're done don't forget that there is a World out there waiting for you.";
    string d_6  = "Now for some credits...                                                           ";
    string d_7  = "Jordan Le - Leader     ";
    string d_8  = "Isaiah Bonds - Programmer";
    string d_9  = "Jiyang Li - Programmer   ";
    string d_10 = "Robert Matyjek - Programmer";
    string d_11 = "Manfred Le - Programmer    ";
    string d_12 = "Kristopher - Programmer";
    string d_13 = "Shawn - Programmer     ";
    string d_14 = "Since you're still here, for you:";
     
    
    print(d_1);
    print(d_2);
    print(d_3);
    print(d_4);
    print(d_5);
    print(d_6);
    print(d_7);
    print(d_8);
    print(d_9);
    print(d_10);
    print(d_11);
    print(d_12);
    print(d_13);
    print(d_14);
    
    
    cout << R"(
             RRRR
           RRRRRRRR     R
         RRRR/%%%%%%\RRRRR
        RRRR/%%%%%%%%\RRRRR
    R  RRRR/%%%%/RRR\%\RRRRR
     RRRRR/%%%/RR/%\RR\\RRRRR
     RRRR/%%/RR/%%%%%%%%\RRRRRR
      RR/%%%IRI%%%/&&/%%%IRRRRRRR
      RRI%%%IRI&&&&&/%%%%IRRRRR
    %%IRI%%%\RI&&/%I&&&\%IRRRR
   %%%%I%%%%%%%%%%I&I%I&I&IRR
      %%%%%%%%%%%%I/%%I/&IRR
       %%%%%%%%%%%%%/RRR\%%%
       %%%%%%%%%%%/RRRRRR\%%
        %%%%%%%%%/RRRRRRRI%
         %%%%%%%/RRRRR/%%%%
          %%%%%/RRR/%%%%%%
           %%%/R/%%%%%%%%%
            %%%%I%%%%%%%%
            @@%%I%%%%%%@
           @@@@@@@@@@@@@@@
          @@@ @@@@@@@@ @@@@
          @   @@@@@ @@  @@
              @@@88  @   @
              @  88
                 88_/
                 88/
        @@@      88
      @@@@@@@    88
          @@@@@  88
           @@@@\_88
            @@@@\88            @
            @@@@@88            @
            @@@@@88            @@
            @@@@@88            @@
            @I@@@88           @@@
            @I@@@88__/       @@@@
            @I@@@88//       @@@@@
            @I@@@@8/      @@@@@@@
            @I@@@@8     @@@@@@@@@
            @\@@@@8   @@@@@@@@@@@
             @@@@@8 @@@@@@@@@@@@
              @@@88@@@@@@@@@@@@@
               @@8@@@@@@I@@@@@@
               @@/@@@@@@I@@@@@@
              @@/@@@@@@@/@@@@@
             @@/@@@@@@@/@@@@@@
           @@@/@@@@@@@/@@@@@@
           @@/@@@@@@@/@@@@@@@
           @@I@@@@@@/@@@@@@@
            @I@@@@@/@@@@@@@@
            @I@@@@/@@@@@@@@
            @\@@@/@@@@@@@@@
             @I@/@@@@@@@@@
             @I/@@@@@@@@@@
              I@@@@@@@@@@
              @@@@@@@@@@@
            @@@@@@@@@@@@
           @@@@@@@@@@@@@
           @@@@@@@@@@@
            @@@@@@@@
             @@@@@@
              @@88
               @88
                888
                 888
                  888
                 \_888
                  \\888
                   \\888
                    \888
                     888
                     888__/
                     888//
                      888
                       888
                        888
                         888
                        \_888
                         \\888
                           \888
                             888
                             8888
                              8888   
                               8888    
                                8888
                                                ,###.
                                                ,#'  `  
                                               -,#'-   ,,    '#,:#$#.
                                                :#     '#,    :#   '#;
                                                $#     ,#!    $#    '#
                                               ,:'     ,#'   ,:'   ,#' )";
 
 
 cout << endl;
}

void menu::print(string in)
{
    cout << in << flush;
    back(in.size());
    sleep(5);
}

void menu::back(int n ){
	for(int x = 0; x < n; x++)
	{
	    cout << "\b";
	}
}