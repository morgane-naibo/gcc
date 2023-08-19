#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{   
    int c=10;
    int d=15;
    printf("%d", (c>d)? c: d);
    
    int a,b;
    char ch;
    printf("Add, Substract, Multiply or Divide \n");
    
    do { /* continue tant que t'as pas de conditions du while */
        printf("Enter first letter:  ");
        ch = getchar();
        printf("\n");
    }   while (ch!='A' && ch!='S' && ch!='M' && ch!='D');
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(ch){
        case 'A' :  printf("%d", a+b);
                    break;
        case 'S' :  printf("%d", a-b);
                    break;
        case 'M' :  printf("%d", a*b);
                    break;
        case 'D' :  if (b!=0) printf("%d", a/b);
                    break;
                      }    
}
