#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * fajl = fopen("text.txt", "r");

    int broj = 0;


    while(fscanf(fajl, "%d", &broj) != EOF)
    {
        if(broj>=0 && broj<=10)
        {
                        printf("*****\n");

        }
        else if(broj>=11 && broj<=20)
        {
             printf("**\n");
        }
        else if(broj>=21 && broj<=30)
        {
            printf("************\n");
        }
        else if(broj>30)
        {
             printf("***\n");
        }
    }



    return 0;
}
