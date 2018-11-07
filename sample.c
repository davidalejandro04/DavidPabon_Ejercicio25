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


}
