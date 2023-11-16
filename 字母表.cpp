#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{ char c,c1,c2,top;
int i;
c=getchar();
if(isupper(c))
top='A';
else
top='a';
 for(c1=top ;c1<=c;c1++) {
 for(int j=1;j<=c-c1;j++) 
 printf("  ");
 for(c2=top;c2<=c1;c2++) 
 printf("%2c",c2);
 for(c2=c1-1;c2>=top;c2--) 
 printf("%2c",c2);
 printf("\n"); 
 }
return 0;
}



