#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
     for(int i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
     }
     int c=0;
     for(int i=0;i<n;i++)
     {
       if(arr[i]!=0)
       {
         arr[c]=arr[i];
         c++;
       }
     }
     for(int i=0;c<n;i++)
     {
        arr[c]=0;
        c++;
     }
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
   return 0;
