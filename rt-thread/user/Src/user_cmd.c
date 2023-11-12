/* USER CODE BEGIN Header */
/**
******************************************************************************
* @author         : HeJinyue
* @date           : Fri Sep 29 17:05:21 2023
* @file           :  
* @brief          :  
******************************************************************************
*/
/* USER CODE END Header */

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "user_cmd.h"
/* USER CODE END Includes */

/* Private typedef ----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private defines ----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/* Exported macro ----------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Private variables ----------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes ----------------------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ----------------------------------------------------------*/
/* USER CODE BEGIN 0 */

#ifdef RT_USING_FINSH
#include <finsh.h>
static void reboot(uint8_t argc, char **argv)
{
    extern void rt_hw_cpu_reset(void);
    rt_hw_cpu_reset();
}
MSH_CMD_EXPORT(reboot, Reboot System);

static long clear(void)
{
    rt_kprintf("\x1b[2J\x1b[H");

    return 0;
}
MSH_CMD_EXPORT(clear, clear the terminal screen);

#endif /* RT_USING_FINSH */
/* USER CODE END 0 */




