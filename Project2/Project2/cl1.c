#include <stdio.h>
void main()
{
	int i, j;
	i = 7;
	j = 9;
	printf("%d  %d\n", i++, ++j);
	printf("%d,%d\n", i, j);
	printf("%d,%d\n", -i--, --j);
}