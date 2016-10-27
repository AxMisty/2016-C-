#include"median.h"
#include<vector>
#include<algorithm>
#include<stdexcept>

using namespace std;

double median(vector<double> homework)
{
	vector<double>::size_type size=homework.size();
	if(size==0)
	throw domain_error("median of an empty vector");
	sort(homework.begin(),homework.end());
	return size%2==0? (homework[size/2-1]+homework[size/2])/2:(homework[size/2]);
}
