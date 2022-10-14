#include <stdio.h>
void insertsort(int arr[],int n)
{
int i,key,j;
for (i = 1; i < n; i++) 
{
key=arr[i];
j=i-1;
while (j>=0 && arr[j]>key) 
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
int main()
{
int arr[]={4,1,3,2,5};
int n=5;
insertsort(arr,n);
for (int i=0; i<n;i++)
printf("%d ",arr[i]);
printf("\n");
return 0;
}