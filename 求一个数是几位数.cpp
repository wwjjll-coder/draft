#include <stdio.h>
int main()
{
	int n;
	int i=0;
    int sum=0;
    int a;
	scanf("%d",&n);
	while(n!=0){
		a=n%10;
		n=n/10;
		i++;
		sum+=a;
	}
	printf("n��%dλ��\n",i);
	printf("��λ����֮����%d\n",sum);
	return 0;
	
 } 
