#include<stdio.h>
int main(){
int a,b,c;
printf("Three Numbers: ");
scanf("%d%d%d",&a,&b,&c);
printf("Highest number: ");
if(a>b && a>c){
    printf("%d",a);
}else if(b>a && b>c){
    printf("%d",b);
}else{
    printf("%d",c);
}
}
