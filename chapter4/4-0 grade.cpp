#include"grade.h"
#include"student_info.h"
#include"median.h" 
#include<vector>
#include<stdexcept>

using std::domain_error;		using std::vector;

double grade(double a,double b,double c)
{
	return 0.2*a+0.4*b+0.4*c;
}

double grade(double a,double b,const vector<double>& hw)
{
	return grade(a,b,median(hw));
}

double grade(const student_info& s)
{
	return grade(s.midterm,s.final,s.homework);
}
