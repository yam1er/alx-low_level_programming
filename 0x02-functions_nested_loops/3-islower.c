#include "main.h"
/**
 * _islower - fonction that check if alphabet is lowercase
 * @c: l'entier a tester
 * Return: 1 if lowercase 0 ifnot
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}
