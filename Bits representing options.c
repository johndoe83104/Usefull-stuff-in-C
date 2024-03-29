#include <stdio.h>
#include <stdint.h>

// Option definitions
#define ERROR_MSG   0x01   // 0b00000001
#define WARNING_MSG 0x02   // 0b00000010
#define INFO_MSG    0x04   // 0b00000100
#define ALL_MSG     0xFF   // 0b11111111

void showMessage(uint8_t options);

int main(){

  // The functions will display one or more of the options that are passed as parameters
  showMessage( ERROR_MSG | WARNING_MSG | INFO_MSG );
  
  return 0;
}

void showMessage(uint8_t options)
{
  if (options & ERROR_MSG) {
    printf("Error message!\n");
  }
  if (options & WARNING_MSG) {
    printf("Warning message!\n");
  }
  if (options & INFO_MSG) {
    printf("Info message!\n");
  }
  
}
