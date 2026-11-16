#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	d;
	int	m;

	d = 0;
	m = 0;
	ft_div_mod(42, 10, &d, &m);
	if (d == 4 && m == 2)
		write(1, "ok\n", 3);
	return (0);
}
