// GradeBook.h
// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
	explicit GradeBook(std::string); // constructor initialize courseName
	void setCourseName(std::string); // sets the course name
	std::string getCourseName() const; // gets the course name

	void setInstructorName(std::string); // sets the instructor name

	std::string getInstructorName() const; // gets the instructor name
	void displayMessage() const; // displays a welcome message
private:
	std::string courseName; // course name for this GradeBook

	std::string instructorName; //data member instructorName represents the course instructor's name

}; // end class GradeBook