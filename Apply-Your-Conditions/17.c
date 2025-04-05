#include<stdio.h>
int main(){
    int mark;
printf("Math Mark: ");
scanf("%d",&mark);
if(mark>=80){
    printf("You got A+");
}else if(mark>=70 && mark<80){
    printf("You got A");
}else if(mark>=60 && mark<70){
    printf("You got A-");
}else if(mark>=50 && mark<60){
    printf("You got B");
}else if(mark>=40 && mark<50){
    printf("You got C");
}else if(mark>=33 && mark<40){
    printf("You got D");
}else if(mark<33){
    printf("You got F");
}


}

