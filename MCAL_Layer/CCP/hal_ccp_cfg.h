/* 
 * File:   hal_ccp_cfg.h
 * Author: user
 *
 * Created on July 26, 2023, 5:30 PM
 */

#ifndef HAL_CCP_CFG_H
#define	HAL_CCP_CFG_H

/* Section : Includes */

/* Section : Macro Declarations */
#define CCP1_CFG_CAPTURE_MODE_SELECTED  0x00  
#define CCP1_CFG_COMPARE_MODE_SELECTED  0x01
#define CCP_CFG_PWM_MODE_SELECTED       0x02

#define CCP1_CFG_SELECTED_MODE          (CCP1_CFG_COMPARE_MODE_SELECTED)
#define CCP2_CFG_SELECTED_MODE          (CCP1_CFG_COMPARE_MODE_SELECTED)

/* Section : Macro  Function Declarations */

/* Section : Data Type Declarations */

/* Section : Function Declarations */

#endif	/* HAL_CCP_CFG_H */

