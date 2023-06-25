/* **************** Include Section Start ***************** */

#include <stdio.h>
#include <limits.h>
/* **************** Include Section end ***************** */

int main()
{
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=5;j++){
            if(i==2){
                if(j==1||j==5){
                    printf("*");
                }
                else{
                    printf("    ");
                }
            }
            else
            printf("%c  ",'*');
        }
        printf("\n");
    }
}

