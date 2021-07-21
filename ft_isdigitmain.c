int ft_isdigit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;

	c = 'A';
	printf("expected is %d\n", isdigit(c));
	printf("result is %d\n", ft_isdigit(c));
}
