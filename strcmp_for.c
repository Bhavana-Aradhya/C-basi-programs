#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    char str1[64];
    char str2[64];
    
    printf("TO COMPARE TWO STRINGS..\n");
    printf("Enter the String1\n");
    scanf("%s", str1);

    printf("Enter the String2\n");
    scanf("%s", str2);


    for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++ );

        if (str1[i] < str2[i])
        {
            printf("Str1 is Less than str2\n");
        }
        else if (str1[i] > str2[i])
        {
            printf("str1 is greater than str2\n");
        }
        else
        {
            printf("str1 is euqal to str2\n");
        }
        return 0;
}
