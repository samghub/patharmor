#ifndef __ARMOR_H__
#define __ARMOR_H__

#include <linux/ioctl.h>

#define ARMOR_IOC_MAGIC 'l'
#define ARMOR_IOC_INIT           _IO(ARMOR_IOC_MAGIC,  1)
#define ARMOR_IOC_DUMP           _IO(ARMOR_IOC_MAGIC,  2)
#define ARMOR_IOC_NOTHING        _IO(ARMOR_IOC_MAGIC,  3)
#define ARMOR_IOC_VALIDATE       _IO(ARMOR_IOC_MAGIC,  4)
#define ARMOR_IOC_COPY_PATHS     _IO(ARMOR_IOC_MAGIC,  5)
#define ARMOR_IOC_ENABLE_LBR     _IO(ARMOR_IOC_MAGIC,  6)
#define ARMOR_IOC_DISABLE_LBR    _IO(ARMOR_IOC_MAGIC,  7)

#define ARMOR_IOC_LIB_ENTER      0x6c08
#define ARMOR_IOC_LIB_EXIT       0x6c09
#define ARMOR_IOC_CALLBACK_ENTER _IO(ARMOR_IOC_MAGIC, 10)
#define ARMOR_IOC_CALLBACK_EXIT  _IO(ARMOR_IOC_MAGIC, 11)
#define ARMOR_IOC_GET_JIT_WORK   _IO(ARMOR_IOC_MAGIC, 12)
#define ARMOR_IOC_PUT_JIT_WORK   _IO(ARMOR_IOC_MAGIC, 13)
#define ARMOR_IOC_GET_OFFSETS    _IO(ARMOR_IOC_MAGIC, 14)

#define ARMOR_IOC_PUSH_PLTS      _IO(ARMOR_IOC_MAGIC, 15)
#define ARMOR_IOC_PULL_PLT_COPY  _IO(ARMOR_IOC_MAGIC, 16)
#define ARMOR_IOC_PULL_PLTS      _IO(ARMOR_IOC_MAGIC, 17) 
#define ARMOR_IOC_PULL_GOTS      _IO(ARMOR_IOC_MAGIC, 18) 

#define ARMOR_IOC_PUSH_EXITS      _IO(ARMOR_IOC_MAGIC, 19)
#define ARMOR_IOC_PULL_EXITS      _IO(ARMOR_IOC_MAGIC, 20)
#define ARMOR_IOC_PULL_EXITS_DATA _IO(ARMOR_IOC_MAGIC, 21)

#define ARMOR_MINOR 1

#define PFX "Armor: "


#endif /* __ARMOR_H__ */
