#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list bodex;
	unsigned int a;

	va_start(bodex, n);/* Initialize the argument list*/

	for (a = 0; a < n; a++)/*loop a*/
	{
	printf("%d", va_arg(bodex, int));/* Get the next argument value. */

	if (separator && a < n - 1)
		printf("%s", separator);/*string to print out*/
	}
	printf("\n");
	va_end(bodex);/*end*/
}
