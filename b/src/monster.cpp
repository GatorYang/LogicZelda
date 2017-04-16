#include <iostream>
#include "../include/monster.h"
using namespace std;

/**
 * Uses monster type to ask the corresponding questions
 * 
 * @return whether the player answer is correct or not
 */
 
bool monster::askQuestion() {
	bool correct = false;
	char answer;
	if (type == 16) {
		cout << R"(
                                           ,---._
                                         ,~~,-._  `._
                                          v'~   `-.  `.
                                               _,- ~.  \
                                             .'  ,--`.  `\_
                                             V-'~ ,'~~~`-. `-.
                                 ___             /_/~~~) ` `. `._
                        ____,---'   ;            V     `.__ `--, `;
                         `-._    ;  `.                ____)       :
                             `.;  ; .'              ,'        _    |
                              ; |   ;              ,';'~~~`--' `;  :
                             ,': .-'               `,'  __ __   :  |
                             )_  `-, ___     __        (__:__)   ; ;
                        _,---. \___,'` ~`---;  `-.       |||    ;  ;
                    _,-/   :;     !   `     `|    `-.   |~~~~|   ; :
                _,-' /~   .,'  ;  !!  `..    ``.    `.  :    ;  | :
              ,'  ,-'    .;   `; !!   _,'-' ,--._    ====\__/===: `.
            .'  ,-'   ,--.  ~~`-. !!  ~    ,'    `     `./  \   |  |
           .'  :;   ,'    \        !: .   ;--.__   `;.  |. ~.|   : ;
          .'  ,;    ' ,-'~~`-.     ,!  ;-'     #;   `;. \____/  : `.
         .'  ,;      /__      `-._,'!!( _(0'~~`-'    `;.  `.     ; ;
        .'  ,;    ,'    `---._(0))  !! ~   _,-,        `;  `.   ;  :
        ;  ,;    ,' ;;-.__,-._~~~   !!__,--::::|.      `;:  :   `; )
        ;  :|   ,'  ;/;;; :::;;;;----'|:: |::;\/#.      `;  |    ) ;
        :  |:  ,'  ,' :/  :;; \/))):;;::/  ::' ##:      ;;  ;    ; |
        |  :|  :;  :      `'    \/ \/ `'   `'  ##;      ;  .'  ,'  ;
        :  |;  || .'        ;\.   ____ __,--._ ##;     ;' .'--'   ;
    _,--`. `.  :: `./;   /\/;:;,-'    `-.     `--.__     .'~   ,'~
   /     ;. `; ``. :::;\;.-'~~`./~~\/\ ..    _  :::  --. ' ,-'~
  /    .  `. `; `   ~~~ ;~      ~~~~~~`--.__~~`-. :::   ) ~
 /'    ;`--`. `. `.    :;      `;       ;   `---`._    ,'
 `.  \/      `-.` `_,_ `:,-'-. `.      :_,_    ;   `--'
  `.  `.        ` (___)-: ( ) :--,-'- -(___),'~~~`.
   {_  `.               `.___.' ( ; ;)      :((:)):
     `.  `                       `--'       `.___.'
       `. `.                 ;;:::;
        `-  `.              ;;;. .;
          `-. `.__        \\;;; - ;; //
             `. ` `--..___ \\,--v-, //      Killer  John Lu!!
               `--._   ~~~~~`)____(//
                    )    ~~   ~~~~~~;
                    `.    ~~  ------;
                     `.~~_   ______,' Your grade is doomed!
                      `. `.--';: |:
                       ;  `. Cc; Cc
                       `.  ;  __
                        `. `-'  ~\
                         `-.__,--'~
			)" << '\n';
		cout << "You encountered Jonathan, he asks you." << endl;
		cout << "When three professors are seated in a restaurant, " << endl;
		cout << "asks them: “Does everyone want coffee?” The first " << endl;
		cout << "professor says: “I do not know.” The second professor " << endl;
		cout << "then says: “I do not know.” Finally, the third professor " << endl;
		cout << "says: “No, not everyone wants coffee.” How many coffee " << endl;
		cout << "should the hostess bring out?" << endl;
		cout << "\nA.1 \nB.2 \nC.3 \nD.0" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if (answer == 'B') {
			correct = true;
		}
		return correct;
	} else if (type == 15) {
		cout << R"(
	 _.--"""""--._
   .'             '.
  /                 \
 ;                   ;
 |                   |
 |                   |
 ;                   ;
  \ (`'--,    ,--'`) /
   \ \  _ )  ( _  / /
    ) )(')/  \(')( (
   (_ `""` /\ `""` _)
    \`"-, /  \ ,-"`/
     `\ / `""` \ /`
      |/\/\/\/\/\|
      |\        /|
      ; |/\/\/\| ;
       \`-`--`-`/
        \      /
         ',__,'
          q__p
          q__p
          q__p
          q__p
			)" << '\n';
		cout << "You encountered Scott, he asks you." << endl;
		cout << "Each inhabitant of a remote village always tells the truth " << endl;
		cout << "or always lies.A villager will give only a “Yes” or a “No” " << endl;
		cout << "response to a question a tourist asks. Suppose you are a " << endl;
		cout << "tourist visiting this area and come to a fork in the road. " << endl;	
		cout << "One branch leads to the ruins you want to visit; the other " << endl;
		cout << "branch leads deep into the jungle. A villager is standing " << endl;
		cout << "at the fork in the road. What one question can you ask the " << endl;
		cout << "villager to determine which branch to take? " << endl;
		cout << "\nA.“If I were to ask you whether the right branch leads " << endl;
		cout << "	to the ruins, would you answer yes" << endl;
		cout << "B.”Do either of these roads from this fork in the road " << endl;
		cout << "	lead to the ruins?”" << endl;
		cout << "C.”Are you a liar?” " << endl;
		cout << "D.”is left road leading to the ruin?”" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if (answer == 'A') {
			correct = true;
		}
		
	} else if (type == 14) {
		cout << R"(
		                                    .""--..__
                     _                     []       ``-.._
                  .'` `'.                  ||__           `-._
                 /    ,-.\                 ||_ ```---..__     `-.
                /    /:::\\               /|//}          ``--._  `.
                |    |:::||              |////}                `-. \
                |    |:::||             //'///                    `.\
                |    |:::||            //  ||'                      `|
                /    |:::|/        _,-//\  ||
               /`    |:::|`-,__,-'`  |/  \ ||
             /`  |   |'' ||           \   |||
           /`    \   |   ||            |  /||
         |`       |  |   |)            \ | ||
        |          \ |   /      ,.__    \| ||
        /           `         /`    `\   | ||
       |                     /        \  / ||
       |                     |        | /  ||
       /         /           |        `(   ||
      /          .           /          )  ||
     |            \          |     ________||
    /             |          /     `-------.|
   |\            /          |              ||
   \/`-._       |           /              ||
    //   `.    /`           |              ||
   //`.    `. |             \              ||
  ///\ `-._  )/             |              ||
 //// )   .(/               |              ||
 ||||   ,'` )               /              //
 ||||  /                    /             || 
 `\\` /`                    |             // 
     |`                     \            ||  
    /                        |           //  
  /`                          \         //   
/`                            |        ||    
`-.___,-.      .-.        ___,'        (/    
         `---'`   `'----'`
			)" << '\n';
		cout << "You encountered Sanaz, he asks you." << endl;
		cout << "When planning a party you want to know whom to invite. " << endl;
		cout << "Among the people you would like to invite are three " << endl;
		cout << "touchy friends.You know that if Jasmine attends, she will " << endl;
		cout << "become unhappy if Samir is there, Samir will attend only " << endl;
		cout << "if Kanti will be there, and Kanti will not attend unless Jasmine " << endl;
		cout << "also does.Which combinations of these three friends " << endl;
		cout << "can you invite so as not to make someone unhappy?" << endl;
		cout << "\nA.Jasmine and Kanti \nB.Jasmine and Samir " << endl;
		cout << "C.Kanti and Samir \nD.Jasmine, Kanti and Samir" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if (answer == 'A') {
			correct = true;
		}
	} else if (type == 13) {
		cout << R"(
		          -.                       .-
              _..-'(                       )`-.._
           ./'. '||\\.      _ _ /| COMP! .//||` .`\.
        ./'.|'.'||||\\|..   \'o.O' /  ..|//||||`.`|.`\.
     ./'..|'.|| |||||\``````=(___)=''''''/||||| ||.`|..`\.
   ./'.||'.|||| ||||||||||||.  U  .|||||||||||| ||||.`||.`\.
  /'|||'.|||||| |||||||||||||     ||||||||||||| ||||||.`|||`\
 '.|||'.||||||| |||||||||||||     ||||||||||||| |||||||.`|||.`
'.||| ||||||||| |/'   ``\||``     ''||/''   `\| ||||||||| |||.`
|/' \./'     `\./         \!|\   /|!/         \./'     `\./ `\|
V    V         V          }' `\ /' `{          V         V    V
`    `         `               V  
			)" << '\n';
		cout << "You encountered Maxwell, he asks you." << endl;
		cout << "The police have three suspects for the murder of Mr. " << endl;
		cout << "Cooper: Mr. Smith, Mr. Jones, and Mr.Williams. Smith, " << endl;
		cout << "Jones, and Williams each declare that they did not kill " << endl;
		cout << "Cooper. Smith also states that Cooper was a friend of " << endl;
		cout << "Jones and that Williams disliked him. Jones also states " << endl;
		cout << "that he did not know Cooper and that he was out of town " << endl;
		cout << "the day Cooper was killed. Williams also states that he " << endl;
		cout << "saw both Smith and Jones with Cooper the day of the " << endl;
		cout << "killing and that either Smith or Jones must have killed " << endl;
		cout << "him. Who is the murderer was if  one of the three men " << endl;
		cout << "is guilty, the two innocent menare telling the truth, " << endl;
		cout << "but the statements of the guilty man may or may " << endl;
		cout << "not be true?" << endl;
		cout << "\nA.Jones \nB.Smith \nC.Willams \nD.Can’t tell" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if (answer == 'A') {
			correct = true;
		}
	} else if (type == 12) {
		cout << R"(
		                                      ,--,  ,.-.
                ,                   \,       '-,-`,'-.' | ._
               /|           \    ,   |\         }  )/  / `-,',
               [ '          |\  /|   | |        /  \|  |/`  ,`
               | |       ,.`  `,` `, | |  _,...(   (      _',
               \  \  __ ,-` `  ,  , `/ |,'      Y     (   \_L\
                \  \_\,``,   ` , ,  /  |         )         _,/
                 \  '  `  ,_ _`_,-,<._.<        /         /
                  ', `>.,`  `  `   ,., |_      |         /
                    \/`  `,   `   ,`  | /__,.-`    _,   `\
                -,-..\  _  \  `  /  ,  / `._) _,-\`       \
                 \_,,.) /\    ` /  / ) (-,, ``    ,        |
                ,` )  | \_\       '-`  |  `(               \
               /  /```(   , --, ,' \   |`<`    ,            |
              /  /_,--`\   <\  V /> ,` )<_/)  | \      _____)
        ,-, ,`   `   (_,\ \    |   /) / __/  /   `----`
       (-, \           ) \ ('_.-._)/ /,`    /
       | /  `          `/ \\ V   V, /`     /
    ,--\(        ,     <_/`\\     ||      /
   (   ,``-     \/|         \-A.A-`|     /
  ,>,_ )_,..(    )\          -,,_-`  _--`
 (_ \|`   _,/_  /  \_            ,--`
  \( `   <.,../`     `-.._   _,-`
   `                      ```

			)" << '\n';
		cout << "You encountered Trevor, he asks you." << endl;
		cout << "Steve would like to determine the relative salaries of three " << endl;
		cout << "coworkers using two facts. First, he knows that if Fred " << endl;
		cout << "is not the highest paid of the three, then Janice is. Second, " << endl;
		cout << "he knows that if Janice is not the lowest paid, then " << endl;
		cout << "Maggie is paid the most. What is the order of decreasing " << endl;
		cout << "salary?" << endl;
		cout << "A.Janice, Maggie, Fred \nB.Maggie, Fred, Janice " << endl;
		cout << "C.Fred, Maggie, Janice \nD.Maggie, Janice, Fred " << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if (answer == 'C') {
			correct = true;
		}
	} else if (type == 11) {
		cout << R"(
		        .         __      '        .       '       .
  *            _-~  ~-_      .         '      .
 .   .        /___  ___\  '             .             .
             / (O)  (o) \         *         ___    *  .
   __,-~-~-,/    -..-    \  .-~~-.   __..-~~   ~~-.._
.-~  `V~V~V'`\ -v----v-   \/     /.-~  //..  \   \.  `~-._
 //.     \.' `\..___..---/    /''    .    '   .   ..
''/ \\..'  \'   V~V~V'  //  /  ' .  ' /  \ . '  \\\ \ \
.    ' / .                   / '    .    /  <> \  '.  . ' .
 / ../ '  ( My god guys its)  // ' ../  <> / .'\ \'  ''.\ \
/.  //. \ ( Franky. He is   )      ________________
           ( watching drama //'  /  __   _  _____ \ ..' \ \
 './   \'\   (  again!!  )        | |__  /_\   |   |
 ..         \         \\    //' . | |__ /   \  |   | '.  \..
___...---..._____..--~~\\..____..-\________________/..__
                        \\               ||  .    .
   .           .      .  ` ______________||_________.  .
                            |_____________________|  '
      .       ~             |    |    |     |  |  |  .
  .       .           ..    |____|____|_____|==|__|
                            |____|____|_____|__|__|   jro
                  __________________________________
'        .       /                                 /
     .     ~    /                                 /

0000000000000000000000000000000000000000000000000000000000000
			)" << '\n';
		cout << "You encountered Tomas, he asks you." << endl;
		cout << "Suppose there are signs on the doors to two rooms. The " << endl;
		cout << "sign on the first door reads “In this room there is a lady, " << endl;
		cout << "and in the other one there is a tiger”; and the sign on the " << endl;
		cout << "second door reads “In one of these rooms, there is a lady, " << endl;
		cout << "and in one of them there is a tiger.” Suppose that you " << endl;
		cout << "know that one of these signs is true and the other is false. " << endl;
		cout << "Behind which door is the lady?" << endl;
		cout << "A.Both Door \nB.First Door \nC.Either Door \nD.Second Door" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if (answer == 'D') {
			correct = true;
		}
	} else if (type == 10) {
		cout << R"(
		
                                    ___---|
                                   /      |
                                  /       |
                                 /`------'|__
                           ___--' `------'   ---,
                           \__              __/'
                              \__--__--__-r'
                                |  X      |
                                | ___     /
                                 \     _-'
             ___\-----________----/~~~~ _\----__________------/___
            ////|               -'_/_||_\                    |\\\\\
           /////|                                            |\\\\\\
          //////| ,----______--.              ,--______----. |\\\\\\\
          ||||| |/              |            /              \| ||||||
           |||  /               |           |                 \ ||||
                               |            |                    ||
                               |            |
                               /             \
                              |               |
                               \             /
                                 ~~~~~~~~~~~\
                                |            |
                                |            |
                                |     /\     |
                                `.    ||     |
                                 |    ||    |
                                 |    ||    |
                                 |    ||    |
                                 |    ||    |
                                 |    |/    |
                                 |     \    |
                                |      |    |
                                |      |     |
                                \_____/     /
                                /_____`----'
                                ///||\/-----\
                               ///|||\\//||\\
                               ||||||||//||\\\
                               |||||||||||||||
                                |||||| ||||||
                                        ||||
			)" << '\n';
		cout << "You encountered Franky, he asks you." << endl;
		cout << "In a darkroom and you have one match left," << endl;
		cout << "which do you light first, the newspaper, the candle or the lamp?" << endl;
		cout << "A. The Newspaper \nB. The Lamp \nC. The Candle \nD. The Match" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if (answer == 'D')
		{
			correct = true;
		}
	} else if (type == 9) {
		cout << R"(
		                                             ___.-----.______
                                   ___.-----'::::::::::::::::`---.___
                _.--._            (:::;,-----'~~~~~`----::::::::::.. `-.
   _          .'_---. `--.__       `~~'                 `~`--.:::::`..  `..
  ; `-.____.-' ' {0} ` `--._`---.____                         `:::::::: : ::
 :_^              ~   `--.___ `----.__`----.____                ~::::::.`;':
  :`--.__,-----.___(         `---.___ `---.___  `----.___         ~|;:,' : |
   `-.___,---.____     _,        ._  `----.____ `----.__ `-----.___;--'  ; :
                  `---' `.  `._    `))  ,  , , `----.____.----.____   --' :|
                        / `,--.\    `.` `  ` ` ,   ,  ,     _.--   `-----'|'
 _.~~~~~~._____    __./'_/'     :   .:----.___ ` ` ` ``  .-'      , ,  :::'
                 ///--\;  ____  :   :'    ____`---.___.--::     , ` ` ::'
                 `'           _.'   (    /______     (   `-._   `-._,-'
    ()  ()                 .-' __.-//     /_______---'       `-._   `.
  * *(o)'      ~~~        /////    `'       ~~~~~~      ~~ ______;   ::.
  `\ )( /*                `'`'                            /_______   _.'
    {()}      ,     ~~~                  ~~~~~~~~           /___.---'  --__
     !|       `                                              ~~~
  ~~~~~~~~
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			)" << '\n';
		cout << "You encountered Kevin, he asks you." << endl;
		cout << "Which word is the odd one out:" << endl;
		cout << "First- Second- Third- Forth- Fifth- Sixth- Seventh- Eighth" << endl;
		cout <<"A. First \nB. Second \nC. Third \nD. Forth \nE. Fifth \nF. Sixth \nG. Seventh \nH. Eighth" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if (answer == 'D')
		{
			correct = true;
		}
	} else if (type == 8) {
		cout << R"(
		
                 ."-,.__
                 `.     `.  ,
              .--'  .._,'"-' `.
             .    .'         `'
             `.   /          ,'
               `  '--.   ,-"'
                `"`   |  \
                   -. \, |
                    `--Y.'      ___.
                         \     L._, \
               _.,        `.   <  <\                _
             ,' '           `, `.   | \            ( `
          ../, `.            `  |    .\`.           \ \_
         ,' ,..  .           _.,'    ||\l            )  '".
        , ,'   \           ,'.-.`-._,'  |           .  _._`.
      ,' /      \ \        `' ' `--/   | \          / /   ..\
    .'  /        \ .         |\__ - _ ,'` `        / /     `.`.
    |  '          ..         `-...-"  |  `-'      / /        . `.
    | /           |L__           |    |          / /          `. `.
   , /            .   .          |    |         / /             ` `
  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \
 / .           \"`_/. `-_ \_,.  ,'    +-' `-'  _,        ..,-.    \`.
  '         .-f    ,'   `    '.       \__.---'     _   .'   '     \ \
' /          `.'    l     .' /          \..      ,_|/   `.  ,'`     L`
|'      _.-""` `.    \ _,'  `            \ `.___`.'"`-.  , |   |    | \
||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|
||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||
|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||
||/            _,-------7 '              . |  `-'    l         /    `||
 |          ,' .-   ,' ||               | .-.        `.      .'     ||
 `'        ,'    `".'    |               |    `.        '. -.'       `'
          /      ,'      |               |,'    \-.._,.'/'
          .     /        .               .       \    .''
        .`.    |         `.             /         :_,'.'
          \ `...\   _     ,'-.        .'         /_.-'
           `-.__ `,  `'   .  _.>----''.  _  __  /
                .'        /"'          |  "'   '_
               /_|.-'\ ,".             '.'`__'-( \
                 / ,"'"\,'               `/  `-.|"   
			)" << '\n';
		cout << "You encountered Marc, he asks you." << endl;
		cout << "In the final stretch of a marathon," << endl;
		cout << "you quickly ran by the person who is in second place, "<< endl;
		cout << "what place are you in?" << endl;
		cout << "A. 1st \nB. 2nd \nC. 3rd" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if(answer == 'B')
		{
			correct = true;
		}
	} else if (type == 7) {
		cout << R"(
		     \  _.-'~~~~'-._   /
      .      .-~ \__/  \__/ ~-.         .
           .-~   (oo)  (oo)    ~-.
          (_____//~~\\//~~\\______)
     _.-~`                         `~-._
    /O=O=O=O=O=O=O=O=O=O=O=O=O=O=O=O=O=O\     *
    \___________________________________/
               \x x x x x x x/
       .  *     \x_x_x_x_x_x/
			)" << '\n';
		cout << "You encountered Jordan, he asks you" << endl;
		cout << "A farmer has 17 sheep and all but 9 die. How many are left?" << endl;
		cout << "A. 0 \nB. 8 \nC. 9" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if(answer == 'C')
		{
			correct = true;
		}
	} else if (type == 6) {
		cout << R"(
		           ____                      ,
          /---.'.__             ____//
               '--.\           /.---'
          _______  \\         //
        /.------.\  \|      .'/  ______
       //  ___  \ \ ||/|\  //  _/_----.\__
      |/  /.-.\  \ \:|< >|// _/.'..\   '--'
         //   \'. | \'.|.'/ /_/ /  \\
        //     \ \_\/" ' ~\-'.-'    \\
       //       '-._| :H: |'-.__     \\
      //           (/'==='\)'-._\     ||
      ||                        \\    \|
      ||                         \\    '
      |/                          \\
                                   ||
                                   ||
                                   \\
                                    '
			)" << '\n';
		cout << "You encountered Robert, he asks you" << endl;
		cout << "3 birds sitting on a tree branch," << endl;
		cout << "a hunter shoots and miss, how many birds left on the tree branch?" << endl;
		cout << "A. 0 \nB. 1 \nC. 2 \nD. 3" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if(answer == 'A')
		{
			correct = true;
		}
	} else if (type == 5) {
		cout << R"(
	   ---_ ......._-_--.
      (|\ /      / /| \  \
      /  /     .'  -=-'   `.
     /  /    .'             )
   _/  /   .'        _.)   /
  / o   o        _.-' /  .'
  \          _.-'    / .'*|
   \______.-'//    .'.' \*|
    \|  \ | //   .'.' _ |*|
     `   \|//  .'.'_ _ _|*|
      .  .// .'.' | _ _ \*|
      \`-|\_/ /    \ _ _ \*\
       `/'\__/      \ _ _ \*\
      /^|            \ _ _ \*
     '  `             \ _ _ \
                       \_

			)" << '\n';
		cout << "You encountered Jiayang, he asks you" << endl;
		cout << "Liam is younger than Mandy but older than Tara." << endl;
		cout << "Blake is older than Ruby who is older than Liam." << endl;
		cout << "Mandy is older than Blake." << endl;
		cout << "Who is the second youngest?" << endl;
		cout << "A. Liam \nB. Mandy \nC.Tara \nD.Blake" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if(answer == 'A')
		{
			correct = true;
		}
	} else if (type == 4) {
		cout << R"(
		

                                                ^             
                                               / \           ^
                         _,-~~~--~~~--._      (   \         / \
                     _,-'               `.__  (    \_.---._/   )
                   ,'                       `-(_` -'       `-. )   
                  /       "--..                \.'           `/  
                 ,             `-.              :  _  .-.  _  : 
                /                 ;             : (0).oYo.(0) ;
              /                    `             \.-'V'"'V'-./
             /                     '              \\^     ^//
    /\      /                      '     :    : .-'\\^   ^//
   ;  \    ;   /                  ,'  _.-`.    `. : \\^_^//
   ;   \   ;  ;`.               ,'~~-'     `.    `.`.`-.-'
    \   |_/   ;  `.        /-'/___.---.      `-.   `.`---.
     \       /     |      /____.---.)))         `-. `---.\
      \_____/      (____________))))\\\            `-.\\\\
                                 \\\\
			)" << '\n';
		cout << "You encountered Isaiah, he asks you" << endl;
		cout << "It takes Ray 3 hours to clean the house." << endl;
		cout << "It takes Craig 2 hours to clean the house." << endl;
		cout << "How long would it take for them to clean it together?" << endl;
		cout << "A. 96 minutes \nB. 54 minutes \nC. 72 minutes \nD. 80 minutes" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if(answer == 'C')
		{
			correct = true;
		}
	} else if (type == 3) {
		cout << R"(
	      _____,    _..-=-=-=-=-====--,
        _.'a   /  .-',___,..=--=--==-'`
       ( _     \ /  //___/-=---=----'
        ` `\    /  //---/--==----=-'
     ,-.    | / \_//-_.'==-==---='
    (.-.`\  | |'../-'=-=-=-=--'
     (' `\`\| //_|-\.`;-~````~,        _
          \ | \_,_,_\.'        \     .'_`\
           `\            ,    , \    || `\\
             \    /   _.--\    \ '._.'/  / |
             /  /`---'   \ \   |`'---'   \/
            / /'          \ ;-. \
         __/ /           __) \ ) `|
       ((='--;)         (,___/(,_/
			)" << '\n';
		cout << "You encountered Kristopher, he asks you" << endl;
		cout << "Which weighs more?" << endl;
		cout << "A pound of feathers or a pound of gold" << endl;
		cout << "A. Pound of Feathers \nB. Pound of Gold \nC. Neither" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if(answer == 'C')
		{
			correct = true;
		}
	} else if (type == 2) {
		cout << R"(
  oo`'._..---.___..-
 (_,-.        ,..'`
      `'.    ;
         : :`
        _;_;  
			)" << '\n';
		cout << "You encountered Manfred, he asks you" << endl;
		cout << "Divide 40 by half and add ten. What is the answer?" << endl;
		cout << "A. 30 \nB. 90 \nC. 25 \nD.100" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if(answer == 'B')
		{
			correct = true;
		}
	} else if (type == 1) {
		cout << R"(
			   ,
      _,-'\   /|   .    .    /`.
  _,-'     \_/_|_  |\   |`. /   `._,--===--.__
 ^       _/"/  " \ : \__|_ /.   ,'    :.  :. .`-._
        // ^   /7 t'""    "`-._/ ,'\   :   :  :  .`.
        Y      L/ )\         ]],'   \  :   :  :   : `.
        |        /  `.n_n_n,','\_    \ ;   ;  ;   ;  _>
        |__    ,'     |  \`-'    `-.__\_______.==---'
       //  `""\\      |   \            \
       \|     |/      /    \            \
                     /     |             `.
                    /      |               ^
                   ^       |
                           ^
			)" << '\n';
		cout << "You encountered Shawn, he asks you" << endl;
		cout << "When asked how old she was," << endl;
		cout << "Beth replied “In two years I will be twice as old as I was five years ago." << endl;
		cout << "How old is she?" << endl;
		cout << "A. 8 \nB. 12 \nC.25  \nD. 32" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(10000,'\n');
		if(answer == 'B')
		{
			correct = true;
		}
	}
	return correct;
}