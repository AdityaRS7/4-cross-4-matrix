#include<stdio.h>
int main(){
    int i,j;
    printf("enter four cross four matrix");
    printf("\n");
    int a[4][4];
    printf("enter matrix elements");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            scanf("%i",&a[i][j]);
    }
    printf("\n");
    printf("entered matrix elements are");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%i",a[i][j]);
        printf("\n");
    }
    return 0;
}
