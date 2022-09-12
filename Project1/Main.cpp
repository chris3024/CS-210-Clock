#include "Clock.h"

#include <iostream>
#include <string>
#include <thread>



auto myClock = Clock();

int main()
{
	//FIXME: Create display loop

	int userInput = -1;

	

	while (userInput != 4) {

		
		system("CLS");

		myClock.displayClocks();

		myClock.DisplayMenu();

		


		
		myClock.addSecond();

		
		
		
		
		std::cin >> userInput;
		
		switch (userInput)
		{
			case 1: {
				myClock.addHour();
				break;
			}
			case 2: {
				myClock.addMinute();
				break;
			}
			case 3: {
				myClock.addSecond();
				break;
			}
			case 4: {
				break;
			}
			default: {
				std::cout << "Invalid Selection. Use 1-4 to make your selection" << std::endl;
				break;
		
			}

		}

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}
	std::cout << "Program Exited" << std::endl;
}



