#include <stdio.h>

int main(void)
{
    int i, j, start, end, sum;

    // Input the starting and ending number from user 
    printf("Input the starting range or number: ");
    scanf("%d", &start);
    printf("Input the ending range or number: ");
    scanf("%d", &end);

    printf("The Perfect numbers within the given range:\n");
    
    // Iterate from the start to the end 
    for(i=start; i<=end; i++)
    {
        sum = 0;

        // Check whether the current number i is a erfect number or not 
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
 
        // If the current number i is a perfect number
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
