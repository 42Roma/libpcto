#include "libpcto.h"

int read_int(void)
{
	int n;
	scanf("%i", &n);
	return n;
}

float read_float(void)
{
	float n;
	scanf("%f", &n);
	return n;
}

char read_char(void)
{
	char c;
	scanf("%c", &c);
	return c;
}

char *read_str(void)
{
	char *s = NULL;
	scanf("%s", s);
	return s;
}
