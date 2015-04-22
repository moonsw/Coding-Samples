#ifndef GEEKOS_SERIAL_H
#define GEEKOS_SERIAL_H

#define COM1_IRQn 4
#define COM1_BASE 0x3F8
#define COM1_THR (COM1_BASE) + 0x0 
#define COM1_RBR (COM1_BASE) + 0x0 
#define COM1_IER (COM1_BASE) + 0x1 
#define COM1_IIR (COM1_BASE) + 0x2 
#define COM1_FCR (COM1_BASE) + 0x2 
	 
void Serial_Interrupt_Handler(struct Interrupt_State *state); 
void Init_Serial(void); 
uchar_t Serial_Get_Char(); 
void Serial_Put_S(const char *s); 
void Serial_Put(uchar_t ch); 
bool Serial_Try_Get_Char(uchar_t *ch); 
uchar_t Serial_Wait_Get_Char(); 
void Serial_Try_Put_Char(uchar_t ch); 
void Serial_Wait_Put_Char(uchar_t ch); 
	 
#endif 
