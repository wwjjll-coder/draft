#include <stdio.h>
int main()
{
	char c;
	int x;
	for(x=0,c=getchar();c>='0'&&c<='9';c=getchar())
		x=x*10+c-'0';
		printf("%d\n",x);
		printf("%c\n",x);
	return 0;
}
