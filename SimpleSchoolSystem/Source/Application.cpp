#include "Application.h"

Application::Application()
{
	run = true;
	answer = "y";

	note01 = 0.0f;
	note02 = 0.0f;
	note03 = 0.0f;
	note04 = 0.0f;

	numberInput = 0.0f;
	finalNote = 0.0f;
}

void Application::ShowMenu()
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << " School System | C++ Edition " << std::endl;
	std::cout << "-----------------------------" << std::endl << std::endl;
}

void Application::Calculator()
{
	note01 = GetInput("Insert your first note: ");
	note02 = GetInput("Insert your second note: ");
	note03 = GetInput("Insert your third note: ");
	note04 = GetInput("Insert your fourth note: ");

	finalNote = (note01 + note02 + note03 + note04) / 2;

	std::cout << std::endl << "Your final note is: " << finalNote << std::endl;

	if (finalNote >= 10) {
		std::cout << "You're aproved!" << std::endl << std::endl;
	}

	else {
		std::cout << "You're reproved" << std::endl << std::endl;
	}
}

void Application::Run()
{
	while (run)
	{
		ShowMenu();
		Calculator();

		std::cout << "Would you like calculate again (y/n)? ";
		std::cin >> answer;

		system("cls");

		if (answer == "n" || answer == "N")
		{
			Terminate();
		}
	}
}

void Application::Terminate()
{
	run = false;
}

float Application::GetInput(std::string text)
{
	std::cout << text;
	std::cin >> numberInput;
	return numberInput;
}