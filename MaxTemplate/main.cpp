#include "max.h"
#include <stdio.h>

int& getSmaller(int& a, int& b)
{
	return (a < b) ? a : b;
};

double& getLarger(double& a, double& b)
{
	return (a > b) ? a : b;
}

int main(int argc, char* argv)
{
	int ia = 4, ib = 15;
	double da = 4.654, db = 23454;

	printf("GetSmaller(%d, %d): %d\n", ia, ib, compare(ia, ib, getSmaller));
	printf("GetLarger(%f, %f): %f\n", da, db, compare(da, db, getLarger));

}