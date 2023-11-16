#include <stdio.h>
int main()
{
	short k,p,a;
	scanf("%hd %hd",&k,&p);
	//k=k>>8;
	//p=p<<8;
	a=(k=k>>8)^(p=p<<8);
	printf("%hd",a);
	return 0;
}
