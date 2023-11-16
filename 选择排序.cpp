#include<stdio.h>
void selectSort(int arr[],int n); 
void outArray(int arr[],int n);
/*****请在下面补充函数 inArray、selectSort 和 outArray 的定义 *****/
//void inArray(int arr[],int n)
int main() 
{
    int n;
    int arr[n];
	scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    selectSort(arr,n);
    outArray(arr,n);
    return 0;
    
}
void selectSort(int arr[],int n)
{
    int max,temp;
  for(int i=0;i<n;i++){
      for(int j=0;j<n-i;j++){
        max=0;
        if(arr[j]>arr[max]) max=j;
         }
      temp=arr[n-i-1];
      arr[n-i-1]=arr[max];
      arr[max]=temp;

  }
}
void outArray(int arr[],int n)
{
    for(int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
}
