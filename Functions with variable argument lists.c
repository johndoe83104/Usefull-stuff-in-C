#include <stdio.h>
#include <stdarg.h>

// Declaration of the function that can take variable number of parameters 
void print_ints(int num, ...);

int main () {

    int value_1 = 10;
    int value_2 = 20;
    int value_3 = 30;
    int value_4 = 40;      
    
    // There are three examples of the same function taking two, three and four parameters
    print_ints(2, value_1, value_2);
    print_ints(3, value_1, value_2, value_3);
    print_ints(4, value_1, value_2, value_3, value_4);   

  return 0;
}

void print_ints(int num, ...) {
    
    va_list args;
    va_start(args, num);  
    for (int i = 0; i < num; i++) {
        int value = va_arg(args, int);
        printf("%d: %d\n", i, value);        
    }
    va_end(args);
}
