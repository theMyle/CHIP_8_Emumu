#include <stdio.h>
#include <stdint.h>

// register names
enum Registers {
  V0 = 0,
  V1 = 1,
  V2 = 2,
  V3 = 3,
  V4 = 4,
  V5 = 5,
  V6 = 6,
  V7 = 7,
  V8 = 8,
  V9 = 9,
  VA = 10,
  VB = 11,
  VC = 12,
  VD = 13,
  VE = 14,
  VF = 15,
};

// register
uint8_t registers[16];

int main() {
  printf("Hello World\n");
  registers[V0] = 255;
  printf("%d %d\n", registers[V0], registers[V1]);
  return 0;
}
