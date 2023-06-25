/* **************** Include Section Start ***************** */
#include <stdio.h>
#include <limits.h>
/* **************** Include Section end ***************** */

int main()
{
    int i,j,k;
    for(i=5;i>=0;i--){
        for(j=0;j<6-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
}

}
