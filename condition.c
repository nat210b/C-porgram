#include <stdio.h>
int main(){
//=========================variable=========================//

float score;
//=========================variable=========================//

//=========================input=========================//
printf("input Your score : ");
scanf("%f", &score);
//=========================input=========================//
//=========================process=========================//
if(score >= 80){
    printf("Grade A");
}else if(score >= 70){
    printf("Grade B");
}else if(score >= 60){
    printf("Grade C");
}else if(score >= 50){
    printf("Grade D");
}else{
    printf("Grade F");
}
//=========================output=========================//
return 0;
}