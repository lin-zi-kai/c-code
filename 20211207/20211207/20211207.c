#include <stdio.h>
int check_sys()
{
	int a = 1;
	return(*(char*)&a);
}

int main()
{
	//int a = 20;
	//int b = -10;
	//int a = 0x11223344;
	int ret = check_sys();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}