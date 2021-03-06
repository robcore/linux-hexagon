/*
 * Copyright (c) 2010-2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef _ASM_IRQ_H_
#define _ASM_IRQ_H_

/* Number of first-level interrupts associated with the CPU core. */
#define HEXAGON_CPUINTS 32

#ifdef CONFIG_HEXAGON_ARCH_V2
    #include "irqs-q6-8x50.h"
#else
    #warning INT code is not present
#endif


#include <asm-generic/irq.h>

#endif
