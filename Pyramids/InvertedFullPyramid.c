/* **************** Include Section Start ***************** */
#include <stdio.h>
#include <stdlib.h>
/* **************** Include Section end ***************** */

int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%i",&row);
    int i,j,k;
    for(i=row-1;i>=0;i--){
        for(j=0;j<row-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
}

}
