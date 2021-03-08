#include <stdio.h>

int power(int x, int y);
void multiSwap(int* x, int* y, int* z);

int main()
{
	// presenting the power function with call by value
	int powerFunctionAnswer;
	int x = 1;
	int y = 2;
	int z = 3;
	
	powerFunctionAnswer = power(2, 3);

	printf("%d\n", powerFunctionAnswer);

	// presenting the multi swap function with call by reference
	
	multiSwap(&x, &y, &z);

	printf("x=%d  y=%d z=%d", x, y, z);

	return 0;
}

// takes x^y and returns the result
// call by value
int power(int x, int y)
{
	int result = 1;
	int exponent = y;

	for (exponent; exponent > 0; exponent--)
	{
		result = result * x;
	}
	return result;
}

// x is equal to old y, y is equal to old z, and z is equal to old x
// pointers are used since return type is void and we wanna make a change to the values in main fucntion
// call by reference
void multiSwap(int* x, int* y, int* z)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = *z;
	*z = temp;
}