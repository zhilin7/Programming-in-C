#include <stdio.h>

int main(void)
{
	int i, j, Next_multiple;

	i = 365;
	j = 7;
	Next_multiple = i + j - i % j;
	printf("When i = %i, j = %i, next multiple is %i\n", i, j, Next_multiple);

	i = 12258;
	j = 23;
	Next_multiple = i + j - i % j;
	printf("When i = %i, j = %i, next multiple is %i\n", i, j, Next_multiple);
	
	i = 996;
	j = 4;
	Next_multiple = i + j - i % j;
	printf("When i = %i, j = %i, next multiple is %i\n", i, j, Next_multiple);

}
