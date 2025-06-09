/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file         stm32mp2xx_hal_msp.c
  * @brief        This file provides code for the MSP Initialization
  *               and de-Initialization codes.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN Define */

/* USER CODE END Define */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN Macro */

/* USER CODE END Macro */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* External functions --------------------------------------------------------*/
/* USER CODE BEGIN ExternalFunctions */

/* USER CODE END ExternalFunctions */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */
/**
  * Initializes the Global MSP.
  */
void HAL_MspInit(void)
{

  /* USER CODE BEGIN MspInit 0 */

  /* USER CODE END MspInit 0 */

  /* System interrupt init*/

  /* Peripheral interrupt init */
  /* RCC_WAKEUP_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(RCC_WAKEUP_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(RCC_WAKEUP_IRQn);

  /* USER CODE BEGIN MspInit 1 */

  /* USER CODE END MspInit 1 */
}

/**
  * @brief ETH MSP Initialization
  * This function configures the hardware resources used in this example
  * @param heth: ETH handle pointer
  * @retval None
  */
void HAL_ETH_MspInit(ETH_HandleTypeDef* heth)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(heth->Instance==ETH1)
  {
    /* USER CODE BEGIN ETH1_MspInit 0 */

    /* USER CODE END ETH1_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_ETH1_CLK_ENABLE();

    __HAL_RCC_GPIOH_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    __HAL_RCC_GPIOF_CLK_ENABLE();
    /**ETH1 GPIO Configuration
    PH9     ------> ETH1_RGMII_CLK125
    PA14     ------> ETH1_RGMII_RX_CLK
    PC0     ------> ETH1_RGMII_GTX_CLK
    PA12     ------> ETH1_PHY_INTN
    PA11     ------> ETH1_RGMII_RX_CTL
    PF1     ------> ETH1_RGMII_RXD0
    PC2     ------> ETH1_RGMII_RXD1
    PA10     ------> ETH1_MDIO
    PF3     ------> ETH1_CLK
    PH12     ------> ETH1_RGMII_RXD2
    PH13     ------> ETH1_RGMII_RXD3
    */
    GPIO_InitStruct.Pin = GPIO_PIN_9;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Alternate = GPIO_AF10_ETH1;
    HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_14|GPIO_PIN_10;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF10_ETH1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_0;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Alternate = GPIO_AF12_ETH1;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_12;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
    GPIO_InitStruct.Alternate = GPIO_AF10_ETH1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_11;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Alternate = GPIO_AF10_ETH1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_1;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Alternate = GPIO_AF10_ETH1;
    HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_2;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Alternate = GPIO_AF10_ETH1;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
    GPIO_InitStruct.Alternate = GPIO_AF9_ETH1;
    HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_13;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Alternate = GPIO_AF10_ETH1;
    HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);

    /* USER CODE BEGIN ETH1_MspInit 1 */

    /* USER CODE END ETH1_MspInit 1 */

  }

}

/**
  * @brief ETH MSP De-Initialization
  * This function freeze the hardware resources used in this example
  * @param heth: ETH handle pointer
  * @retval None
  */
void HAL_ETH_MspDeInit(ETH_HandleTypeDef* heth)
{
  if(heth->Instance==ETH1)
  {
    /* USER CODE BEGIN ETH1_MspDeInit 0 */

    /* USER CODE END ETH1_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_ETH1_CLK_DISABLE();

    /**ETH1 GPIO Configuration
    PH9     ------> ETH1_RGMII_CLK125
    PA14     ------> ETH1_RGMII_RX_CLK
    PC0     ------> ETH1_RGMII_GTX_CLK
    PA12     ------> ETH1_PHY_INTN
    PA11     ------> ETH1_RGMII_RX_CTL
    PA13     ------> ETH1_RGMII_TX_CTL
    PF1     ------> ETH1_RGMII_RXD0
    PC2     ------> ETH1_RGMII_RXD1
    PA15     ------> ETH1_RGMII_TXD0
    PH11     ------> ETH1_RGMII_TXD3
    PA10     ------> ETH1_MDIO
    PF3     ------> ETH1_CLK
    PH12     ------> ETH1_RGMII_RXD2
    PH10     ------> ETH1_RGMII_TXD2
    PA9     ------> ETH1_MDC
    PH13     ------> ETH1_RGMII_RXD3
    PC1     ------> ETH1_RGMII_TXD1
    */
    HAL_GPIO_DeInit(GPIOH, GPIO_PIN_9|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_10
                          |GPIO_PIN_13);

    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_14|GPIO_PIN_12|GPIO_PIN_11|GPIO_PIN_13
                          |GPIO_PIN_15|GPIO_PIN_10|GPIO_PIN_9);

    HAL_GPIO_DeInit(GPIOC, GPIO_PIN_0|GPIO_PIN_2|GPIO_PIN_1);

    HAL_GPIO_DeInit(GPIOF, GPIO_PIN_1|GPIO_PIN_3);

    /* USER CODE BEGIN ETH1_MspDeInit 1 */

    /* USER CODE END ETH1_MspDeInit 1 */
  }

}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
