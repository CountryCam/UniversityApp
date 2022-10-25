#pragma once
#include <string>
//#include "Undergrad.h"

class Student
{

public:

	

	int GetID() const;
	int GetAge() const;
	//

	const std::string& GetName() const;
	const std::string& GetNumber() const;
	const std::string& GetAddress() const;

	void SetID(int ID);
	void SetAge(int age);
	//void SetModule(Modules chosenModule);

	void SetName(const std::string& name);
	void SetNumber(const std::string& number);
	void SetAddress(const std::string& address);

	virtual void Learn(int chosenModule) = 0; 
	
	

protected:
	Student* student{ nullptr };

	int ID{ 0 };
	int age{ 0 };
	int credits{ 0 };
	//Modules chosenModule;

	std::string name;
	std::string number;
	std::string address;

};