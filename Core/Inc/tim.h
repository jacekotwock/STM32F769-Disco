/*
 * tim.h
 *
 *  Created on: 25 gru 2020
 *      Author: jacekg
 */

#ifndef __tim_H
#define __tim_H
#ifdef __cplusplus
extern "C" {
#endif

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

void MX_TIM5_Init(void);

#ifdef __cplusplus
}
#endif
#endif /*__ tim_H */
