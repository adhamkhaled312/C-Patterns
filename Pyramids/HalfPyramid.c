/* **************** Include Section Start ***************** */
#include <stdio.h>
#include<stdlib.h>
/* **************** Include Section end ***************** */
int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%i",&row);
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("* ");
    }
    printf("\n");
}
}

