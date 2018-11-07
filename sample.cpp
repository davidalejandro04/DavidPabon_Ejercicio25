#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <limits>
#include <iostream>
#include <fstream>

int N;
double mu;
double sigma;
double generarGaussiana(double mu, double sigma);

int main(int argc, char** argv)
{
	N=atof(argv[1]);
	mu=atof(argv[2]);
	sigma=atof(argv[3]);

	std::cout <<"N: "<<N<<"\nMu: "<< mu<<"\nSigma: "<<sigma<< std::endl;

	double *dist=new double[N];


	ofstream myfile;
	myfile.open ("sample.dat");
	myfile << "Imprime"<<"\n";
	myfile.close();


}

double generarGaussiana(double mu, double sigma)
{

	static const double epsilon = std::numeric_limits<double>::min();
	static const double two_pi = 2.0*3.14159265358979323846;

	double z1;
	bool generate;
	generate = !generate;

	if (!generate)
	   return z1 * sigma + mu;

	double u1, u2;
	do
	 {
	   u1 = rand() * (1.0 / RAND_MAX);
	   u2 = rand() * (1.0 / RAND_MAX);
	 }
	while ( u1 <= epsilon );

	double z0;
	z0 = sqrt(-2.0 * log(u1)) * cos(two_pi * u2);
	z1 = sqrt(-2.0 * log(u1)) * sin(two_pi * u2);
	return z0 * sigma + mu;
}


