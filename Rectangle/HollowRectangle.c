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
    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            if(i!=1&&i!=row){
                if(j==1||j==column){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else
            printf("* ");
        }
        printf("\n");
    }
}
