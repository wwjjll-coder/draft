#include <stdio.h>
int main()
{
	int x;
	int n=0;
	printf("请输入一个正整数x：") ; 
	scanf("%d",&x);
	n++; 
	x/=10;
	while (x!=0){
		n++;
		x/=10;
	}
	printf("x是%d位数",n);
	return 0;
}
