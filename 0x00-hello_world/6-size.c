#include <stdio.h>

/**
 * main - beigning of our code
 * Description: size of char,int long int ,long long int on my pc
 * Return: Allways 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));

	return (0);
}
