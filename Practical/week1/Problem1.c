#include <stdio.h>
#define max 100
int main()
{
    int arr[max];
    int n;
    int key;
    int i ,found;
    printf("Enter the number of elements in a array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for( i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of the key:");
    scanf("%d",&key);
    found = 0;
    for( i =0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", key, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", key);
    }

    return 0;
}
