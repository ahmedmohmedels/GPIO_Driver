#include "GP_Driver.h"

//this function to initialize a certain port
void GPIO_INIT(unsigned long port, unsigned long pin, unsigned long dir, unsigned long conf){
	if(port == 0){//port A
		RCC_APB2ENR |= RCC_APB2EN_GPIOA_KEY;//enable clock for port A
		if(pin < 8){
			GPIOA_CRL &= ~(0x0F<<(pin * 4));
			GPIOA_CRL |= ((conf << 2UL) + dir) << (pin * 4);
		}
		else{
			RCC_APB2ENR |= RCC_APB2EN_GPIOA_KEY;
			if(pin > 7){
				GPIOA_CRH &= ~(0x0F<<((pin-8) * 4));
				GPIOA_CRH |= ((conf << 2UL) + dir) << ((pin-8) * 4);
			}
		}
	}
	////////////////////////////////
	else if(port == 1){//port B
		RCC_APB2ENR |= RCC_APB2EN_GPIOB_KEY;//enable clock for port B
		if(pin < 8){
			GPIOB_CRL &= ~(0x0F<<(pin * 4));
			GPIOB_CRL |= ((conf << 2UL) + dir) << (pin * 4);
		}
		else{
			RCC_APB2ENR |= RCC_APB2EN_GPIOB_KEY;
			if(pin > 7){
				GPIOB_CRH &= ~(0x0F<<((pin-8) * 4));
				GPIOB_CRH |= ((conf << 2UL) + dir) << ((pin-8) * 4);
			}
		}
	}
	////////////////////////////////////////
	else if(port == 2){//port C
		RCC_APB2ENR |= RCC_APB2EN_GPIOC_KEY;//enable clock for port C
		if(pin < 8){//for control low
			GPIOC_CRL &= ~(0x0F<<(pin * 4));
			GPIOC_CRL |= ((conf << 2UL) + dir) << (pin * 4);
		}
		else{
			RCC_APB2ENR |= RCC_APB2EN_GPIOC_KEY;
			if(pin > 7){//for control high
				GPIOC_CRH &= ~(0x0F<<((pin-8) * 4));
				GPIOC_CRH |= ((conf << 2UL) + dir) << ((pin-8) * 4);
			}
		}
	}
}

unsigned long R_PIN(unsigned long port, unsigned long pin){
	if(port == 0){
		RCC_APB2ENR |= RCC_APB2EN_GPIOA_KEY;
			return ( GPIOA_IDR & ( 0x01 << pin ) );
	}
	//////////////////////////////
	else if(port == 1){
		RCC_APB2ENR |= RCC_APB2EN_GPIOB_KEY;
			return ( GPIOB_IDR & ( 0x01 << pin ) );
	}
	////////////////////////////
	else if(port == 2){
		RCC_APB2ENR |= RCC_APB2EN_GPIOC_KEY;
			return ( GPIOC_IDR & ( 0x01 << pin ) );
	}
	return 0;
}


void W_PIN(unsigned long port, unsigned long pin, unsigned long value){
	if(port == 0){
		RCC_APB2ENR |= RCC_APB2EN_GPIOA_KEY;
		if(value){
			GPIOA_ODR |= value << pin;
		}
		else{
			GPIOA_ODR &= ~(1 << pin);
		}
	}
	////////////////////////////////////
	else if(port == 1){
		RCC_APB2ENR |= RCC_APB2EN_GPIOB_KEY;
		if(value){
			GPIOB_ODR |= value << pin;
		}
		else{
			GPIOB_ODR &= ~(1 << pin);
		}
	}
	////////////////////////////////////////
	else if(port == 2){
		RCC_APB2ENR |= RCC_APB2EN_GPIOC_KEY;
		if(value){
			GPIOC_ODR |= value << pin;
		}
		else{
			GPIOC_ODR &= ~(1 << pin);
		}
	}
}

void T_PIN(unsigned long port, unsigned long pin){
	if(port == 0){
		RCC_APB2ENR |= RCC_APB2EN_GPIOA_KEY;
		if(R_PIN(port, pin)){
			W_PIN(port,pin,0);
		}
		else{
			W_PIN(port,pin,1);
		}
	}
	////////////////////////////////
	else if(port == 1){
		RCC_APB2ENR |= RCC_APB2EN_GPIOB_KEY;
		if(R_PIN(port, pin)){
			W_PIN(port,pin,0);
		}
		else{
			W_PIN(port,pin,1);
		}
	}
	///////////////////////////////
	else if(port == 2){
		RCC_APB2ENR |= RCC_APB2EN_GPIOC_KEY;
		if(R_PIN(port, pin)){
			W_PIN(port,pin,0);
		}
		else{
			W_PIN(port,pin,1);
		}
	}
}
