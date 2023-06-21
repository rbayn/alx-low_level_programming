#include <ctype.h>
#include "main.h"
/**
 * _isalpha - check if character is a letter
 * both lower and uppercase
 * @c: take in input
 * Return: 1 is true , else 0
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}
