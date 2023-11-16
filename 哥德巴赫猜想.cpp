#include<stdio.h>
#include<math.h>
int isprime(int x)
{
    if(x<2)
    return 0;
    if(x==2||x==3)
    return 1;
    for(int i=2;i<=sqrt(x);i++){
      if(x%i==0) return 0;
      }
      return 1;
  
}
void goldbach(int n)
{
//for(int i=n-1;i>=n/2;i-=2)
for(int i=2;i<=n/2;i++){
    if(isprime(i)&&isprime(n-i)) { 
        printf("%d=%d+%d",n,i,n-i);
        break;
    }
}
}

int main()
{
	int n;
	scanf("%d",&n);
	goldbach(n);
	return 0;
} 
