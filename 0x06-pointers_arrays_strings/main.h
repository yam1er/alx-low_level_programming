#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdbool.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
bool is_separator(char c);
char *leet(char *);
char *rot13(char *);
char transform_2(char x);
void print_number(int n);
int _putchar(char c);

#endif
