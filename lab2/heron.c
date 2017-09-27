#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int side1, side2, side3, s, area;
	printf("Enter sidelengths of a triangle:\n");
	scanf ("%d%d%d", &side1, &side2, &side3);
	//printf("You entered %d, %d, %d", side1, side2, side3);
	if ( (side1 + side2 < side3) || (side1 + side3 < side2) || (side2 + side3 < side1))
	{
		printf("The sum of two sides of a triangle cannot be less than the third side of the triangle (Triangle Inequality)\n Please enter valid values next time.\n");
		return 1;
	}
	s = (side1+side2+side3) /2 ; 
	area = sqrt(s * (s-side1) * (s-side2) * (s-side3));
	printf("Area = %d\n", area);
	return 0;
}
