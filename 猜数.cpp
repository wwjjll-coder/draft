#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main ()
{
	srand(time(0));
	int x=rand()%1000+1;
	int a;
	int n=0;
	printf("我已经想好了一个1到1000之间的数a\n若您在十次之内猜中这个数则视为成功\n"); 
	do
	{ 
	printf("请输入a："); 
	scanf("%d",&a); 
	if (a>x){
		printf("a比目标数大\n");
	}else if(a<x){
		printf("a比目标数小\n");
	} else{
		printf("您猜对了\n"); 
	}
	n++;
	} while(a!=x);
	printf("a=%d\n",a);
	printf("您用了%d次猜到了答案\n",n);
	if (n<=10){
		printf("win\n"); 
	} else{
		printf("lose\n"); 
	}
	return 0;
 } 
