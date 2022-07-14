#include "main.h"

/**
 * get_func - returns the function to use based on an inputted char
 * @c: char parameter
 *
 * Return: pointer to function
 */
int (*get_func(char c))(va_list, flag_t *, mod_t *)
{
	id char_ids[] = {
		{'d', _print_dec},
		{'i', _print_dec},
		{'s', _print_str},
		{'c', _print_char}
	};
	int i;
	int flags = 4;


	for (i = 0; i < flags; i++)
		if (char_ids[i].symbol == c)
			return (char_ids[i].func);

	return (NULL);
}
