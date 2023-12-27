//  char str1[100] = "Hello";
//  char str2[100] = "Bonjour";
//  int i, k;
//  strncat(str1, "Maria", 2);
//  strncpy(str2, "Federick", 3);
//  i=strlen(str1);
//  for(k=0; str2[k] !='\0'; k++)
//  str1[i+k] = str2[k];
//  str1[i + k] = '\0';
//  puts(str2);
//  printf("\n");
//  puts(str1);
//  printf("\n");
//  strrev(str1);
//  puts(str1);

//------edited----//
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "Bonjour";
    int i, k;
    
    strncat(str1, "Maria", 2); // Concatenates 2 characters from "Maria" to str1
    strncpy(str2, "Federick", 3); // Copies 3 characters from "Federick" to str2

    i = strlen(str1); // Store length of str1 in i
    
    for (k = 0; str2[k] != '\0'; k++) // Appends str2 to str1
        str1[i + k] = str2[k];
    
    str1[i + k] = '\0'; // Null-terminates str1

    puts(str2); // Prints str2
    printf("\n");
    puts(str1); // Prints str1
    printf("\n");
    
    strrev(str1); // Reverses str1
    puts(str1); // Prints reversed str1

    return 0;
}


/*
Fedjour

HelloMaFedjour

ruojdeFaMolleH
*/