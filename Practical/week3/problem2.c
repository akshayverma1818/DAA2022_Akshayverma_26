#include <stdio.h>
#define max 100;
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ctr =0;
    int min;
    for(int i =0;i<n;i++)
    {
        min =i;
        for(int j =i+1;j<n;j++)
        {
            ctr++;
           if(a[j]<a[min])
           {
               min =j;
           }
        }
        swap(&a[min],&a[i]);
    }
    printf("Array after sorting\n");
    for(int i =0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Total number of comparisions are:%d",ctr);

    return 0;
}

