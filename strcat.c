#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int j;
    int i;
    char str1[64];
    char str2[64];
    
    printf("PROGRAM FOR CONCATINATING TWO STRINGS....\n");
    printf("Enter the string1\n");
    scanf("%s", str1);

    printf("Enter the string2\n");
    scanf("%s", str2);
    
    //while loop to get the end of the first string
    while (str1[i] != '\0'){
          i++;
    }
    
    //while loop to concatinate second string to the end of first string
    while (str2[j] != '\0'){
          str1[i] = str2[j];
          i++;
          j++;
    }
    str1[i] = '\0'; 

    printf("The Conatinated string is: %s\n", str1 );
    return 0;

}
