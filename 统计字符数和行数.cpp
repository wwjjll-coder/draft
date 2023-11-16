#include<stdio.h>
int main(void)
{
    char c, numchar, numline;
    numchar = 0;
    numline = 0;
    printf("输入若干行文本，行首输入Ctrl+z结束。\n");
	c =getchar();
    while(c!=EOF ){
    	c =getchar();//或将8-10行改为while((c=getchar())!=EOF) 
        numchar++;
        if(c == '\n')
            numline++;
    }
    printf("字符数:%d,", numchar);
    printf("行数:%d", numline);
    return 0;
}
