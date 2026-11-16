#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 20;
	y = 6;
	ft_ultimate_div_mod(&x, &y);
	if (x == 3 && y == 2)
		write(1, "ok\n", 3);
	return (0);
}
