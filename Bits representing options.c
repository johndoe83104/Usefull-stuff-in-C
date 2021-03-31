#include <stdio.h>
#include <stdint.h>

#define ERROR_MSG   0x01   // 0b00000001
#define WARNING_MSG 0x02   // 0b00000010
#define INFO_MSG    0x03   // 0b00000100

void showMessage(uint8_t options);

int main(){

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
