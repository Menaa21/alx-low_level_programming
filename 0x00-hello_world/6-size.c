#include <stdio.h>
/**
 * main - Entry point
 * Return 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %ld byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
