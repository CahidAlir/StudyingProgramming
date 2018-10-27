#include<stdio.h>
int main() {

    int star, space, nLine;
    int i,      j,      k;

    //star = 7;
    //nLine = 4;

    printf("Enter how many line you want:\n");
    scanf("%d",&nLine);

    for(k = 0; k < nLine; k++) {
        for(j=0;j<k;j++){
            printf(" ");
        }
        for(i=0;i<(2*nLine-1)-2*k;i++){
            printf("*");
        }
        printf("\n");
    }
}
