#include"median.h"
#include"student_info.h"
#include"grade.h"
#include<iostream>
#include<stdexcept>
#include<algorithm>

using std::cin;		using std::cout;	using std::sort;	using std::domain_error;	using std::endl;
using std::string;	using std::max;		using std::vector;	

int main()
{
	vector<student_info> students;
	student_info record;
	string::size_type maxlen=0;
	while(read(cin,record))
	{
		maxlen=max(maxlen,record.name.size());
		students.push_back(record); 
	}
	sort(students.begin(),students.end(),compare);
	
	for(int i=0;i!=students.size();++i)
	{
		cout<<students[i].name<<string(maxlen+1-students[i].name.size(),' ');
		
		try
		{
			double score=grade(students[i]);
			cout<<score;
		}
		catch(domain_error e)
		{
			cout<<e.what();
		}
		cout<<endl;
	}
	return 0;
}
