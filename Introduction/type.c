// [!]: type conversion types: 
//          1. implicit conversion: done by program itself according to the hierarchy
//          2. explicit conversion: done manually by the user
#include<stdio.h>
int main()
{
    printf("IMPLICIT TYPE CONVERSION \n");
    // character variable
    char alphabet1 = 'a';
    printf("Character Value: %c\n", alphabet1);

    // assign character value to integer variable
    int number1 = alphabet1;
    printf("Integer Value: %d\n", number1);

    printf("EXPLICIT TYPE CONVERSION \n");
    // create an integer variable
    int number2 = 97;
    printf("Integer Value: %d\n", number2);
 
    // (char) converts number to character
    char alphabet2 = (char) number2; 
    printf("Character Value: %c\n", alphabet2);
    
    return 0;
}
