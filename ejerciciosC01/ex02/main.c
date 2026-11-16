#include <unistd.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int x;
	int y;

	x = 1;
	y = 2;
	ft_swap(&x, &y);
	if (x == 2 && y == 1)
		write(1,"ok\n", 3);
	return (0);
}
