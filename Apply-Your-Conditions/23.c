#include<stdio.h>
int main(){
    int num;
char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
printf("Enter number[1-12]: ");
scanf("%d",&num);
printf("%s",month[num-1]);
}

