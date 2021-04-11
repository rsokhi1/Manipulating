#include <stdio.h>
#include <string.h>

#include "manipulating.h"

void manipulating(){
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[80];
    char string2[80];
    while(TRUE){ // This make this an infinite loop until a break statement is issued
        printf("Type the 1st string (q - to quit):\n");
        gets(string1); // Take input for string1
        if (strcmp(string1, "q") == 0) break; //It will break the loop if 'q' is entered in string1.
        printf("Type the 2nd string:\n");
        gets(string2); // Take input for string2
        strcat(string1,string2); // This will join the string1 and string2.
        printf("Concatenated string is \'%s\'\n", string1);
    }
    printf("*** End of Concatenating Strings Demo ***\n\n");
    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[80];
    char compare2[80];
    int result;
    while(TRUE){ // This make this an infinite loop until a break statement is issued
        printf("Type the 1st string to compare (q - to quit):\n");
        gets(compare1); // Take input for compare1
        if (strcmp(compare1,"q") == 0) break; //It will break the loop if 'q' is entered in compare1.
        printf("Type the 2nd string to compare:\n");
        gets(compare2); // Take input for compare2
        result = strcmp(compare1,compare2); // It compares the string length of compare1 and compare2 and returns the value according to that
        if (result < 0) // It checks it the return value is negative or not. 
            printf("1st string is less than 2nd\n");
        else if (result == 0) // It checks if the string were of same length.
            printf("1st string is equal to 2nd\n");
        else
            printf("1st string is greater than 2nd\n");
    }
    printf("*** End of Comparing Strings Demo ***\n\n");
}