#include<stdio.h>
int main(){
int x,y;
printf("X and Y coordinate: ");
scanf("%d%d",&x,&y);
if(x>0 && y>0){
    printf("First quadrant");
}else if(x<0 && y>0){
    printf("Second quadrant");
}else if(x<0 && y<0){
    printf("Third quadrant");
}else if(x>0 && y<0){
    printf("Forth quadrant");
}else{
    printf("Center");
}

}
