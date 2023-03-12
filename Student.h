//
// File: Student.h
// Description: Drop Student
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

// Class representing a student
class Student {
   public:
      Student(string first, string last, double gpa);
      double GetGPA() ;
      string GetLast();

   private:
      string first;  // first name
	   string last;   // last name
	   double gpa;    // grade point average
};

#endif