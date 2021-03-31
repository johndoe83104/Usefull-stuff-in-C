#include <stdio.h>
#include <stdint.h>

uint64_t array_of_bits = 0;

#define SET_BIT(BF, N) BF |= ((uint64_t)0x0000000000000001 << N)
#define CLR_BIT(BF, N) BF &= ~((uint64_t)0x0000000000000001 << N)
#define IS_BIT_SET(BF, N) ((BF >> N) & 0x1)

int main() {

  // Set three bits: 0, 8 and 32
  SET_BIT(array_of_bits, 0);
  SET_BIT(array_of_bits, 8);
  SET_BIT(array_of_bits, 32);
  
  // this for loop will print a '+' for bit that is 1 and '.' for a bit that is 0
  for (uint8_t i = 0; i < 64; i++) {
    if (IS_BIT_SET(array_of_bits, i)) {
      printf("+");
    } else {
      printf(".");
    }
  }
  printf("\n");
  
  return 0;
}
