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
*
*/
printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long init: %zu byte\n", sizeof(longIntType));
printf("Size of a long long int: %zu bytes\n", sizeof(longLongType));
printf("Size of a float: %zu bytes\n", sizeof(floatType));
return (0);
}

