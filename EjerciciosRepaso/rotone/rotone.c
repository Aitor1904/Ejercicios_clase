#include <unistd.h>

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];

		while (*str)
		{
			char c = *str;
			if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
				c += 1;
			else if (c == 'z')
				c = 'a';
			else if (c == 'Z')
				c = 'A';

			write (1, &c, 1);
			str++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
