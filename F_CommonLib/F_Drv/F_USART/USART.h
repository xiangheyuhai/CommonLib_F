#include "F_CommonLib/F_Select/all_config.h"
#include "F_CommonLib/F_Drv/nativeInterface.h"

#ifndef __F_IIC_H__
#define __F_IIC_H__

//修改SDA SCL引脚
#define SDA PBout(6)
#define SCL PBout(7)

//几种mcu都包含这几个函数，所以直接声明就行
void IIC_Start(void);
void IIC_Stop(void);
u8 IIC_Wait_Ack(void);
void IIC_Ack(void);
void IIC_NAck(void);
void IIC_Send_Byte(u8 txd);
u8 IIC_Read_Byte(unsigned char ack);


#endif
