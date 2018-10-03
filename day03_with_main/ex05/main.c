#include <unistd.h>

void ft_putstr(char *str);

int     main(void) 
{
	char str[] ="Hello World bad guy!";

	ft_putstr(str);

    return 0;
}
