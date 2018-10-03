#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int     main(void) 
{
	int		a;
	int		b;

	a = 500;
	b = 100;

	printf("%d %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);

    return 0;
}
