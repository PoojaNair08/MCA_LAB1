#include<stdio.h>
int glvar=10;
int main()
{
	int lvar=20;
	static int svar=30;
	register int rvar=40;
	printf("Global variable:%d\n",glvar);
	printf("Local variable:%d\n",lvar);
	printf("Static variable:%d\n",svar);
	printf("Register variable:%d\n",rvar);
	return 0;
}
