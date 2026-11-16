#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	if (ft_strlen("hola") == 4)
		write(1, "ok\n", 3);
	return (0);
}
