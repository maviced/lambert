#include <iostream>
#include <cmath>
#include "vector.h"
#include "seebatt.h"
#include "seebattk.h"
#include "LAMBERBATTIN.h"

using namespace std;

int main()
{
	if(seebatt(0.0) - 5.0 <= pow(10,-14))
		cout << "seebatt(0.0) es correcto" <<endl;
	else
		cout << "Falla: seebatt(0.0)" <<endl;
	
	if(seebatt(1.0) - 6.062513305873209 <= pow(10,-14))
		cout << "seebatt(1.0) es correcto" <<endl;
	else
		cout << "Falla: seebatt(1.0)" <<endl;
	
	if(seebatt(10000.0) - 257.144804617101 <= pow(10,-12))
		cout << "seebatt(10000.0) es correcto" <<endl;
	else
		cout << "Falla: seebatt(10000.0)" <<endl;
	
	
	if(seebatt(3.76982021737918) - 8.030077183411739 < pow(10,-12))
		cout << "seebatt(3.76982021737918) es correcto" <<endl;
	else
		cout << "Falla: seebatt(3.76982021737918)" <<endl;
	
	
	cout << "------------------------------------------------" <<endl;
	
	
	if(seebattk(0.0) - 0.333333333333333 <= pow(10,-14))
		cout << "seebattk(0.0) es correcto" <<endl;
	else
		cout << "Falla: seebattk(0.0)" <<endl;
	
	if(seebattk(1.0) - 0.290322580645161 <= pow(10,-14))
		cout << "seebattk(1.0) es correcto" <<endl;
	else
		cout << "Falla: seebattk(1.0)" <<endl;
	
	if(seebattk(10000.0) - 2.248482274464503e-04 <= pow(10,-12))
		cout << "seebattk(10000.0) es correcto" <<endl;
	else
		cout << "Falla: seebattk(10000.0)" <<endl;
	
	if(seebattk(3.76982021737918) - 0.213881982154306 < pow(10,-12))
		cout << "seebattk(3.76982021737918) es correcto" <<endl;
	else
		cout << "Falla: seebattk(3.76982021737918)" <<endl;
	
	
	cout << "----------------------------------------------" <<endl;
	
	double r1[3] = {20.0e6, 20.0e6, 0}; 
	double r2[3] = {-20.0e6, 10.0e6, 0};
	char dm[]="retro";
	double tof = 1.0 * 86400;
	double V1[3];
	double V2[3];
	
	LAMBERTBATTIN(r1, r2, dm, tof, V1, V2);
	
	if( (V1[0] - 4144.30717367665 < pow(10,-10)) && (V1[1] - (-1571.15318557575) < pow(10,-10))&& (V1[2] - (0) < pow(10,-10)) && (V2[0] - (3223.39508300486) < pow(10,-10)) && (V2[1] - (4103.7628177997) < pow(10,-10))&& (V2[2] - (0) < pow(10,-10)))
		cout << "Test LAMBERTBATTIN() es correcto" << endl;
	else
		cout << "Falla: Test LAMBERTBATTIN()" << endl;

	
	return 0;
}