#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void ff(unsigned int a, char *b)
{
	printf("%u, %s\n", a, b);
}

int main()
{

	void (*f)(unsigned int, char *);

	f = &ff;
	ft_striteri("12345", f);
}