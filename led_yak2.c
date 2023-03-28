#include <led_yak2.h>

void main()
{
set_tris_b(0x00);
output_b(0x00);
   while(TRUE)
   {
   output_high(pin_B1);
   delay_ms(1000);
        output_low(pin_B1);
   delay_ms(1000);
   }

}
