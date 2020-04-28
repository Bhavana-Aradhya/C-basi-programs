#include <stdio.h>

int main(int argc, char *argv[])
{ 
    char str[64];
    char rev[64];
    int i;
    int j;
    int length = 0;
    
    printf("TO REVERSE THE STRING...\n");
    printf("Enter the string: ");
    scanf("%s", str);

    while (str[length] != '\0')
          length++;

        j = length - 1;

    for (i = 0; i < length; i++){
        rev[i] = str[j];
        j--;
        }

        rev[i] = '\0';

        printf("REVERSED : %s\n", rev);

        return 0;
}

    
