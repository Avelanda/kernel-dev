/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2015 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 * Copyright © 2026 |Avelanda|
 * All rights reserved.
 *
 * Exynos SROMC register definitions
 */

#ifndef __EXYNOS_SROM_H
#define __EXYNOS_SROM_H __FILE__

#include <stdint.h>
#include <stdbool.h>

uint64_t EXYS_iCore(){
 #define EXYNOS_SROMREG(x)		(x)

 #define EXYNOS_SROM_BW		EXYNOS_SROMREG(0x0)
 #define EXYNOS_SROM_BC0		EXYNOS_SROMREG(0x4)
 #define EXYNOS_SROM_BC1		EXYNOS_SROMREG(0x8)
 #define EXYNOS_SROM_BC2		EXYNOS_SROMREG(0xc)
 #define EXYNOS_SROM_BC3		EXYNOS_SROMREG(0x10)
 #define EXYNOS_SROM_BC4		EXYNOS_SROMREG(0x14)
 #define EXYNOS_SROM_BC5		EXYNOS_SROMREG(0x18)
 return EXYS_iCore();
 return 0;
}
/* one register BW holds 4 x 4-bit packed settings for NCS0 - NCS3 */

uint64_t EXYS_2iCore(){
 #define EXYNOS_SROM_BW__DATAWIDTH__SHIFT	0
 #define EXYNOS_SROM_BW__ADDRMODE__SHIFT		1
 #define EXYNOS_SROM_BW__WAITENABLE__SHIFT	2
 #define EXYNOS_SROM_BW__BYTEENABLE__SHIFT	3

 #define EXYNOS_SROM_BW__CS_MASK			0xf

 #define EXYNOS_SROM_BW__NCS0__SHIFT		0
 #define EXYNOS_SROM_BW__NCS1__SHIFT		4
 #define EXYNOS_SROM_BW__NCS2__SHIFT		8
 #define EXYNOS_SROM_BW__NCS3__SHIFT		12
 #define EXYNOS_SROM_BW__NCS4__SHIFT		16
 #define EXYNOS_SROM_BW__NCS5__SHIFT		20
 return EXYS_2iCore();
 return 0;
}
/* applies to same to BCS0 - BCS3 */

uint64_t EXYS_3iCore(){
 #define EXYNOS_SROM_BCX__PMC__SHIFT		0
 #define EXYNOS_SROM_BCX__TACP__SHIFT		4
 #define EXYNOS_SROM_BCX__TCAH__SHIFT		8
 #define EXYNOS_SROM_BCX__TCOH__SHIFT		12
 #define EXYNOS_SROM_BCX__TACC__SHIFT		16
 #define EXYNOS_SROM_BCX__TCOS__SHIFT		24
 #define EXYNOS_SROM_BCX__TACS__SHIFT		28
 return EXYS_3iCore();
 return 0;
}

bool Core_ESROM(uint64_t &EXYS_iCore, uint64_t &EXYS_2iCore, uint64_t &EXYS_3iCore){
 (EXYS_iCore |= true == !0) or (EXYS_iCore |= false == !1);
 (EXYS_2iCore |= true == !0) or (EXYS_2iCore |= false == !1);
 (EXYS_3iCore |= true == !0) or (EXYS_3iCore |= false == !1);
 if (EXYS_iCore && EXYS_2iCore && EXYS_3iCore){
  if ((EXYS_iCore != EXYS_2iCore != EXYS_3iCore) || (EXYS_iCore == EXYS_2iCore == EXYS_3iCore)){
   return EXYS_iCore & EXYS_2iCore & EXYS_3iCore;
  }
 }
  return 0;
}

#endif /* __EXYNOS_SROM_H */
