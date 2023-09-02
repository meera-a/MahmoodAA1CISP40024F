// GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name, string insName) : courseName(name), instructorName(insName) // member initializer to initialize courseName
{
	// empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name)
{
	courseName = name; // store the course name in the object
} // end function setCourseName

//function to set instructor name

void GradeBook::setInstructorName(string name)

{

	instructorName = name; //store instructor name in the object

}//end function setInstructorName

// function to get the course name
string GradeBook::getCourseName() const
{
	return courseName; // return object's courseName
} // end function getCourseName

//function to get instructor name

string GradeBook::getInstructorName()const

{

	return instructorName;//return object's instructor name

}//end function getInstructorName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
	// call getCourseName to get the courseName
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;

	cout << "This Course is presented by: " << getInstructornName() << "." << endl;
} // end function displayMessage