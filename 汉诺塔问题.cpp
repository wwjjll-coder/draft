#include<stdio.h>
void hnt(int n,char a,char b,char c);
int main()
{
	int n; 
	scanf("%d",&n);
	hnt(n,'A','B','C');
	return 0;
}
void hnt(int n,char a,char b,char c)
{
	if(n==1)
	printf("%c-->%c ",a,c);
	else{
		hnt(n-1,a,c,b);
		printf("%c-->%c ",a,c);
		hnt(n-1,b,a,c);
	}
}
