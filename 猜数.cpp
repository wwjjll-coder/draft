#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main ()
{
	srand(time(0));
	int x=rand()%1000+1;
	int a;
	int n=0;
	printf("���Ѿ������һ��1��1000֮�����a\n������ʮ��֮�ڲ������������Ϊ�ɹ�\n"); 
	do
	{ 
	printf("������a��"); 
	scanf("%d",&a); 
	if (a>x){
		printf("a��Ŀ������\n");
	}else if(a<x){
		printf("a��Ŀ����С\n");
	} else{
		printf("���¶���\n"); 
	}
	n++;
	} while(a!=x);
	printf("a=%d\n",a);
	printf("������%d�βµ��˴�\n",n);
	if (n<=10){
		printf("win\n"); 
	} else{
		printf("lose\n"); 
	}
	return 0;
 } 
