#include <stdio.h>
int digit(long n, int k);
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d",digit(n,k));
	return 0;
}
//�����step3_main.cpp�е����������̣���ȫ�˺���
int digit(long n, int k)
{
	/**********  Begin  **********/
    int i=0,a;
    a=n;
    do{
        a/=10;
        i++;
    }while(a!=0);
    if(k>i)
    return -1;
    else{
        for(int j=1;j<k;j++){
            n/=10;
        }
     
     return n%10;
    }
    
    
    /**********  End  **********/
}
