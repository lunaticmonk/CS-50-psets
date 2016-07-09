#include<cs50.h>
#include<stdio.h>
int main(void){
    int height,i,j,k;
    start:
    printf("Enter height\n");
    scanf("%d",&height);
    if(height>23 || height<0){
        printf("Enter a number between 0 and 23");
        goto start;
    }
    else{
        for(i=0;i<height;i++){
            for(j=0;j<height-i-1;j++)
            printf(" ");
            for(k=0;k<i+2;k++)
            printf("#");
            printf("\n");
        }
    }
}