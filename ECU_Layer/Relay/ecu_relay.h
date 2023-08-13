/* 
 * File:   ecu_relay.h
 * Author: user
 *
 * Created on July 11, 2023, 9:21 PM
 */

#ifndef ECU_RELAY_H
#define	ECU_RELAY_H

/* Section : Includes */
#include "ecu_relay_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/* Section : Macro Declarations */
#define RELAY_ON_STATUS     0x01U
#define RELAY_OFF_STATUS    0x00U

/* Section : Macro  Function Declarations */

/* Section : Data Type Declarations */
typedef struct{
    uint8 relay_port : 4;
    uint8 relay_pin : 3;
    uint8 relay_status : 1;
}relay_t;

/* Section : Function Declarations */
Std_ReturnType relay_initialize(const relay_t *_relay);
Std_ReturnType relay_turn_on(const relay_t *_relay);
Std_ReturnType relay_turn_off(const relay_t *_relay);

#endif	/* ECU_RELAY_H */

