#include <16f877.h>

#use delay(crystal=4000000)

void main() {

   while (true) {
      output_high(pin_b7);
      delay_ms(500);
      output_low(pin_b7);
      delay_ms(500);
   }
}

