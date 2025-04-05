#include<stdio.h>
int main(){
    int num;
printf("Number: ");
scanf("%d",&num);
if(num%3==0 && num%5==0){
    printf("YES, the number is divisible by 3 and 5");
}else{
    printf("NO, the number is not divisible by 3 and 5");
}


}

