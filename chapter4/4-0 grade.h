#ifndef GUARD_grade
#define GUARD_grade
#include<vector> 
#include"student_info.h"

double grade(double,double,double);
double grade(double,double,const std::vector<double>&);
double grade(const student_info&);

#endif
