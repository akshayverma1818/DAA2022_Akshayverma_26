#include <stdio.h>
#include<stdbool.h> 
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    bool is_present = false;
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    int ctr = 0;
    printf("Enter the value of the key:");
    scanf("%d",&key);
    for(int i =0;i<n;i++)
    {
        if(key==a[i])
        {
            is_present = true;
            break;
        }
        else
            is_present = false;
    }
    if(is_present==true)
        printf("Element found");
        
    else
    {
        printf("Element not found\n");
    }
    for(int i =0;i<n;i++)
    {
        if(key == a[i])
            ctr++;
    }
    printf("\nElement %d found %d number of times in the array",key,ctr);
    return 0;
}
