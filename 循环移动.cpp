#include <stdio.h>
int main()
{
    //printf("%d\n",sizeof(int));
	
	
	
	int x,n;
	int a,b,c;
	scanf("%d",&x);
	scanf("%d",&n);
//	n=n%(sizeof(int)*8);
	a=(unsigned)x>>n;
	b=x<<(sizeof(int)*8-n);
    c=a|b;
	printf("%d\n",c);
	return 0;	
	
	
	/*short x;
	scanf("%d",&x);
	x=(unsigned)x;
	printf("%hu\n",x);
	printf("%hd\n",x);
	return 0;*/
	
	/*
	char i;
	for(i=1;i<=127;i++)
	printf("%c",i);
	return 0;
	*/
}
