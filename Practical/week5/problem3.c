#include <stdio.h>
int printCommon(int arr1[], int len1, int arr2[], int len2) 
{
 
   int i=0,j=0;
 
   while(len1 > i && len2 > j)
   {
 
       if (arr1[i] < arr2[j]) 
       { 
            i++;
       }
       else if(arr2[j] < arr1[i])
       {
            j++;
       } 
       else 
       {
            printf("\nCommon element is %d",arr1[i]);
            i++;
            j++;
      }
   }
 
}
 
int main() 
{
   int n;
   int m;
   printf("Enter the size of the first array:");
   scanf("%d",&n);
   printf("Enter the size of the second array:");
   scanf("%d",&m);
   int arr1[n];
   int arr2[m];
   printf("Enter the elements of first array:");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr1[i]);
   }
   printf("Enter the elements of second array:");
   for(int i=0;i<m;i++)
   {
       scanf("%d",&arr2[i]);
   }
 
   int len1 = n;
   int len2 = m;
 
   
   printCommon(arr1, len1, arr2, len2);
 
   return 0;
}
