#include <unistd.h>

int	main (int ac, char **av)
{
	int count;

	if (ac == 2)
	{
		char *str = av[1];
		while (*str)
		{
			count = 1;

			if ( *str >= 'A' && *str <= 'Z')
				count = *str -'A' + 1;
			else if ( *str >= 'a' && *str <= 'z')
				count = *str -'a' + 1;
			while (count > 0)
			{
				write (1, str, 1);
				count--;
			}
			str++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
