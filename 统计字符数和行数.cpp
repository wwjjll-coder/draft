#include<stdio.h>
int main(void)
{
    char c, numchar, numline;
    numchar = 0;
    numline = 0;
    printf("�����������ı�����������Ctrl+z������\n");
	c =getchar();
    while(c!=EOF ){
    	c =getchar();//��8-10�и�Ϊwhile((c=getchar())!=EOF) 
        numchar++;
        if(c == '\n')
            numline++;
    }
    printf("�ַ���:%d,", numchar);
    printf("����:%d", numline);
    return 0;
}
