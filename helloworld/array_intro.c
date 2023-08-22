#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   
    int i, min_value, max_value;
    int list[10];

    for (i=0; i<10; i++)
    {    
        list[i]=rand();
        printf("La list est %d \n", list[i]);
    }


    min_value= 32676;
    max_value= 0;

    for(i=0; i<10; i++)
    {
        if (list[i]<min_value)
            min_value=list[i];
        
        if (list[i]>max_value)
            max_value=list[i];
    }
    printf("Max value is %d\n Min value is %d\n", max_value, min_value);


}