#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int intType;
float floatType;
long long int longLongType;
long int longIntType
char charType;

/*
*sizeof evaluates the size of a variable
*/
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long long int: %zu bytes\n", sizeof(longLongType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long int: %zu byte\n", sizeof(longIntType));

return (0);
}

