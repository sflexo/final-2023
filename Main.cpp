#include<Windows.h>
#include<iostream>
#pragma comment(lib, "winmm.lib")
using namespace std;


//global variable;can be seen and used by all functions
void BattleSystem();
int MonsterGen();
string inventory[10];
int dubloons = 100;


void itemDropper();
void Shop();

//players HP
int PlayerHealth = 100;

int main() {
	for (int i = 0; i < 10; i++)
		inventory[i] = " ";

	int room = 1;
	char input = 'a';
	


	cout << "one day you wake up in a random place and you seemed to forgot who you were but odly you feel like you know where you where at." << endl;

	while (input != 'Q' && PlayerHealth >= 0) {
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " ";
		cout << endl;
		switch (room) {
		case 1:
			system("color FC");
			cout << "your in a boxy shaped room that is very dark and has a really bad oder" << endl;
			cout << "the room is starting to hurt your head because the room spells so bad." << endl;
			cout << "your in room 1, you can go (s)outh. " << endl;
			if (inventory[0] != "blade")
			cout << "[you see a (b)lade on the floor]" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			if (input == 'b'){
			cout << "    .---." << endl;
			cout << "    |---|" << endl;
			cout << "    |---|" << endl;
			cout << "    |---|" << endl;
			cout << ".---^ - ^---." << endl;
			cout << ":___________:" << endl;
			cout << "   |  |//|" << endl;
			cout << "   |  |//|" << endl;
			cout << "   |  |//|" << endl;
			cout << "   |  |//|" << endl;
			cout << "   |  |//|" << endl;
			cout << "   |  |//|" << endl;
			cout << "   |  |.-|" << endl;
			cout << "   |.-'**|" << endl;
			cout << "    \\***/" << endl;
			cout << "     \\*/" << endl;
			cout << "      V" << endl;
				inventory[0] = "blade";
			}
			break;
		case 2:
			system("color FC");
			cout << "as you walk into the next room you get hit with a worse smell then the last room" << endl;
			cout << "is smells so bad you dont even know thers a broken light thats fliccing." << endl;
			cout << "your in room 2, you can go (n)orth or (e)ast." << endl;
			if (inventory[1] != "ring")
				cout << "[theres a shiny (r)ing on the floor]" << endl;
			cin >> input;
			if (input == 'n')
				room = 1;
			else if (input == 'e')
				room = 3;
			if (input == 'r') {
				cout << "you pick up a ring, the note on it says...whoever finds this ring use it at your own cost!!" << endl;
				cout <<	"It contains the power of a god.When you put this ring on you wont be able to go bacc to your old life. .P.S Unknown." << endl;
					inventory[2] = "ring";
			}
			break;
		case 3:
			system("color FC");
			BattleSystem();
			cout << "after you eliminate the monster you see that your in a very dark room and its hard to see 5 feet infront of yourself," << endl;
			cout << "you can go (w)est or (s)outh." << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			else if (input == 's')
				room = 4;
			break;
		case 4:
			system("color FC");
			itemDropper();
			cout << "as you walk into the next room you find something on the floor" << endl;
			cout << "you can go (n)orth or (s)outh." << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			else if (input == 's')
				room = 5;
			if (itemDropper)
			break;
		case 5:
			system("color FC");
			BattleSystem();
			cout << "just a corpse of the monster you eliminated" << endl;
			cout << "your in the 5th room, you can go (n)orth or (e)ast ." << endl;
			cin >> input;
			if (input == 'n')
				room = 4;
			else if (input == 'e')
				room = 6;
			break;
		case 6:
			system("color FC");
			Shop();
			cout << "theres a man in this room lookin to sell items for dubloons he has a whole shop setup in the room" << endl;
			cout << "you can go (w)est or (n)orth ." << endl;
			cout << "press (p) to open the shop" << endl;
			cin >> input;
			if (input == 'w')
				room = 5;
			else if (input == 'n')
				room = 7;
			if (input == 'p')
			break;
		case 7:
			system("color FC");
			BattleSystem();
			cout << "you walk into the 7th room and see a huge hole in the wall" << endl;
			cout << "you can go (s)outh to go bacc or (e)ast to go to the next room." << endl;
			cin >> input;
			if (input == 's')
				room = 6;
			else if (input == 'e')
				room = 8;
			break;
		case 8:
			system("color FC");
			cout << "you walk in the next room and its organized in a weird way." << endl;
			cout << " you can go (w)est or (n)orth" << endl;
			if (inventory[0] != "gloves")
				cout << "[you see some (g)loves on the floor]" << endl;
			cin >> input;
			if (input == 'w')
				room = 7;
			else if (input == 'n')
				room = 9;
			if (input == 'g') {
				cout << "you pick up some gloves." << endl;
				cout << "        _______" << endl;
				cout << "    ___/_____ _)____" << endl;
				cout << " .-'-'   ____)______)" << endl;
				cout << "|    .-'    ______)__)" << endl;
				cout << "|    ---    _______))" << endl;
				cout << "|    `-.   _______))" << endl;
				cout << " `---.___________)" << endl;
				inventory[2] = "gloves";
			}

			break;
		case 9:
			system("color FC");
			cout << "your in the next room that has a lot of lights" << endl;
			cout << "theres light on the floor, lights on the walls, but not on the over your head" << endl;
			cout << "the way the lights are it make the room look more weird" << endl;
			cout << " you can go (s)outh or (n)orth" << endl;
			cin >> input;
			if (input == 's')
				room = 8;
			else if (input == 'n')
				room = 10;
			break;
		case 10:
			system("color FC");
			cout << "you're in the 10th room, (s)outh or go (e)ast  " << endl;
			cout << "theres norhing in this room but a sleeping cat so just leave n let it sleep " << endl;
			cout << "       (_    ,_,    _) " << endl;
			cout << "       / `'--) (--'` \\" << endl;
			cout << "      /  _,-'\\_/'-,_  \\" << endl;
			cout << "     /.-'     ""     '-.\\" << endl;
			cin >> input;
			if (input == 's')
				room = 9;
			else if (input == 'e')
				room = 11;
			break;
		case 11:
			system("color FC");
			cout << "you're in the 11th room, (w)est to go back or go (e)ast to the next room " << endl;
			cin >> input;
			if (input == 'w')
				room = 10;
			else if (input == 'e')
				room = 12;
			break;
		case 12:
			system("color FC");
			cout << "your in the 12th room." << endl;
			cout << "you have made it to the last room wake up the cat to win." << endl;
			cout << "(p)et cat..." << endl;
			cout << "      |\\      _,,,---,,_" << endl;
			cout << "ZZZzz /,`.-'`'     -. ;-;;,_" << endl;
			cout << "     |,4-  ) )-,_. ,\\ (  `'-'" << endl;
			cout << "    '---''(_/--'  `-'\\_)  " << endl;
			if (input == 'p')
				
			break;

		} //end of game switch

	}//end game loop

}//end of main
void BattleSystem() {

	PlaySound(TEXT("music.wav"), NULL, SND_FILENAME | SND_ASYNC);
	int MonsterType = MonsterGen();
	int MonsterHealth = 20;
	int MonsterDmg = 10;
	int PlayerDmg = 15;
	//mosters health
	if (MonsterType == 1) {
		MonsterHealth = 30;
	}
	if (MonsterType == 2) {
		MonsterHealth = 50;
	}//moster dmg
	if (MonsterType == 1) {
		MonsterDmg = rand() % 20+1;
	}
	if (MonsterType == 2) {
		MonsterDmg = rand() %6 + 5;
	}


	while (MonsterHealth > 0 && PlayerHealth > 0) { //keep looping until you or the monster dies


		if (inventory[1] == "ring") {
			MonsterDmg /= 2;
			cout << "it hits you for " << MonsterDmg << " HP" << endl;
		}
		cout << "it hits you for "<<MonsterDmg<<" HP" << endl;
		PlayerHealth -= MonsterDmg;
		PlayerDmg = rand() % 76;
		if (inventory[0] == "blade") {
			PlayerDmg *= 2;
			cout << "you stabbed it" << endl;
		}
		cout << "you hit for  " << PlayerDmg << " HP" << endl << endl;
		MonsterHealth -= 10;
		system("pause");
		cout << "Your health is now " << PlayerHealth << ", and the Monster's health is " << MonsterHealth << endl;
		system("pause");
	}
	if (MonsterHealth <= 0)
		cout << "you won!" << endl;
	
}//end of loop
int MonsterGen() {
	int num = rand() % 100;
	
	if (num < 50) {
		cout << "   ____       ____" << endl;
		cout << "  /    )     (    \\" << endl;
		cout << " /    (  ^_^  )    \\" << endl;
		cout << "|  {   \\('v')/   }  |" << endl;
		cout << "|   {   /   \\   }   |" << endl;
		cout << "|_)(   /\\   /\\   )(_|" << endl;
		cout << "|)  (_ | \\|/  |_)  (|" << endl;
		cout << "'     ""--^^^^--""      '" << endl;
	}
	else {
		cout << "          (" << endl;
		cout << "       __..)__" << endl;
		cout << "     .'       `'." << endl;
		cout << "    / - -        `\\" << endl;
		cout << "   /(')(')         \\" << endl;
		cout << "   /  ^        )   |" << endl;
		cout << "   \\.--.           |" << endl;
		cout << "    \\--'          /" << endl;
		cout << "     \\__.-' __..''" << endl;
		cout << "       /     |" << endl;

	return 2;
	}
}//end of loop
void itemDropper() {
	int num = rand() % 100;
	if (num < 35) {
		cout << "[you got a dirty sock]" << endl;
		inventory[6] = "sock";
	}
	else if (num < 25) {
		cout << "[you got a handful of legos]" << endl;
		inventory[7] = "legos";
	}
	else {
		cout << "[you didnt get anything]" << endl;
	}
}//end of loop

