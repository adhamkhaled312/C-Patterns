/* **************** Include Section Start ***************** */
#include <stdio.h>
#include<stdlib.h>
/* **************** Include Section end ***************** */
int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%i",&row);
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<row-i;j++){
            printf(" ");
        }
        if(i>1&&i<row-1){
            for(k=0;k<=i;k++){
                if(k==0||k==i){
                printf("* ");
                continue;
                }
            else{
                printf("  ");
                continue;
            }

        }
        }
        else{
        for(k=0;k<=i;k++){
            printf("* ");
        }

        }
        printf("\n");

}
}

