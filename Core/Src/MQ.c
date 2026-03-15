/*
 * MQ.c
 *
 *  Created on: Mar 15, 2026
 *      Author: Admin
 */


#include "MQ.h"

extern ADC_HandleTypeDef hadc1;

uint32_t MQ_Read(void)
{
    uint32_t value = 0;

    HAL_ADC_Start(&hadc1);

    HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);

    value = HAL_ADC_GetValue(&hadc1);

    HAL_ADC_Stop(&hadc1);

    return value;
}
