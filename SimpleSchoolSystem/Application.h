#ifndef APPLICATION_CLASS_H
#define APPLICATION_CLASS_H

#include <iostream>

class Application
{
public:
	Application();

	bool run;

	float note01;
	float note02;
	float note03;
	float note04;

	float numberInput;
	float finalNote;
	std::string answer;

	void ShowMenu();
	void Calculator();
	void Run();
	void Terminate();
	float GetInput(std::string text);
};

#endif // !APPLICATION_CLASS_H
