//#include<stdio.h>
//long fab(int n);
//int main()
//{
//	int i,k;
//	long sum=0;
//	//printf("Input n:");
//	scanf("%d",&k);
//	for(i=1;i<=k;i++) {
//		sum+=fab(i);
//	//	printf("i=%d\tthe sum is %ld\n",i,sum);
//	}
//	printf("%ld",sum);
//	return 0;
//}
//long fab(int n)
//{
//	long a[n+1];
//	if(n==1||n==2)
//	a[n]=1;
//	else 
//	a[n]=fab(n-1)+fab(n-2);
//	return a[n];
//}



#include<stdio.h>
#define R
int integer_frac(float x); 
int main()
{
	float r,s;
	int s_integer=0;
	printf("Input a number:");
	scanf("%f",&r);
	#ifdef R
    	s=3.14159*r*r;
    	printf("Area of round is:%f\n",s);
    	s_integer=integer_frac(s);
    	
    	printf("The integer fraction of area is %d\n",s_integer);
    #endif
    return 0;
}

int integer_frac(float x)
{
	int i=(int)(x+0.5);
	return i;
}
