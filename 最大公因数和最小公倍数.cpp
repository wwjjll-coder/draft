#include <stdio.h>
int main()
{
	int a,b,r,x,y;
	scanf("%d %d",&a,&b);
	x=a;
	y=b;
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	printf("%d\n",b);//������� 
	printf("%d\n",x*y/b);//��С������ 
	return 0;
}

