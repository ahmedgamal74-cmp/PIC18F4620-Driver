/* 
 * File:   ecu_seven_segment.h
 * Author: user
 *
 * Created on July 13, 2023, 12:51 AM
 */

#ifndef ECU_SEVEN_SEGMENT_H
#define	ECU_SEVEN_SEGMENT_H

/* Section : Includes */
#include "ecu_seven_segment_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/* Section : Macro Declarations */
#define SEGMENT_PINS_NUMBER     4
#define SEGMENT_PIN0            0
#define SEGMENT_PIN1            1
#define SEGMENT_PIN2            2
#define SEGMENT_PIN3            3

/* Section : Macro  Function Declarations */

/* Section : Data Type Declarations */
typedef enum{
    SEGMENT_COMMON_ANODE,
    SEGMENT_COMMON_CATHODE,        
}segment_type_t;

typedef struct{
    pin_config_t segment_pins[SEGMENT_PINS_NUMBER];
    segment_type_t segment_type;
}segment_t;

/* Section : Function Declarations */
Std_ReturnType seven_segment_initialize(const segment_t *seg);
Std_ReturnType seven_segment_write_number(const segment_t *seg, uint8 number);

#endif	/* ECU_SEVEN_SEGMENT_H */

