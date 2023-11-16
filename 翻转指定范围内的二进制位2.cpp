//将int整数x从第p位开始的向右n位
//（p从右至左编号为0~31）翻转
//（即1变为0，0变为1），其余各位保持不变。
#include <stdio.h>
int main()
{
	int x,p,n;
	scanf("%d %d %d",&x,&p,&n);
	int i=1;
	do{
		x=x^(1<<p);
		p--;
		i++;
	  }while(i<=n);*/

	  //x=(0xffffffff<<p-n+1)&(0xffffffff>>31-p)^x;
		printf("%d",x);
		return 0;
	
}
