#include "GP_Driver.h"

int main(void){
	GPIO_INIT(PA ,0 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,1 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,2 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,3 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,4 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,5 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,6 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,7 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,8 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,9 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,10 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,11 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,12 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,13 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,14 ,O50 ,O_GP_PP);
	GPIO_INIT(PA ,15 ,O50 ,O_GP_PP);
	
	GPIO_INIT(PB ,0 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,1 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,2 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,3 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,4 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,5 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,6 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,7 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,8 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,9 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,10 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,11 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,12 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,13 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,14 ,O50 ,O_GP_PP);
	GPIO_INIT(PB ,15 ,O50 ,O_GP_PP);
	
	GPIO_INIT(PC ,0 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,1 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,2 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,3 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,4 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,5 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,6 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,7 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,8 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,9 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,10 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,11 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,12 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,13 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,14 ,O50 ,O_GP_PP);
	GPIO_INIT(PC ,15 ,O50 ,O_GP_PP);
	
	while(1){
		W_PIN(PA,0,1);
		W_PIN(PA,1,1);
		W_PIN(PA,2,1);
		W_PIN(PA,3,1);
		W_PIN(PA,4,1);
		W_PIN(PA,5,1);
		W_PIN(PA,6,1);
		W_PIN(PA,7,1);
		W_PIN(PA,8,1);
		W_PIN(PA,9,1);
		W_PIN(PA,10,1);
		W_PIN(PA,11,1);
		W_PIN(PA,12,1);
		W_PIN(PA,13,1);
		W_PIN(PA,14,1);
		W_PIN(PA,15,1);
		
		W_PIN(PB,0,1);
		W_PIN(PB,1,1);
		W_PIN(PB,2,1);
		W_PIN(PB,3,1);
		W_PIN(PB,4,1);
		W_PIN(PB,5,1);
		W_PIN(PB,6,1);
		W_PIN(PB,7,1);
		W_PIN(PB,8,1);
		W_PIN(PB,9,1);
		W_PIN(PB,10,1);
		W_PIN(PB,11,1);
		W_PIN(PB,12,1);
		W_PIN(PB,13,1);
		W_PIN(PB,14,1);
		W_PIN(PB,15,1);
		
		W_PIN(PC,0,1);
		W_PIN(PC,1,1);
		W_PIN(PC,2,1);
		W_PIN(PC,3,1);
		W_PIN(PC,4,1);
		W_PIN(PC,5,1);
		W_PIN(PC,6,1);
		W_PIN(PC,7,1);
		W_PIN(PC,8,1);
		W_PIN(PC,9,1);
		W_PIN(PC,10,1);
		W_PIN(PC,11,1);
		W_PIN(PC,12,1);
		W_PIN(PC,13,1);
		W_PIN(PC,14,1);
		W_PIN(PC,15,1);
		
	}
}
