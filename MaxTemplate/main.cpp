#include "max.h"
#include <stdio.h>

int main(int argc, char* argv)
{
	int a = 5, b = 10, c=14;
	printf("The bigger between %d, %d and %d is: %d\n", a, b, c, max(a, b,c));
}