void Shop() {
	PlaySound(TEXT("music.wav"), NULL, SND_FILENAME | SND_ASYNC);
	int input = 23454235;
	while (input != 0) {
		cout << "[welcome to the shop]" << endl;
		cout << " YOU HAVE " << dubloons << " DUBLOONS." << endl;
		cout << "items for sale:" << endl;
		cout << "1)boots: 15" << endl;
		cout << "2)armor: 50" << endl;
		cout << "3)potion: 10" << endl;
		cout << "[press 0 to quit]" << endl;
		cin >> input;
		if (input == 1) {
			if (dubloons >= 15) {
				cout << "you bought some boots" << endl;
				inventory[3] = "boots";
				dubloons -= 15;
			}
			else
				cout << "sorry, dont have enough dunloons" << endl;
		}
		if (input == 2) {
			if (dubloons >= 50) {
				cout << "you bought some armor" << endl;
				inventory[4] = "armor";
				dubloons -= 50;
			}
			else
				cout << "sorry, you dont have enough dubloons" << endl;
		}
		if (input == 3) {
			if (dubloons >= 10) {
				cout << "you bought a potion" << endl;
				inventory[5] = "potion";
				dubloons -= 10;
			}
			else
				cout << "you dont have enough dubloons for this" << endl;

		}
	}
}//end
