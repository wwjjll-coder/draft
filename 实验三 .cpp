//����һֱ��Ʊ����n������̼۸�
//����ù�Ʊ��n���е���󲨶�ֵ��
//����ֵ��ָĳ�����̼۸���ǰһ�����̼۸�ֻ��ľ���ֵ��
#include<stdio.h>
#include<math.h>
int main()
{
   int n,max=0;
   int price[n],a;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   scanf("%d",&price[i]);
   for(int i=1;i<n;i++){
   a=abs(price[i]-price[i-1]);
   if(a>=max)
   max=a;
   }
   printf("%d",max);
     return 0;
}

//����һ��nλ��(1��n��4)����nλ��ƽ����ĩβnλ��ԭ����ͬ��
//������������ҳ����������Ҫ���nλ����
#include<stdio.h>
#include<math.h>
int main()
{
  int n,a;
  scanf("%d",&n);
  for(int i=pow(10,n-1);i<pow(10,n);i++)
  {
      if(i*i%(int)pow(10,n)==i)
      printf("%d ",i);
  }
  return 0;
}



//������� 
//��дһ�����������n(2=<n=<4)λ�����������С����
//һ������ȥ�����λ��ʣ�µ������Ǻ�����
//��ȥ��ʣ�µ��������λ�����������������Ǻ���������������
//һֱ�����ʣ�µ�һλ�����Ǻ���������������Ϊ���������
#include <stdio.h>
#include <math.h>
int iscomp(int x); 
int main()
{
	int n,x,x1;
	scanf("%d",&n);
	for(int i=pow(10,n-1);i<pow(10,n);i++){
	  int flag=1; 
	  x=i;
	  do{
	  	if(iscomp(x)==0){
	  	flag=0;
	  	break;
	  }
	  	x/=10;
	  	if(x==1||x==2){//1��Ϊ���� 2����ͨ���Ӻ����ж� 
	  	flag=0;
	  	break;
	  }
	  }while(x!=0);
	  
	  if(flag==1)
	  printf("%d ",i);
	}

	return 0;
	}	
int iscomp(int x){
    int flag;
	for(int i=2;i<x;i++){
	if(x%i==0){
		flag=1;
        break;
	}
	else flag=0;
	}
    return flag;
}	



//÷ɭ��������2n-1��������������ָ��n����������ΪM(n)��
//���һ��÷ɭ�������������Ϊ÷ɭ������
//���磬M(2)=22-1=3��÷ɭ��������M(11)=211-1=2047=23��89����÷ɭ������
//����һ������3�ĳ�����m�����������m������÷ɭ������
#include<stdio.h>
#include<math.h>
int isprime(int x);
int main()
{
     long m;
     do{
         scanf("%ld",&m);
     }while(m<=3);
    for(int i=2;pow(2,i)<=m+1;i++){
    	long a=pow(2,i)-1;
         if(isprime(i)&&isprime(a))
         printf("M(%d)=%d\n",i,a);
     }

     return 0;

}

int isprime(int x){
    for(int i=2;i<sqrt(x);i++){
        if(x%i==0)
        return 0;
    }
    return 1;
}


//����ɸ�� ��������
#include<stdio.h>
#include<math.h>
#define N 1000000
int main()
{
int a[N+1]={0};
int m;
scanf("%d",&m);
for(int i=2;i<N+1;i++)
a[i]=1;
for(int i=2;i<=sqrt(N);i++){
    if(a[i]){
        for(int j=i*2;j<=N;j+=i)
        a[j]=0;
    }
}
for(int i=2;i<m-2;i++){
if(a[i]&&a[i+2])
printf("(%d,%d) ",i,i+2);}
return 0;
}



//����������x(2��x��79)�������������abcde/fghij=x�ı��ʽ��
//����a-j�ɲ�ͬ������0~9��ɡ�
#include<stdio.h>
int main()
{
int x,a,b,c;
scanf("%d",&x);
for(int i=1234;i<=98765;i++){
	int di[10]={0};
    a=x*i;
    c=a;
    b=i;
for(int j=1;j<=5;j++){
di[b%10]=1;
b/=10;
di[c%10]=1;
c/=10;
}
int flag=1;
for(int k=0;k<10;k++){
if(di[k]==0){
    flag=0;
    break;
}
}
if(flag==1&&a<=98765){
printf("%05d/%05d=%d\n",a,i,x);
}
//for(int k=0;k<10;k++)
//di[k]=0;//ÿ��ѭ����ɺ�����ֵӦ�ָ�Ϊ0,����ѭ���ڶ�������di����ʼ��������Ҫ�˲��� 
}
return 0;
}



//������� 
#include<stdio.h>
int main()
{
int n,a[20][20];
scanf("%d",&n);
for(int i=0;i<=n;i++){
a[i][1]=1;
a[i][i+1]=1;
}
for(int i=2;i<=n;i++){
	for(int j=2;j<=i;j++)
	//a[i][j]=a[i][j-1]*(i-j+1)/j;
	a[i][j]=a[i-1][j-1]+a[i-1][j];
}
for(int i=0;i<=n;i++){
     for(int k=1;k<=2*(n-i);k++) printf(" ");
     for(int j=1;j<=i+1;j++){
     	printf("%-4d",a[i][j]);
	 }
	 printf("\n");
}
return 0;
}


//ȥ���ظ��ո� 
#include <stdio.h>
int main(){
    char c;
	int last=0;//ǰ�治�ǿո�
	while((c=getchar())!=EOF){
 
		if(c==' '){
                if(last==0){//���ǰ�治�ǿո�
				putchar(c);
				last=1;
			}
			
		}
		else {
			putchar(c);
			last=0;
		}
	}
    return 0;
}
