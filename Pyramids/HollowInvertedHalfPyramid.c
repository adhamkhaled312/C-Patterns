/* **************** Include Section Start ***************** */
#include <stdio.h>
#include <limits.h>
/* **************** Include Section end ***************** */

int main()
{
    int i,j;
    for(i=6;i>=1;i--){
        for(j=1;j<=i;j++){
            if(i==5||i==4||i==3){
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
