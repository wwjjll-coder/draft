//#include<stdio.h>
//#include<string.h>
//void strcate(char [],char[]);
//void strdelc(char [],char);
//int main()
//{
//	char a[100]="Language",b[]="Programming";
//	printf("%s %s\n",b,a);
//	strcate(b,a); printf("%s %s\n",b,a);
//	strdelc(b,'a'); printf("%s\n",b);
//	return 0;
//} 
//void strcate(char t[],char s[])
//{
//	int i=0;
//	int n=strlen(t);
//	for(i=0;s[i]!='\0';i++){
//	t[n+i]=s[i];
//	}
//	t[n+i]='\0';
//}
//void strdelc(char s[],char c)
//{
//	int j,k;
//	for(j=k=0;s[j]!='\0';j++)
//	if(s[j]!=c) s[k++]=s[j];
//	s[k]='\0';
//}


//#include<stdio.h>
//#include<string.h>
//void RemoveDuplicate(char *s);
//int main()
//{
//	char str[200];
//   //printf("Input strings, end of Ctrl+z\n");
//   while(fgets(str, 200, stdin) != NULL)
//   {
//   		RemoveDuplicate(str);
//      printf("%s", str);
//   }
//   return 0;
//}
//
//void RemoveDuplicate(char *s)
//{
//	int r, w, i, len;
//   len = strlen(s);
//   for (r = w = 0; r < len; r++)
//   {
//   		if(s[r]!='\0')
//      {
//      	 s[w++]= s[r];
//         for (i = r + 1; i < len; i++)
//         {
//         	if(s[i]==s[r])
//            	s[i] = '\0';
//         }
//      }
//      s[w]='\0' ;
//   }
//}


# include <stdio.h>
void input(char name[][20],int grade[],int n);
void sort(char name[][20],int grade[],int n);
void output(char name[][20],int grade[],int n);
void swap1(int *a,int*b);
void swap2(char a[],char b[]);
int main()
{
    int d,n;
    char name[n][20];
    int grade[n];
    do{
        scanf("%d",&d);
        if(d==1) {
        scanf("%d",&n);
        input(name,grade,n);
        }
        if(d==2) {
        sort(name,grade,n);
        }
        if(d==3) {
        output(name,grade,n);
        } 
    }while(d!=0);
    return 0;
}
void input(char name[][20],int grade[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%s",name[i]);
        scanf("%d",&grade[i]);
    }
}
void sort(char name[][20],int grade[],int n)
{
//    for(int j=0;j<n-1;j++){
//            for(int i=0;i<n-j-1;i++)
//            if(grade[i]<=grade[i+1]){
//                swap1(&grade[i],&grade[i+1]);
//                swap2(name[i],name[i+1]);
//            }
//    }
}
void output(char name[][20],int grade[],int n)
{
    for(int i=0;i<n;i++){
        printf("%s %d\n",name[i],grade[i]);
    }
}
void swap1(int *a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swap2(char a[],char b[])
{
    char temp;
    for(int i=0;i<20;i++){
         temp=a[i];
         a[i]=b[i];
         b[i]=temp;
    }
}
