#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks - sting there are digit
 * @str: array str
 *
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
	/*declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count*/
	{
		if (!isdigit(str[count])) /*check if str there aredigit*/
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: argument
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}
		/*condition if one of the number contains symbols tha are digits*/
		else
		{
			printf("error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/

	return (0);
}
