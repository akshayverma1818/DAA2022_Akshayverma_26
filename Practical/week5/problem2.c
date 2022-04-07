#include <stdio.h>


int chkPair(int A[], int size, int x) 
{
	for (int i = 0; i < (size - 1); i++) 
	{
		for (int j = (i + 1); j < size; j++) 
		{
			if (A[i] + A[j] == x) 
			{
				printf("Pair with a given sum %d is (%d, %d)",x,A[i],A[j]);

				return 1;
			}
		}
	}
	return 0;
}

int main() 
{   
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
	int A[n];
	printf("Enter the data of the array:");
	for(int i =0;i<n;i++)
	{
	    scanf("%d",&A[i]);
	}
	int x=0;
	printf("Enter the value of the key:\n");
	scanf("%d",&x);
	int size = sizeof(A) / sizeof(A[0]);

	if (chkPair(A, size, x)) 
	{
		printf("Valid pair exists");
	}
	else 
	{
		printf("No valid pair exists for %d",x);
	}

	return 0;
}

// This code is contributed by Manish Kumar (mkumar2789)
