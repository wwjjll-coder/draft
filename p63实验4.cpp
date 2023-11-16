#include <stdio.h>
 #include<string.h> 
int main()
{
    char c;
    //printf("输入回车键开始，输入Ctrl+Z终止程序\n");
    while((c=getchar())!=EOF)
    {
        char s[100];
        int i;
        
        scanf("%s",&s);
        if(strlen(s) == 11)
        {
            printf("号码长度合法!\n");
            if(s[0]=='1')
            {
                if ((s[1]=='3') || (s[1]=='5') || (s[1]=='7') || (s[1]=='8') )
                    printf("号码合法!\n");
                else
                    printf("号码第2位不合法!\n");
            }
            else
                printf("号码第1位不合法!\n");
        }
 
        else
            printf("号码长度不合法!\n");

    return 0;
}
}
 
