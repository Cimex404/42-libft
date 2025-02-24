
/*	This main function demonstrates the capabilites of this ft_printf program.
*	The ft_printf program can make following conversions:
*	%i		->	integer
*	%d		->	digit
*	%c		->	char
*	%s		->	string
*	%p		->	pointer (hex)
*	%u		->	unsigned integer
*	%x		->	hex (lowercase)
*	%X		->	hex (uppercase)
*
*	To use this program in your project:
*	Add the header to your project and compile the ft_printf.a will your source files.
*/

#include "ft_printf.h"

int	main(void)
{
	char	*ptr = "This is a pointer.";

	//	Plain text
	ft_printf("Hello, World!\n");
	//	Integers and Digits
	ft_printf("A day has %i hours and %d minutes.\n", 24, 1440);
	//	Characters and Strings
	ft_printf("%cel%co, %s!\n", 'H', 'l', "World");
	//	Pointers
	ft_printf("Pointer: %p\n", ptr);
	//	Unsigned Integers
	ft_printf("Positive: %u, and Positive!? %u\n", 1073741823, -1073741823);
	//	Hex code
	ft_printf("Hex codes: %x / %X\n", 480, 480);
	//	Combination
	ft_printf("Hello, my name is %s, I am %i years old and my\nfavourite hex value is: %x\n", "Steven", 88, 88);
	return (0);
}