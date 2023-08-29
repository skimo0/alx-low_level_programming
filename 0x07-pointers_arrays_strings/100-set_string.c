#include "main.h"

/**
 * set_string - Set the value of a pointer to a char.
 * @s: Pointer to pointer to char.
 * @to: Pointer to char to set the value to.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
