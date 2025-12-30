
#include<stdint.h>

#define ADC_Base_Address 0x40012000UL
#define ADC_Offset 0x04
#define ADC1_CR1_REG_ADDR (ADC_Base_Address + ADC_Offset)

#define RCC_Base_Address 0x40021000UL
#define RCC_APB2ENR_Offset 0x18
#define RCC_APB2ENR_REG_ADDR (RCC_Base_Address + RCC_APB2ENR_Offset)

int main(void) {{

uint32_t *pAdc1Cr1Reg = (uint32_t *)ADC1_CR1_REG_ADDR;
uint32_t *pRccApb2EnrReg = (uint32_t *)RCC_APB2ENR_REG_ADDR;

    // Enable ADC1 clock by setting the appropriate bit in RCC_APB2ENR
    *pRccApb2EnrReg |= (1 << 8); // Assuming bit 9 enables ADC1 clock

    // Configure ADC1_CR1 register
*pAdc1Cr1Reg |= (1 << 8); // Set the 8th bit to enable some feature

for(;;);

}}