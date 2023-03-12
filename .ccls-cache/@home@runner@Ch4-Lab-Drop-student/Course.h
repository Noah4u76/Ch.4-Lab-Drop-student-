//
// File: Course.h
// Description: Drop Student
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include "Student.h"

class Course {
   public: 
      void DropStudent(string last);
      void AddStudent(Student s);
      int CountStudents();
   
   private:
      vector<Student> roster; //collection of Student objects
};

#endif