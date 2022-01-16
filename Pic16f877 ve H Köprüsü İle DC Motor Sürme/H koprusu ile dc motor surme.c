#include<16f877.h>

#use delay(clock = 400000)

#use fast_io(a)
#use fast_io(b)

#define ileri pin_a0
#define geri pin_a1
#define dur pin_a2

void main(){
setup_psp(PSP_DISABLED);
setup_timer_1(T1_DISABLED);
setup_timer_2(T2_DISABLED,0,1);
setup_adc_ports(NO_ANALOGS);
setup_adc(ADC_OFF);
setup_ccp1(CCP_OFF);
setup_ccp2(CCP_OFF);

set_tris_a(0x07); //0b00000111
set_tris_b(0x00);

output_b(0x00);

while(true){
if(input(ileri)){

output_b(0x09);

}

if(input(geri)){

output_b(0x06);

}
if(input(dur)){

output_b(0x05);

}

}

}


