#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int brojanjeSlova(char slova[255])
{
    int counter = 0;

    for(int i=0; i<strlen(slova); i++)
    {
        if((slova[i]>='a' && slova[i]<='z') || (slova[i]>='A' && slova[i]<='Z'))
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    FILE * fajl = fopen("text.txt", "r");

    char slova[255];
    char rezultat[255];
    int redovi = 1;
    int max_redovi = 1;
    int brSlova = 0;

    while(fgets(slova, sizeof(slova), fajl) != 0)
    {
        if(brojanjeSlova(slova)>brSlova)
        {
            brSlova = brojanjeSlova(slova);
            max_redovi = redovi;
            strcpy(rezultat, slova);
        }
        redovi++;
    }

    printf("red br. %d ima najveci broj slova. \n", max_redovi);
    printf("broj slova u redu je %d. \n", brSlova);
    printf("sadrzaj reda: %s", rezultat);

    return 0;
}
