#include<stdio.h>
int main()
{
	int i=1;
	int sum=0;
	int n=0;
	int x;
for (i=1;i<=10;i++){
    scanf("%d",&x);
    if (x>0){
        sum+=x;
        n++;
    }
}
if (n>0){
    printf("�ۼӺ�:%d\n",sum);
    printf("ƽ��ֵ:%.1lf\n",1.0*sum/n);
} else {
	printf("�ۼӺ�:0\n");
    printf("ƽ��ֵ:0.0\n");
}
    return 0;
}
