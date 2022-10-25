#pragma once

#include"Student.h"
#include<iostream>

class Phd : public Student
{
public:

	virtual void Learn(int chosenModule)override;


protected:

	enum class Modules
	{
		GameProgramming = 30,
		AdvancedAI = 15,
		ToyDesign = 20,
		Assembly = 50
	};

};
