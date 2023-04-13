#include <cmath>
#include "vector.h"


//Esta función calcula la norma de un vector
//In: v vector al cual se calcula la norma y n tamaño del vector v
//Out: devuelve un double que es la norma del vector v

double norm(double v[], int n)
{
	double suma=0;
	int i;
	
	if(n <= 0)
		throw "Empty vector";
	
	for(i=0; i<n; i++)
		suma += v[i]*v[i];
	
	return(sqrt(suma));
}

//Esta función calcula el producto escalar de dos vectores
//In: v y w son los vectores a los cuales se les calucla el producto escalar,
//n es el tamaño del vector v y m es el tamaño del vector w
//Out: devuelve un double que es el producto escalar de los vectores v y w

double dot(double v[], int n, double w[], int m)
{
	double suma=0;
	int i;
	
	if( (n <= 0) || (m <=0))
		throw "Empty vector";
	
	if(n != m)
		throw "Different dimensions";
	
	for(i=0; i<n; i++)
		suma += v[i]*w[i];
	
	return(suma);
}

//Esta función calcula el producto vectorial de dos vectores de dimensión 3
//In: v y w son los vectores a los cuales se les calucla el producto vectorial,
//n es el tamaño del vector v y m es el tamaño del vector w
//Out: devuelve un vector de tipo double que es el producto vectorial de los vectores v y w

void cross(double v[], int n, double w[], int m, double s[], int &i)
{
	
	if ( (n != 3) || (m != 3))
		throw "No valid dimensions";
	
	i=n;
	s[0] = v[1]*w[2]-v[2]*w[1];
	s[1] = v[2]*w[0]-v[0]*w[2];
	s[2] = v[0]*w[1]-v[1]*w[0];
	
	
}
