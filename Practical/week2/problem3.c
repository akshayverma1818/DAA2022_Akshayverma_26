#include <stdio.h>

int main()
{
    int n,i,j;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    //enter sorted array
    printf("enter the sorted array:");
    for(int i =0 ; i<n ; ++i)
    {
        scanf("%d",&a[i]);
    }
    int key,pair = 0;
    printf("enter key value:");
    scanf("%d",&key);
    for(i =0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {

          if(a[i] - a[j] == key || a[i] - a[j] == -key)
          {
            pair++;
          }
        }
    }
    if(pair == 0)
    {
        printf("pair is not found\n");
    }
    else
    {
        printf("pair is found\n");
    }
    /*if(i == n && j == n)
    {
        printf("pair is not found\n");
    }*/
    printf("%d pair present",pair);


    return 0;
}
