#include <stdio.h>

int main(void)
{
	float f, c;

	f = 27;
	c = (f - 32) / 1.8;
	printf("%g from degrees Fahrenheit(F) to degree Celsius(C) is %g\n", f, c);

	return 0;
}
