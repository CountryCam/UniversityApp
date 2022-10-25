#include <assert.h>
#include <iostream>
#include "Student.h"
#include <iostream>
#include "University.h"


int Student::GetID() const
{
	return ID;
}

int Student::GetAge() const
{
	return age;
}

//Student::Modules Student::GetModule() const
//{
//	return chosenModule;
//}

const std::string& Student::GetName() const
{
	return name;
}

const std::string& Student::GetNumber() const
{
	return number;
}

const std::string& Student::GetAddress() const
{
	return address;
}

void Student::SetID(int ID)
{
	this->ID = ID;
}

void Student::SetAge(int age)
{
	this->age = age;
}

//void Student::SetModule(Modules chosenModule)
//{
//	this->chosenModule = chosenModule;
//}

void Student::SetName(const std::string& name)
{
	this->name = name;
}

void Student::SetNumber(const std::string& number)
{
	this->number = number;
}

void Student::SetAddress(const std::string& address)
{
	this->address = address;
}

void Student::Learn(int chosenModule)
{
	std::cout << name << " is learning...";

	/*switch (chosenModule)
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

	credits += (int)chosenModule;*/
}


