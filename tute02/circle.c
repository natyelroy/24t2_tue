// part2_circles
//
// This program was written by T09B
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
	double radius;
	scanf("%lf", &radius);

	double area = (radius * radius) * PI;

	printf("Area of circle with radius %.2lf is %.2lf\n", radius, area);

	return 0;
}