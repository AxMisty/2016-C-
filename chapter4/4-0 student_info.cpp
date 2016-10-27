#include"student_info.h"
#include<vector>
#include<iostream>
#include<string>
 
using std::istream;		using std::vector;

bool compare(const student_info&x,const student_info&y)
{
	return x.name<y.name;
}

istream& read(istream& is,student_info s)
{
	is>>s.name>>s.midterm>>s.final;
}

istream& read_hw(istream& in,vector<double>& homework)
{
	if(in)
	{
		homework.clear();
		double x;
		while(in>>x)
			homework.push_back(x);
		in.clear();
	}
	return in;
}

istream& read(istream& in,student_info& student)
{
	in>>student.name>>student.midterm>>student.final;
	read_hw(in,student.homework);
	return in;
}
