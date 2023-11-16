//实验4 电话号码
//#include <stdio.h> 
//#include <string.h>
//int main ()
//{
//	char s[100];
//	short flag1=1,flag2=1,flag3=1;
//	scanf("%s",&s);
//	if(strlen(s)!=11) {
//		printf("长度不合法");
//		flag1=0;
//	}
//	if(flag1==1){
//        for(int i=0;i<11;i++){
//		if(s[i]<'0'||s[i]>'9'){
//			printf("字符串中存在非数字字符");
//			flag2=0;
//			break;
//		}
//	}
//    }
//	if(flag1==1&&flag2==1){
//		if(s[0]!='1'){
//			printf("第1位不合法");
//			flag3=0;
//		}
//	}
//	if(flag1==1&&flag2==1&&flag3==1){
//		if(s[1]!='3'||s[1]!='4'||s[1]!='5'||s[1]!='7'||s[1]!='8') 
//		printf("第2位不合法"); 
//	}
//	return 0;
//}


//实验5 
//#include <stdio.h>
//int main()
//{
//	unsigned short x,m,n;
//run:	scanf("%hu %hu %hu",&x,&m,&n);
//    if(m<0||m>15||n<1||n>16-m)
//    goto run;
//    x=(x>>m)<<(16-n);
//	printf("%x",x);
//	return 0;
// } 



//实验6
//#include <stdio.h>
//int main()
//{
//	unsigned int x=0;
//	short a,b,c,d; 
//    while(scanf("%u",&x)!=EOF){
//	a=(x&0xff000000)>>24;
//	b=(x&0x00ff0000)>>16;
//	c=(x&0x0000ff00)>>8;
//	d=(x&0x000000ff);
//	printf("%d.%d.%d.%d\n",a,b,c,d);
//} 
//	return 0;
// } 



//实验8
#include <stdio.h>
#include <string.h>
void swap(char *a,char *b);
int main()
{
	char s[80];
	int k,a;
	int i=0;
	gets(s);
    /*while((s[i]=getchar())!='\n'){
    	
    	i++;
	}
	*/
	scanf("%d",&k);
	a=strlen(s);
	for(int i=0;i<a;i++){
		if(s[i]>='A'&&s[i]<='Z'){
			if('Z'-s[i]>=k-1)
			s[i]=s[i]+k-1;
			else
			s[i]=s[i]+k-27;
		}
	}
	if(a%2==0){
    	for(int i=0;i<a-1;i+=2)
    	swap(&s[i],&s[i+1]);
	}else{
		for(int i=0;i<a-2;i+=2)
		swap(&s[i],&s[i+1]);
	}
	printf("%s",s);	
	return 0;
 } 
 
 void swap(char *a,char *b)
 {
 	char mid;
 	mid=*a;
 	*a=*b;
 	*b=mid;
 }




//实验10
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char c;
//	int n1=0,n2=0,n3=0,n4=0;
//	bool flag=false;
//	while((c=getchar())!=EOF){
//	//	bool flag=false;
//		if(c<0){
//			n1++;
//			flag=false;
//		}
//		//n1++;
//		if(c<='z'&&c>='a'||c<='Z'&&c>='A'){
//          n2++;
//          flag=true;
//	}
//         // c=getchar();
//         if(isspace(c)&&flag||c=='\n'&&flag){
//          n3++;
//          flag=false;
//          //if(c=='\n')
//          //n4++;
//         }
//        
//        if(c=='\n'){
//        	n4++;
//        	flag=false;
//		}
//		//n4++;
//	}
//	printf("字数 %d\n字符数 %d\n行数 %d\n",n1/2+n3,n1/2+n2,n4);
//	return 0;
// } 
// 
// 
// #include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char c;
//	int n1=0,n2=0,n3=0,n4=0;
//	while((c=getchar())!=EOF){
//		if(c<0)
//		n1++;
//		if(c<='z'&&c>='a'||c<='Z'&&c>='A'){
//          n2++;
//          c=getchar();
//         if(isspace(c)){
//          n3++;
//          if(c=='\n')
//          n4++;
//         }
//          else 
//          n2++;
//        }
//        if(c=='\n')
//		n4++;
//	}
//	printf("字数 %d\n字符数 %d\n行数 %d\n",n1/3+n3,n1/3+n2,n4);
//	return 0;
// } 



//#include <stdio.h>
//int main()
//{
//	char c[10];
//	scanf("%s",c);
//	
//	printf("%s",c);
//	
//	return 0;
//	
// } 


//实验13
//#include <stdio.h> 
//#include <string.h>
//int main()
//{
//	char s[100];
//	char a,b,c,ch;
//	scanf("%s",s);
//    int l=strlen(s);
//	for(int i=0;i<l;i++){
//	
//	ch=s[i];
//	ch=(s[i]&0x15<<1)|((unsigned char)(s[i]&0x2a)>>1);
//	a=s[i]&0xc0;//取出6,7位的逻辑尺 
//	b=(unsigned char)a>>6;//b为循环移动的位数 
//	c=s[i]&0x3f;//取出0~5位的逻辑尺 
//	ch=a|(ch<<b)&0x3f|((unsigned char)ch>>(6-b));
//    printf("%c",ch);
//	}
//	return 0;
//	}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{ char s[100];
//  scanf("%s",s);
//  int l=strlen(s);
//  for(int i=0;i<l;i++)         
//  {
//   char a,b,c;
//   a=(unsigned char)(s[i]&0x2a)>>1|((s[i]&0x15)<<1);
//   c=s[i]&0xc0;
//   b=(unsigned char)c>>6;
//   a=((a<<b)&0x3f)|((unsigned char)a>>(6-b));
//   s[i]=c|a;
//   printf("%c",s[i]);
//  }
//return 0;
//}


