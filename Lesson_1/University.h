#pragma once
#include<iostream>
#include <string>
#include <vector>
#include "Student.h"


const int maxStudents = 5;

class University
{

public:

	University(const std::string& name, int foundingYear, int totalLecturers);

	void Login();
	void HoldLecture();
	void EnrolStudent(Student* student);
	void DisplayBrochure();
	void DisplayStudentInfo();

private:

	std::string name;
	std::vector<Student*> students;
	std::string username;
	std::string password;

	int foundingYear{ 0 };
	int totalLecturers{ 0 };

};