//输入一直股票连续n天的收盘价格，
//输出该股票这n天中的最大波动值，
//波动值是指某天收盘价格与前一天收盘价格只差的绝对值。
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

//输入一个n位数(1≤n≤4)，若n位数平方的末尾n位和原数相同，
//则输出该数。找出所有满足该要求的n位数。
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



//纯粹合数 
//编写一个能求出所有n(2=<n=<4)位数纯粹合数的小程序。
//一个合数去掉最低位，剩下的数还是合数；
//再去掉剩下的数的最低位，余留下来的数还是合数，这样反复，
//一直到最后剩下的一位数仍是合数，这样的数称为纯粹合数。
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
	  	if(x==1||x==2){//1较为特殊 2不能通过子函数判断 
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



//梅森数是形如2n-1的正整数，其中指数n是素数，记为M(n)。
//如果一个梅森数是素数，则称为梅森素数。
//例如，M(2)=22-1=3是梅森素数，而M(11)=211-1=2047=23×89不是梅森素数。
//输入一个大于3的长整数m，输出不大于m的所有梅森素数。
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


//埃氏筛法 孪生素数
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



//输入正整数x(2≤x≤79)，输出所有形如abcde/fghij=x的表达式，
//其中a-j由不同的数字0~9组成。
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
//di[k]=0;//每轮循环完成后数组值应恢复为0,若在循环内定义数组di并初始化，则不需要此步骤 
}
return 0;
}



//杨辉三角 
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


//去除重复空格 
#include <stdio.h>
int main(){
    char c;
	int last=0;//前面不是空格
	while((c=getchar())!=EOF){
 
		if(c==' '){
                if(last==0){//如果前面不是空格
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
