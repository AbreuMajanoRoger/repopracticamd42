void	ft_ft(int *nbr);

int main(void)
{
	int	nbr;

	nbr = 1;
	ft_ft(&nbr);
	if (nbr == 42)
		write(1, "ok\n" 3);
	return (0);
}
