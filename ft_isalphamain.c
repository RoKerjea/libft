

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	else
		return (1);
}

#include <stdio.h>
#include <ctype.h>
int	main ()
{
	int c;

	c = '+';

	printf("expected is %d\n", isalpha(c));
	printf("result give %d\n", ft_isalpha(c));	
	return (0);
}
