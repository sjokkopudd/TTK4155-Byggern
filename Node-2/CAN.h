/*
 * CAN.h
 *
 * Created: 13.10.2016 17:26:53
 *  Author: Whiskey Dicks
 */


#ifndef CAN_H_
#define CAN_H_

#include "CAN_controller_driver.h"

typedef struct {
	unsigned int id;
	uint8_t length;
	uint8_t data[8];
} can_message;


void can_init(void);
void can_message_send(can_message* message);

void can_handle_messages();
int can_error(void);
int can_transmit_complete(int);
void can_message_receive(int, can_message* message);
void can_int_vect(int*);

#endif /* CAN_H_ */