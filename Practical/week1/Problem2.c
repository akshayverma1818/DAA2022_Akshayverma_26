#include <stdio.h>
#define max 100
int main()
{
    int n;
    int first,last,middle;
    int key;
    int i ,temp =0;
    printf("Enter the number of elements in a array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for( i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int length = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < length; i++) 
    {     
        for (int j = i+1; j < length; j++) 
        {     
           if(arr[i] > arr[j]) 
           {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
    printf("Elements of array sorted in ascending order: \n");    
    for (i = 0; i < length; i++)
    {     
        printf("%d ", arr[i]);    
    }    
    printf("\nEnter the value of the key:");
    scanf("%d",&key);
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while (first <= last) 
    {
        if (arr[middle] < key)
            first = middle + 1;
        else if (arr[middle] == key) 
        {
            printf("%d found at location %d.\n", key, middle+1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", key);
    return 0;
}
