#include<stdio.h>  
/**
 * * main - prints the size of various types
 * * Return: 0 if exited properly,non-zero otherwise
 */
int main (void)
{
printf("Size of a char: %d byte(s)\n", Sizeof(char));
printf("Size of an int: %d byte(s)\n", Sizeof(int));
printf("Size of a long int: %d byte(s)\n", Sizeof(long int));
printf("Size of a lonh long int: %d byte(s)\n", Sizeof(long long int));
printf("Size of an float: %d byte(s)\n", Sizeof(float));
return (0);
}
