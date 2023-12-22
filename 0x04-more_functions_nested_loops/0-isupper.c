#include "main.h"
/**
 * _isupper :-function that checks for uppercase character
 *
 * @c :- intiger parameter
 *
 * Return:(1)if (c) is uppercase, Return:(0) otherwise
 */
int _isupper(int c)
{
	/*des*/
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
