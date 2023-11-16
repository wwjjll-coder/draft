#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("请输入一个正整数n(n<10000):\n");
	scanf("%d",&n);
	int y,a,b,c;
	int i=0;
	for(y=1;y<n;y++){
		for(a=1;a<sqrt(n);a++){
			for(b=1;b<sqrt(n/10);b++){
				for(c=1;c<sqrt(n);c++){
					if(y==a*a&&y==b*b*10+c*c){
						printf("%d=%d*%d=%d*%d*10+%d*%d\t",y,a,a,b,b,c,c);
						i=1;
					}
				} if(i==1) {
					i=0;
					break;
				}
			} 
		}
	}
	return 0;
}
