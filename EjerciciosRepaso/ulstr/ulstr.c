#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];
		while	(*str)
		{
			char c = *str;

			if (c >= 'A' && c <= 'Z')
				c += 32;
			else if (c >= 'a' && c <= 'z')
				c -= 32;
			write (1, &c, 1);
			str++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
