// [!]: Documentation section
// C structure program

// [!]: Link section
#include<stdio.h>

// [!]: Global declaration section (global variables & function prototype)
int i=10;
void hello(void);

// [!]: main() function section
int main() {
    printf("%d \n", i);
    hello();
    return 0;
}

// [!]: Sub-program section
void hello(void) {
    printf("Hello World");
}