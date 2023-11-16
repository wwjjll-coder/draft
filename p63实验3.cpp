#include <stdio.h>
int main()
{
	int n;
	int sum;
	scanf("%d",&n);
	int sale[n];
	int i,j;
	for(i=0;i<=(n-1);i++){
		scanf("%d",sale[i]); //scanf以空格或回车结束 
	}
	 for(j=1;j<=(n-2);j++){
	 	if((sale[j]>sale[j-1]&&sale[j]>sale[j+1])||(sale[j]<sale[j-1]&&sale[j]<sale[j+1]))
	 	sum++;
	 }
	 printf("%d",sum);
	 return 0;
 } 
