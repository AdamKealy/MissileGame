//Name:		Adam Kealy
//Login:	C00213914
//Date:		14/09/17
//-------------
//Progame to make a text based missile game
//-------------
//time taken:
//
//

#include <iostream>
#include<cstdlib>
#include<ctime>
#include <Windows.h>

void run();

int main()
{
	run();
	std::system("pause");
	return 0;
}

void run()
{
	int warhead = 4;				//For warhead type
	int CONST LAUNCHCODE = 1234;	//Launch code
	int codeAttepmt = 0;			//For checking against launch code
	int counter = 2;				//Loop for for loop
	int missileCounter = 2;			//Missiles left
	int loop = 2;					//Loop for for loop
	bool isArmed = false;			//bool to see if the missile is armed


	//Introduction protocol
		std::cout << "President Trump," << std::endl;
		std::cout << "Your mission, should you choose to accept it, is to blow up North Korea." << std::endl;
		std::cout << "You may select from two missiles, but it is essential that the fallout"<< std::endl;
		std::cout << "doesn't effect the neighbouring countries. This message will self-destruct" << std::endl; 
		std::cout << "in five seconds." << std::endl;
		std::cout << std::endl;
		std::cout << "P.S. Remember your launch code is 1234. :)" << std::endl;
		std::cout << std::endl;
		std::system("pause");

		//Takes input for warhead type
		while (warhead != 2 && warhead != 1)
		{
		std::system("cls");
		std::cout << "Select your warhead:"<< std::endl;
		std::cout << "1. Explosive" << std::endl;
		std::cout << "2. Nuclear" << std::endl;
		std::cout << std::endl;
		
		std::cin >> warhead;
		}

		//Genrates a random number to see if the targets will be hit
		std::system("cls");
		std::cout << "Aquiring target";
		int target;
		std::srand(std::time(0));
		target = std::rand() % 3;

		for  (int i = 0; i < 3; i++)
		{
			Sleep(666);
			std::cout << ".";
			
		}
		std::cout << std::endl;

		//Takes launch code attempts from user and arms the warhead
		std::system("cls");
		std::cout << "Prepairing Launch Enter Code: ";
		for (int i = 0; i <= counter; i++)
		{
			std::cin >> codeAttepmt;
			if (codeAttepmt == LAUNCHCODE)
			{
				isArmed = true;
				break;
			}
			else
			{
				std::cout << "Invalid code" << std::endl;
				std::cout << std::endl;
				std::cout << "Atempts remaing: " << counter << std::endl;
				counter--;

			}
			
		}

		//Loop for hitting target
		if (isArmed == true)
		{	
			std::system("cls");
			for (int i = -1; i < loop; i++)
			{
				std::cout << "Missile Launched";
				for  (int j = 0; j <= 2; j++)
				{
					Sleep(666);
					std::cout << ".";
				}
				if (target == 0 && warhead == 1)
				{
					// target destroyed happy days
					std::cout << std::endl;
					std::cout << "Target destroyed" << std::endl;
					std::cout << std::endl;
					std::cout << "Job well done." << std::endl;
					break;
				}
				else if (target == 0 && warhead == 2)
				{
					// target destroyed with nukes happy days
					std::cout << std::endl;
					std::cout << "Target destroyed" << std::endl;
					std::cout << std::endl;
					std::cout << "Job well done." << std::endl;
					break;
				}
				else if (target == 1 && warhead == 2)
				{
					// target destroyed with nuclear fallout ... ooops :|
					std::cout << std::endl;
					std::cout << "Target destroyed" << std::endl;
					std::cout << std::endl;
					std::cout << "The nuclear fallout is catastophic..." << std::endl;
					break;
				}
				else 
				{
					//Missed... dang it.
					std::cout << std::endl;
					std::cout << "Target missed"  << std::endl;
					std::cout << std::endl;
					std::cout << "Missiles Left: " << missileCounter << std::endl;
					missileCounter--;
				}
			}
			
		}
}