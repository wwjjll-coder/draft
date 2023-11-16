#include <stdio.h>
int main()
{
	short a=30000,b=30000,c;
	c=a+b;
	printf("%d\n",a+b);
	printf("%hd\n",a+b);
	printf("%d\n",c);
	printf("%hd\n",c);
	
	return 0;
}
