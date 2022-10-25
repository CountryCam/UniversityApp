#include "Phd.h"

void Phd::Learn(int chosenModule)
{
	std::cout << name << " is learning PHD..." << std::endl;

	switch (Modules(chosenModule))
	{
	case Modules::AdvancedAI:
	{
		std::cout << "Advanced AI" << std::endl;
		break;
	}

	case Modules::Assembly:
	{
		std::cout << "Assembly" << std::endl;
		break;
	}

	case Modules::GameProgramming:
	{
		std::cout << "Game programming" << std::endl;
		break;
	}

	case Modules::ToyDesign:
	{
		std::cout << "Toy design" << std::endl;
		break;
	}
	}

	credits += (int)chosenModule;
}
