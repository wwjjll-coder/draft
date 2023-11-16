#include <stdio.h>
int main()
{
	int a;
run:	scanf("%d",&a);
	if (a>10){
		goto run;
		}
	int i,j,k;
	int b=0;
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<=a+3;k++){
				if(i!=j&&i!=k&&j!=k){
				b++;
				printf("%d",i*100+j*10+k);
			}
			if(b%6!=0){
			printf(" ");
		    }
			else{
			printf("\n")	;
		    }
			}
		}
	}
	return 0;
	
 } 
