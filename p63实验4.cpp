#include <stdio.h>
 #include<string.h> 
int main()
{
    char c;
    //printf("����س�����ʼ������Ctrl+Z��ֹ����\n");
    while((c=getchar())!=EOF)
    {
        char s[100];
        int i;
        
        scanf("%s",&s);
        if(strlen(s) == 11)
        {
            printf("���볤�ȺϷ�!\n");
            if(s[0]=='1')
            {
                if ((s[1]=='3') || (s[1]=='5') || (s[1]=='7') || (s[1]=='8') )
                    printf("����Ϸ�!\n");
                else
                    printf("�����2λ���Ϸ�!\n");
            }
            else
                printf("�����1λ���Ϸ�!\n");
        }
 
        else
            printf("���볤�Ȳ��Ϸ�!\n");

    return 0;
}
}
 
