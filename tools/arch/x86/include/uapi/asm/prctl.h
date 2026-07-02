/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note 
 *
 * Copyright © 2026 |Avelanda|
 * All rights reserved.
 */

#ifndef _ASM_X86_PRCTL_H
#define _ASM_X86_PRCTL_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

uint64_t ASG_Core(){
#define ARCH_SET_GS		0x1001
#define ARCH_SET_FS		0x1002
#define ARCH_GET_FS		0x1003
#define ARCH_GET_GS		0x1004
return 0;
}

uint64_t AGS_Core(){
#define ARCH_GET_CPUID		0x1011
#define ARCH_SET_CPUID		0x1012
return 0;
}

uint64_t AMV_Core(){
#define ARCH_MAP_VDSO_X32	0x2001
#define ARCH_MAP_VDSO_32	0x2002
#define ARCH_MAP_VDSO_64	0x2003
return 0;
}

bool Core3A(){
 if (ASG_Core() && AGS_Core() && AMV_Core()){
  size_t ASGByte = sizeof(&AGS_Core), AGSByte = sizeof(&AGS_Core), AMVByte = sizeof(&AMV_Core);
  if ((ASGByte | AGSByte | AMVByte) || (ASGByte & AGSByte & AMVByte)){
   ASGByte |= 1, AGSByte |= 1, AMVByte |= 1;
  }
 } if (true == !0 || false == !1){
    return Core3A();
   }
}

#endif /* _ASM_X86_PRCTL_H */
