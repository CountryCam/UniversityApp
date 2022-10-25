#pragma once

#include "Student.h"

class Undergrad :public Student
{
public:

	virtual void Learn(int chosenModule)override;
	virtual void SetModual()
	
protected:
	
	enum class Modules
	{
		GameProgramming = 30,
		AdvancedAI = 15,
		ToyDesign = 20,
		Assembly = 50
	};

	
};