#include<cs50.h>
#include<stdio.h>
int main(void){
    int minutes,bottles;
    printf("Enter the time in minutes\n");
    scanf("%d",&minutes);
    bottles = minutes*12;
    printf("minutes : %d\n bottles : %d",minutes,bottles);

}