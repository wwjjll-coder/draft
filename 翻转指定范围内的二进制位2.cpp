//��int����x�ӵ�pλ��ʼ������nλ
//��p����������Ϊ0~31����ת
//����1��Ϊ0��0��Ϊ1���������λ���ֲ��䡣
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
