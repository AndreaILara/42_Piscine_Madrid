#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	int i;
	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			ft_putstr("FizzBuzz\n");
		}
		else if (1 % 3 == 0)
		{
			ft_putstr("Fizz\n");
		}
		else if (1 % 5 == 0)
		{
			ft_putstr("Buzz\n");
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}


//ESTA MAL