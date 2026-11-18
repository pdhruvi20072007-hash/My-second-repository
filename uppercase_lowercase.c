#include <stdio.h>

int main() {
    char ch;
    printf("enetr a value for ch:\n");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z'){
             printf("Uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z'){
            printf("lowercase\n");
    } 
    else{
      printf("not valid character!\n");
    }
    return 0;
}
