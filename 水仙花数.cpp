#include <stdio.h> 
#include <math.h>
int main()
{
 int n;
 scanf("%d", &n);
 int i, j, k;
 int sum = 0;
 for(i =(int) pow(10, n-1); i <(int) pow(10, n); i++){
  do {
   j = i % 10;
   k = i/10;
   sum+= (int)pow(j, n);
  } while (k!= 0);
  if(sum == i){
   printf("%d\n", i);
  }
 }
 
 return 0;
}

