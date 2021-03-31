#include <stdio.h>
#include <stdint.h>

typedef struct __attribute__((packed))
{
  uint8_t data_1 : 2;   // data_1 variable will be of 2 bit length
  uint8_t data_2 : 2;   // the same for data_2
  uint8_t data_3 : 4;   // data_3 will have 4 bits
} dataTypedef;

int main () {
  
  dataTypedef data;
  printf("The size of data is %d bytes", sizeof(data));   // This should print out 1 byte
  
  return 0;
}
