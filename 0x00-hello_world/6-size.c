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
long int longIntType;
char charType;

/*
*sizeof evaluates the size of a variable
*
*/
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}

