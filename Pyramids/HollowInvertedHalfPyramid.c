/* **************** Include Section Start ***************** */
#include <stdio.h>
#include <stdlib.h>
/* **************** Include Section end ***************** */

int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%i",&row);
    int i,j;
    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            if(i<row){
                if(j==1||j==i){
                    printf("* ");
                    continue;
                }
                else{
                    printf("  ");
                    continue;
                }
            }
            printf("* ");
    }
    printf("\n");
}
}
