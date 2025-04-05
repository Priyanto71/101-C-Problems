#include<stdio.h>
int main(){
int rank;
printf("Your Rank: ");
scanf("%d",&rank);
printf("Your Salary: ");
if(rank==1){
    printf("2,50,000 BDT");
}else if(rank==2){
    printf("2,10,000 BDT");
}else if(rank==3){
    printf("1,50,000 BDT");
}else if(rank==4){
    printf("80,000 BDT");
}else if(rank>=5){
    printf("50,000 BDT");
}


}
