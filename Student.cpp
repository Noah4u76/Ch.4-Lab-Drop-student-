//
// File: Student.cpp
// Description: Drop Student
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Student.h"

// Student class constructor
Student::Student(string first, string last, double gpa) {
		this->first = first;    // first name
		this->last = last;      // last name
		this->gpa = gpa;        // grade point average
}

double Student::GetGPA() {
		return gpa;
}

string Student::GetLast() {
		return last;
}