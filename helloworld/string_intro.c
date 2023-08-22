#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    char str1[20]="Mother";
    char str2[20]="Theressa";
    char str3[20]; 
    char str4[40];
    int len1, len2, x;
    len1= strlen(str1);
    len2= strlen(str2);
    strcpy(str3, str1);
    printf("La long de str1 %d \n", len1);
    printf("La long de str2 %d \n", len2);

    strcpy(str4, str1);
    strcat(str4, " ");
    strcat(str4, str2);
    x=strcmp(str1, str2);
    if(x==0)
    {
        printf("EQUAL\n");
    }
    else if(x<0)
    {
        printf("str2 is big\n");
    }
    else
    {
        printf("str1 is big\n");
    }
    printf("strings: \n, %s,\n, %s, \n, %s,\n, %s", str1, str2,str3,str4);
}