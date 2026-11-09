#include <unistd.h>

void	ft_print_numbers(void);

int main(void)
{
	char c;
	
	c = '\n';
	ft_print_numbers();
	write(1, &c, 1);
	return (0);
}
