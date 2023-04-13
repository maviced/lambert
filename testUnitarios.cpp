#include <iostream>
#include <cmath>
#include "vector.h"

using namespace std;

int main()
{
	double v[] = {1, 1, 1};
	double w[] = {1, 2, 3};
	double s[] = {1, 1, 1};
	int i;
	
	if(fabs(norm(v, 3) - sqrt(3.0)) < pow(10,-12))
		cout << "Test norm(): passed" << endl;
	else
		cout << "Test norm(): failed" << endl;
	
	
	
	if(fabs(dot(v, 3, w, 3) - 6.0) < pow(10,-12))
		cout << "Test dot(): passed" << endl;
	else
		cout << "Test dot(): failed" << endl;
	
	
	
	cross(v, 3, w, 3, s, i);
	
	if( (fabs(s[0] - 1.0) < pow(10,-12)) && (fabs(s[1] - (-2.0)) < pow(10,-12)) && (fabs(s[2] - (1.0)) < pow(10,-12)))
		cout << "Test cross(): passed" << endl;
	else
		cout << "Test cross(): failed" << endl;
	
	return 0;
}