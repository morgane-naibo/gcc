#include <stdio.h>
#define TAXRATE 0.10
int atoi(char s[])
{
    int i=0; 
    int n=0;
    for(i=0; s[i]>= '0' && s[i] <='9'; ++i)
    {
        n=10* n + (s[i]-'0');
        
    }
    return n;
}
int main(int argc, char const *argv[])
{
    int sum=33; 
    float money=44.12*TAXRATE;
    char letter; 
    double pressure;
    letter='K'; 
    pressure=2.11e-10;
    printf("values  %d %f %c %e \n", sum, money,letter, pressure); 
    char s[4]="55";
    int return_value=atoi(s);
    printf("%d \n", return_value);
    printf("Taper un nombre: \n");   
    int getvalue;
    scanf("%d", &getvalue);
    printf("%d \n", getvalue);   
    return getvalue+1;
}
