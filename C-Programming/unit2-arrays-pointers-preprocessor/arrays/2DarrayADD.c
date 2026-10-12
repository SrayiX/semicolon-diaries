/* addition of two 2D arrays */ 

#include <stdio.h>
#include <conio.h>
 int main()
{
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("Enter elements of 1st matrix:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Adding Two matrices
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix
    printf("Sum of the two matrices:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        {
            printf("%d\t", sum[i][j]);
            if(j == 1)
                printf("\n");
        }

    return 0;
}