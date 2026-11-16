#include <stdio.h>

int main() {
   char ch;
   printf("enter value for ch:\n");
   scanf("%c",&ch);
   ch>=48 && ch<=57 ? printf("digit\n"): printf("not digit:\n");
    return 0;
}
