#include<stdio.h>
int main(){
double fahenheit,celsius;
printf("Temp in celsius: ");
scanf("%lf",&celsius);
fahenheit=(celsius*(9/5))+32;
printf("Temp in fahrenheit: %.2lf",fahenheit);

}
