#include <stdio.h>
int main()
{
	/*
	char grade1=97;
	char grade2='a';
	char grade3='\141';
	char grade4='\x61';
	printf("%c %c %c %c\n",grade1,grade2,grade3,grade4);
	printf("%d\n",'2'-'0'>5);
	printf("%d\n",'a'!='b');//字符间的运算通过ASCII码进行，1表示真，0表示假  
	*/
	
	
	/*
	char c='1';
	scanf("%c",&c);
	c=getchar();
	printf("%d",(c>='a'&&c<='z')||(c>='A'&&c<='Z'));
    printf("%d",(c>=97&&c<=122)||(c>=65&&c<=90));
    printf("%c",c);
    */
 
	
	
	/*
	int a;
	scanf("%d",&a);
	printf("%d\n",a%2);
	printf("%d\n",!(a%2));
	*/
	
	
   /*
    int a=10;
	int x,y;
	x=a++;
	y=++a;
	printf("%d %d %d",x,y,a) ;
	*/
	
	
/*	int a=0xff;
	printf("%d\n",a);//输出十进制类型 
	printf("%o\n",a);//输出八进制类型 
	printf("%x\n",a);//输出十六进制类型 
	char c=48;
	printf("%d\n",c);
	printf("%s\n",c);
	*/ 
	
	
	
/*  char ch[]="wangjiale";
	int i;
	for(i=0;i<=9;i++)
	putchar(ch[i]);
	*/
	
	
	
	
	
	
	char c[10];
	scanf("%s",&c[10]);
	/*for(int x=0;x<8;x++){
		c[x]=getchar();
	}*/
	for(int i=0;1<4;i++){
		putchar(c[i]); 
	} 
	printf("\n");
	for(int j=4;1<6;j++){
		putchar(c[j]); 
	} 
	printf("\n");
	for(int k=6;1<9;k++){
		putchar(c[k]); 
	} 
	printf("\n");
	return 0; 

}
