#include "main.h"

/**
* _isalpha - Checks if the argument is an alphaebet
* @c: the alphabet to check
*
* Return: If the arg is an alphabet return 1 otherwise return 0
*/
int _isalpha(int c)
{
	if ((65 <= c && 90 >= c) || (97 <= c && 122 >= c))
		return (1);
	else
		return (0);
}
