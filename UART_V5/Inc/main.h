/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void split_data( char R_buffer[15],uint8_t  space);
void send_data(char func[5],char val[2]);

void batt_val(int val);
void label_ppeak_obs(int val);
void mlabel_ppeak_obs(int val);
void label_fio2_obs(int val);
void label_peep_obs(int val);
void label_rr_obs(int val);
void label_vte_obs(int val);
void mlabel_cstat_obs(int val);
void mlabel_expflow_obs(int val);
void mlabel_expmin_obs(int val);
void mlabel_fio2_obs(int val);
void mlabel_fspont_obs(int val);
void mlabel_ftotal_obs(int val);
void mlabel_ie_obs(int val);
void mlabel_inspflow_obs(int val);
void mlabel_pcuff_obs(int val);
void mlabel_pdiff_obs(int val);
void mlabel_peep_obs(int val);
void mlabel_pplateau_obs(int val);
void mlabel_rr_obs(int val);
void mlabel_vte_obs(int val);
void mlabel_vti_obs(int val);


/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define out 1
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
