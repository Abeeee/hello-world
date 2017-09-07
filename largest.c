#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int size,i;
    printf("Plz tell me the length of the array!!\n");
    scanf("%d",&size);
    int A[size];
    printf("Now please give me the elements of the array!!\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    
    }
    int largest = A[0];
    printf("So the array you have given is: \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\nRight?\n");
    // Now lets find the largest among the array.
    for(i=0;i<size;i++)
    {
        if(largest < A[i])
        {
            largest = A[i];
        }
    }
    
    printf("So the largest element among the array given is: %d\n",largest);
    
    return 0;
}
