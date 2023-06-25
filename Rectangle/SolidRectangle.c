/* **************** Include Section Start ***************** */

#include <stdio.h>
#include <limits.h>
/* **************** Include Section end ***************** */

int main()
{
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%c  ",'*');
        }
        printf("\n");
    }
}
