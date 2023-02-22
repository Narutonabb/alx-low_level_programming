#include "main.h"

/**
 * _islower - entry point
 *
 * @c: checks input of the function
 *
 * return: returns 1 if 'c' is lower
 *         otherwise return 0 (success)
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
