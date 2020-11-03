#pragma once
#include <math.h>
#include <limits.h>

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	int a = INT_MAX;
	int b = INT_MAX;
	long v = LONG_MAX;
	long nejbl = LONG_MAX;
	int index = 0;
	for (int i = 0; i < velikost; i++)
	{
		a = *(poleBodu+i)[0] - referencniX;
		b = *(poleBodu+i)[1] - referencniY;
		v = sqrt(a^2 + b^2);
		if (v < nejbl)
		{
			nejbl = v;
			index = i;
		}
	}
	return index;
}
double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	double prumVzd = 0;
	int a = INT_MAX;
	int b = INT_MAX;
	int v = INT_MAX;
	for (int i = 0; i < velikost; i++)
	{
		a = *(poleBodu+i)[0] - referencniX;
		b = *(poleBodu+i)[1] - referencniY;
		v = sqrt(a ^ 2 + b ^ 2);
		prumVzd = (prumVzd + v);
	}
	prumVzd = prumVzd / velikost;
	return prumVzd;
}