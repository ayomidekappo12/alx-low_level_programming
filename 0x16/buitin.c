#include "shell.h"

/**
 * _myexit - exits the shell
 * @info: Structure containing potential arguments. Used to maintain
 * constant function prototypes.
 * Return: exits with a given exit status
 * (0) if info.argv[0] != "exit"
 */
int _myexit(info_t *info)
{
	int exit_code;

	if (info->argv[1])
{
 /* convert the exit code argument to an integer */
		exit_code = _erratoi(info->argv[1]);
		if (exit_code == -1)
		{
			/* if the argument is not valid number, print an error message */
			info->status = 2;
			print_error(info, "Illegal number:  ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		/* set the exit code to the argument’s value */
		info->err_num = exit_code;
		return (-2);
	}
/* if there is no argument, set the exit code to -1 */
	info->err_num = -1;
	return (-2);
}

/**
 * _mycd - changes the current directory of the process
 * @info: Structure containing potential and important arguments.
 * Used to maintain constant function prototype.
 *
 * Return: Always 0
 */
int _mycd(info_t *info)
{
	char *current_dir, *new_dir, buffer[1024];
	int chdir_ret;

/* get the current working directory */
	current_dir = getcwd(buffer, 1024);
	if (!current_dir)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (!info->argv[1])
	{
		/* if no argument is given, change to the home directory */
		new_dir = _getenv(info, "HOME=");
		if (!new_dir)
		{
			/* if the home directory is not set, change to the root directory */
			chdir_ret = chdir((new_dir = _getenv(info, "PWD=")) ? new_dir : "/");
		}
		else
		{
			chdir_ret = chdir(new_dir);
		}
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		/* if the argument is “-”, change to the previous directory */
		if (!_getenv(info, "OLDPWD="))
		{
			/* if there is no previous directory, print the current directory */
			_puts(current_dir);
			_putchar('\n');
			return (1);
		}
		/* otherwise, change to the previous directory */
		_puts(_getenv(info, "OLDPWD="));
		_putchar('\n');
		chdir_ret = chdir((new_dir = _getenv(info, "OLDPWD=")) ? new_dir : "/");
	}
	else
	{
		/* change to the specified directory */
		chdir_ret = chdir(info->argv[1]);
	}
	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _eputchar('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}

/**
 * print_help_message - changes the current directory of the process
 * @info: Structure containing potential arguments. Used to maintain
 * constant function prototype.
 * Return: Always 0
 */
int print_help_message(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;
	_puts("help call works. Function not yet implemented \n");

	if (0)
		_puts(*arg_array);
	return (0);
}
