/* **************** Include Section Start ***************** */
#include <stdio.h>
#include <stdlib.h>
/* **************** Include Section end ***************** */

int main()
{
    int row,column;
    printf("Enter number of rows: \n");
    scanf("%i",&row);
    printf("Enter number of column: \n");
    scanf("%i",&column);
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("* ");
        }
        printf("\n");
    }
}
