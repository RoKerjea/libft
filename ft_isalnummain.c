int	ft_isalnum(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	else
		return (1);
}

#include <stdio.h>
#include <ctype.h>

int main ()
{
	char c;

	c = '\n';
	
	printf("expected is %d\n", isalnum(c));
	printf("result is %d\n", ft_isalnum(c));
}
