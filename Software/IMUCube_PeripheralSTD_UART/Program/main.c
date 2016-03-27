/*=====================================================================================================*/
/*=====================================================================================================*/
#include "drivers\stm32f1_system.h"
#include "modules\module_serial.h"

#include "imuCube.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
int main( void )
{
 	IMUCube_Init();

  printf("\r\nHello World!!\r\n\r\n");

	while(1) {
    printf("...\r\n");
    delay_ms(500);
	}
}
/*=====================================================================================================*/
/*=====================================================================================================*/
