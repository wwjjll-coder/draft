/*输出斐波那契数列的前n项，n由终端输入（n>=20），
每行输出8个数，每个数显示的宽度为10列。*/
#include <stdio.h>
int main()
{
	int n(n>=20);
	scanf("%d",&n);
	int x=1,y=1,z;
	int i;
	printf("%10d%10d",x,y);
	for(i=3;i<=n;i++){
		z=x+y;
		printf("%10d",z);
		x=y;
		y=z;
		if(i%8==0){
			printf("\n");
		}	
	}
	return 0;
 } 

