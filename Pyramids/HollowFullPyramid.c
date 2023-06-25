/* **************** Include Section Start ***************** */
#include <stdio.h>
#include <limits.h>
/* **************** Include Section end ***************** */

int main()
{
    int i,j,k;
    for(i=0;i<6;i++){
        for(j=0;j<6-i;j++){
            printf(" ");
        }
        if(i>1&&i<5){
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
