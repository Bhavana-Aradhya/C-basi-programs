#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int j;
    int i;
    char str1[64];
    char str2[64];
    
    printf("PROGRAM TO CONCATINATE TWO STRINGS...\n");
    printf("Enter the string1\n");
    scanf("%s", str1);

    printf("Enter the string2\n");
    scanf("%s", str2);
    
    //for loop to get the end of the string1
    for (i = 0; str1[i] != '\0'; i++){
        ;}
  
  //for loop to concatinate string two to string1
    for (j = 0; str2[j] != '\0'; j++){
        str1[i] = str2[j];
        i++;  
        }
        str1[i] = '\0';

    printf("The Conatinated string is: %s\n", str1 );
    return 0;

}
