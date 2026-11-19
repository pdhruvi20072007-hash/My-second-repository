#include <stdio.h>

int main() {
    int month;
    printf("enter value for month(1-12):\n");
    scanf("%d",&month);

    switch(month){
    case 1 : printf("JAN\n");
             break;
    case 2 : printf("FEB\n");
             break;         
    case 3 : printf("MAR\n");
             break;
    case 4 : printf("APRIL\n");
             break;         
    case 5 : printf("MAY\n");
             break; 
    case 6 : printf("JUNE\n");
             break;  
    case 7 : printf("JULY\n");
             break;
     case 8 : printf("AUG\n");
             break;
     case 9 : printf("SEP\n");
             break;
     case 10 : printf("OCT\n");
             break;
     case 11 : printf("NOV\n");
             break;
     case 12 : printf("DEC\n");
             break;
     default : printf(" not a valid month!");        
           
    }
    return 0;
}
