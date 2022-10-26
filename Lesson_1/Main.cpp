#include <assert.h>
#include <iostream>
#include <array>
#include "University.h"
#include "Student.h"
#include "Undergrad.h"
#include "Masters.h"
#include "Phd.h"



int main()
{
	

	Student* john = new Undergrad();
	Student* james = new Undergrad();
	Student* jessie = new Masters();
	Student* jemma = new Masters();
	Student* jack = new Phd();
	Student* harry = new Undergrad();

	john->SetName("John Smith");
	john->SetID(1234);
	john->SetAge(23);
	john->SetNumber("07367854219");
	john->SetAddress("23 Smithy Rd, London");
	                                         //john.SetModule(Student::Modules::AdvancedAI);

	james->SetName("James Bond");
	james->SetID(8976);
	james->SetAge(41);
	james->SetNumber("07267994223");
	james->SetAddress("45 Snootville, London");
	///james.SetModule(Student::Modules::Assembly);

	jessie->SetName("Jessie Taylor");
	jessie->SetID(1926);
	jessie->SetAge(25);
	jessie->SetNumber("07566922201");
	jessie->SetAddress("17 Darlington Rd, Oxford");
	//jessie.SetModule(Student::Modules::ToyDesign);

	jemma->SetName("Jemma Golding");
	jemma->SetID(9821);
	jemma->SetAge(27);
	jemma->SetNumber("07322698821");
	jemma->SetAddress("765 Old Rd, Reading");
	//jemma.SetModule(Student::Modules::GameProgramming);

	jack->SetName("Jack Sparrow");
	jack->SetID(9932);
	jack->SetAge(55);
	jack->SetNumber("07455832568");
	jack->SetAddress("456 Pirate Str, Ireland");
	//jack.SetModule(Student::Modules::AdvancedAI);

	harry->SetName("Harry Callahan");
	harry->SetID(6674);
	harry->SetAge(22);
	harry->SetNumber("07355876511");
	harry->SetAddress("32 Essex Rd, Essex");
	//harry.SetModule(Student::Modules::GameProgramming);

	University londonMet("London Met", 1786, 150);

	londonMet.EnrolStudent(john);
	londonMet.EnrolStudent(james);
	londonMet.EnrolStudent(jessie);
	londonMet.EnrolStudent(jemma);
	londonMet.EnrolStudent(jack);
	londonMet.EnrolStudent(harry);
	
	londonMet.DisplayBrochure();
	londonMet.DisplayStudentInfo();
	londonMet.HoldLecture();

	

	system("pause");
	return 0;
}