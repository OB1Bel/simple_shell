#include "shell.h"

/**
 * _myhelp - display help
 * @info: struct for potential arguments
 *
 * Return: 0 (Success)
 */
int _myhelp(info_t *info)
{
	char **arg_arr;

	arg_arr = info->argv;
	_puts("waiting \n");
	if (0)
		_puts(*arg_arr);
	return (0);
}
