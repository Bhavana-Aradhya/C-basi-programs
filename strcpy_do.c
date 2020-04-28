#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    char str1[64];
    char str2[64];

    printf("TO COPY STRINGS...\n");
    printf("Enter the string\n");
    scanf("%s", str1);

    do {
        str2[i] = str1[i];
        i++;

    }while (str1[i] != '\0');
           str2[i] = '\0';

        printf("THe copied string is %s\n", str2);
        return 0;
    
}

