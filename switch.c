//โปรแกรมกดน้ำ//
//รับน้ำ 4 อย่าง c = coke p = pepsi f= fanta other== greentea//
#include <stdio.h>

void main(){
    //=========================variable==============//
        char choice;
    //=========================variable==============//
    //=========================input ==============//
        printf("input your drink : ");
        scanf("%c",&choice); 
    //=========================input ==============//
    //=========================Process==============//
        switch (choice){
            case 'c' :
                    printf("COKE!!!!!!!!!!!");
                break;
            case 'p' :
                    printf("Pepsi!!!!!!!!!!!");
                break;
            case 'f' :
                    printf("Fanta!!!!!!!!!!!");
                break;
            case 'o' :
                    printf("GreenTea!!!!!!!!!!");
                break;
            default:
                printf("ERROR!!!?!?!?!?");
            
        }

    //=========================Process==============//


}