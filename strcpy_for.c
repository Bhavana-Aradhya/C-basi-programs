#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    char str1[64];
    char str2[64];

    printf("TO COPY STRINGS...\n");
    printf("Enter the string\n");
    scanf("%s", str1);

    for (i = 0; str1[i] != '\0'; i++){
            str2[i] = str1[i];
        }
        str2[i] = '\0';

    printf("THe copied string is %s\n", str2);
    return 0;
    
}

