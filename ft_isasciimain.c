int ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}

#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;

	c = -10;

	printf("expected is %d\n", isascii(c));
	printf("result is %d\n", ft_isascii(c));
}
