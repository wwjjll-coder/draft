#include <stdio.h>
int main()
{
	int x;
	int n=0;
	printf("������һ��������x��") ; 
	scanf("%d",&x);
	n++; 
	x/=10;
	while (x!=0){
		n++;
		x/=10;
	}
	printf("x��%dλ��",n);
	return 0;
}
