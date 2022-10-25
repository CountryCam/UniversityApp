#include <iostream>
#include "University.h"

University::University(const std::string& name, int foundingYear, int totalLecturers) :
	name(name), foundingYear(foundingYear), totalLecturers(totalLecturers) 
{
	students.reserve(maxStudents);
}

void University::DisplayBrochure()
{
	std::cout << "Welcome to " << name << ", which was founded in " << foundingYear << "." << std::endl;
	std::cout << "Our university has a total of " << totalLecturers << " lecturers and " << students.size() << " students." << std::endl;
}

void University::DisplayStudentInfo()
{
	if (students.empty())
	{
		std::cout << "There are no students at this university (yet)" << std::endl;
	}

	else
	{
		for (auto& student : students)
		{
			std::cout << "Student info" << std::endl;
			std::cout << "====================================" << std::endl;
			std::cout << "ID: " << student->GetID() << std::endl;
			std::cout << "Age: " << student->GetAge() << std::endl;
			std::cout << "Name: " << student->GetName() << std::endl;
			std::cout << "Number: " << student->GetNumber() << std::endl;
			std::cout << "Address: " << student->GetAddress() << std::endl;
			std::cout << "====================================" << std::endl;
		}
	}
}


void University::HoldLecture()
{
	if (students.empty())
	{
		std::cout << "There are no students at this university (yet)" << std::endl;
	}

	else
	{
		//Range-based for loop
		for (auto& student : students)
		{
			student->Learn(0);
		}
	}
}

void University::EnrolStudent(Student* student)
{
	if (students.size() == maxStudents)
	{
		std::cout << "The university now has the maximum amount of students." << std::endl;
	}

	else
	{
		students.push_back(student);
	}
}