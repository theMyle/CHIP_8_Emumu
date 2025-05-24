#include <stdio.h>
#include "chip8.h"

// instantiate the chip8 system
Chip8 system;

int main()
{
  for (int i = 0; i < sizeof(system.registers) / sizeof(system.registers[0]); i++)
  {
    printf("Register[%d] = %d\n", i, system.registers[i]);
  }
  return 0;
}
