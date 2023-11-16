#include <stdio.h>
int main()
{
	//printf("%d",sizeof(int));
	int x,p,n;
	int a,b,c;
	scanf("%d %d %d",&x,&p,&n);
    a=x>>p+1<<p+1;
	b=(unsigned)x<<(31-p+n)>>(31-p+n);
	c=(unsigned)(~x)>>(p-n+1)<<(32-n)>>(31-p);
	x=a|b|c;
	printf("%d",x);
	return 0;

	
//x=(x>>p+1<<p+1)|((unsigned)x<<sizeof(int)*8-1-p+n>>sizeof(int)*8-1-p+n)|((unsigned)(~x)>>p-n+1<<sizeof(int)*8-n>>sizeof(int)*8-1-p)
 } 
