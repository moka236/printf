#include "main.h"
/**
 * printf_char - prints a char.
 * @val : argumnts.
 * return : 1
 */
int printf_char(va_list val)
{
	char str;
	str = va_arg(val, int);
	_putcher(str);
	return (1);
}
