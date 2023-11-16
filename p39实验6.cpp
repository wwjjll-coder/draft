#include<stdio.h>
int main()
{
	char c[1000];
	scanf("%s",&c);
	int n=0;
    while(c[n]!='\0'){
    	n++;
	}
	printf("长度为%d个字符",n);
	for(int k=0,n=n-1;k<n;k++,n--){
		char a;
		a=c[k];
		c[k]=c[n];
		c[n]=a;
	}
	printf("%s",c);
	return 0;
 } 
 
