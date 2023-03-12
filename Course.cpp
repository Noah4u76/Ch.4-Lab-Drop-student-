//
// File: Course.cpp
// Description: Drop Student
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include <iostream>
#include "Course.h"
using namespace std;

void Course::DropStudent(string last) {
   for (vector<Student>::iterator it = roster.begin(); it != roster.end();
     ++it) {
       if (it -> GetLast() == last) {
         roster.erase(it);
         return;
       }
     }
  }


void Course::AddStudent(Student s) {
	roster.push_back(s);
}

int Course::CountStudents() {
   return roster.size();
}