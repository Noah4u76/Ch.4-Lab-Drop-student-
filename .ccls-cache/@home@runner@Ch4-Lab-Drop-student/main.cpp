//
// File: main.cpp
// Description: Drop Student
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

/* Complete the Course class by implementing the DropStudent() member function, which removes a student (by last name) from the course roster. If the student is not found in the course roster, no student should be dropped.

Given classes:

Class Course represents a course, which contains a vector of Student objects as a course roster. (Type your code in here.)
Class Student represents a classroom student, which has three private data members: first name, last name, and GPA. (Hint: getLast() returns the last name field.)
Note: For testing purposes, different student values will be used.

Ex. For the following students:

Henry Nguyen 3.5
Brenda Stern 2.0
Lynda Robison 3.2
Sonya King 3.9
the output for dropping Stern is:

Course size: 4 students
Course size after drop: 3 students */

#include <iostream>
#include <iomanip>
#include <string>
#include "Course.h"
using namespace std;

int main() {
	Course cis162;
   int beginCount;
   string toDrop;
   
   // Example students for testing
   cis162.AddStudent(Student("Henry", "Nguyen", 3.5));   
   cis162.AddStudent(Student("Brenda", "Stern", 2.0)); 
   cis162.AddStudent(Student("Lynda", "Robison", 3.2)); 
   cis162.AddStudent(Student("Sonya", "King", 3.9)); 
   toDrop = "Stern";
   
   beginCount = cis162.CountStudents();
   cis162.DropStudent(toDrop);
		
	cout << "Course size: " << beginCount << " students" << endl;
	cout << "Course size after drop: " << cis162.CountStudents() << " students" << endl;

   return 0;
}