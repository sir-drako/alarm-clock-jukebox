/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'NiosII_CPU' in SOPC Builder design 'qsys_system'
 * SOPC Builder design path: ../../qsys_system.sopcinfo
 *
 * Generated: Sat Feb 27 22:42:29 CET 2021
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00080820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x14
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00040020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 2048
#define ALT_CPU_INST_ADDR_WIDTH 0x14
#define ALT_CPU_NAME "NiosII_CPU"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00040000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00080820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x14
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00040020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 2048
#define NIOS2_INST_ADDR_WIDTH 0x14
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00040000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __PWM


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x81108
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x81108
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x81108
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "qsys_system"


/*
 * buttons configuration
 *
 */

#define ALT_MODULE_CLASS_buttons altera_avalon_pio
#define BUTTONS_BASE 0x81070
#define BUTTONS_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTONS_CAPTURE 1
#define BUTTONS_DATA_WIDTH 2
#define BUTTONS_DO_TEST_BENCH_WIRING 0
#define BUTTONS_DRIVEN_SIM_VALUE 0
#define BUTTONS_EDGE_TYPE "RISING"
#define BUTTONS_FREQ 50000000
#define BUTTONS_HAS_IN 1
#define BUTTONS_HAS_OUT 0
#define BUTTONS_HAS_TRI 0
#define BUTTONS_IRQ 3
#define BUTTONS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTONS_IRQ_TYPE "EDGE"
#define BUTTONS_NAME "/dev/buttons"
#define BUTTONS_RESET_VALUE 0
#define BUTTONS_SPAN 16
#define BUTTONS_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * hour0 configuration
 *
 */

#define ALT_MODULE_CLASS_hour0 altera_avalon_pio
#define HOUR0_BASE 0x810c0
#define HOUR0_BIT_CLEARING_EDGE_REGISTER 0
#define HOUR0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HOUR0_CAPTURE 0
#define HOUR0_DATA_WIDTH 8
#define HOUR0_DO_TEST_BENCH_WIRING 0
#define HOUR0_DRIVEN_SIM_VALUE 0
#define HOUR0_EDGE_TYPE "NONE"
#define HOUR0_FREQ 50000000
#define HOUR0_HAS_IN 0
#define HOUR0_HAS_OUT 1
#define HOUR0_HAS_TRI 0
#define HOUR0_IRQ -1
#define HOUR0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HOUR0_IRQ_TYPE "NONE"
#define HOUR0_NAME "/dev/hour0"
#define HOUR0_RESET_VALUE 64
#define HOUR0_SPAN 16
#define HOUR0_TYPE "altera_avalon_pio"


/*
 * hour1 configuration
 *
 */

#define ALT_MODULE_CLASS_hour1 altera_avalon_pio
#define HOUR1_BASE 0x81040
#define HOUR1_BIT_CLEARING_EDGE_REGISTER 0
#define HOUR1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HOUR1_CAPTURE 0
#define HOUR1_DATA_WIDTH 8
#define HOUR1_DO_TEST_BENCH_WIRING 0
#define HOUR1_DRIVEN_SIM_VALUE 0
#define HOUR1_EDGE_TYPE "NONE"
#define HOUR1_FREQ 50000000
#define HOUR1_HAS_IN 0
#define HOUR1_HAS_OUT 1
#define HOUR1_HAS_TRI 0
#define HOUR1_IRQ -1
#define HOUR1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HOUR1_IRQ_TYPE "NONE"
#define HOUR1_NAME "/dev/hour1"
#define HOUR1_RESET_VALUE 64
#define HOUR1_SPAN 16
#define HOUR1_TYPE "altera_avalon_pio"


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x81108
#define JTAG_UART_0_IRQ 16
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * led_alarm configuration
 *
 */

#define ALT_MODULE_CLASS_led_alarm altera_avalon_pio
#define LED_ALARM_BASE 0x81090
#define LED_ALARM_BIT_CLEARING_EDGE_REGISTER 0
#define LED_ALARM_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_ALARM_CAPTURE 0
#define LED_ALARM_DATA_WIDTH 1
#define LED_ALARM_DO_TEST_BENCH_WIRING 0
#define LED_ALARM_DRIVEN_SIM_VALUE 0
#define LED_ALARM_EDGE_TYPE "NONE"
#define LED_ALARM_FREQ 50000000
#define LED_ALARM_HAS_IN 0
#define LED_ALARM_HAS_OUT 1
#define LED_ALARM_HAS_TRI 0
#define LED_ALARM_IRQ -1
#define LED_ALARM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_ALARM_IRQ_TYPE "NONE"
#define LED_ALARM_NAME "/dev/led_alarm"
#define LED_ALARM_RESET_VALUE 0
#define LED_ALARM_SPAN 16
#define LED_ALARM_TYPE "altera_avalon_pio"


/*
 * led_piano configuration
 *
 */

#define ALT_MODULE_CLASS_led_piano altera_avalon_pio
#define LED_PIANO_BASE 0x810d0
#define LED_PIANO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIANO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIANO_CAPTURE 0
#define LED_PIANO_DATA_WIDTH 7
#define LED_PIANO_DO_TEST_BENCH_WIRING 0
#define LED_PIANO_DRIVEN_SIM_VALUE 0
#define LED_PIANO_EDGE_TYPE "NONE"
#define LED_PIANO_FREQ 50000000
#define LED_PIANO_HAS_IN 0
#define LED_PIANO_HAS_OUT 1
#define LED_PIANO_HAS_TRI 0
#define LED_PIANO_IRQ -1
#define LED_PIANO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_PIANO_IRQ_TYPE "NONE"
#define LED_PIANO_NAME "/dev/led_piano"
#define LED_PIANO_RESET_VALUE 0
#define LED_PIANO_SPAN 16
#define LED_PIANO_TYPE "altera_avalon_pio"


/*
 * led_status configuration
 *
 */

#define ALT_MODULE_CLASS_led_status altera_avalon_pio
#define LED_STATUS_BASE 0x81080
#define LED_STATUS_BIT_CLEARING_EDGE_REGISTER 0
#define LED_STATUS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_STATUS_CAPTURE 0
#define LED_STATUS_DATA_WIDTH 2
#define LED_STATUS_DO_TEST_BENCH_WIRING 0
#define LED_STATUS_DRIVEN_SIM_VALUE 0
#define LED_STATUS_EDGE_TYPE "NONE"
#define LED_STATUS_FREQ 50000000
#define LED_STATUS_HAS_IN 0
#define LED_STATUS_HAS_OUT 1
#define LED_STATUS_HAS_TRI 0
#define LED_STATUS_IRQ -1
#define LED_STATUS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_STATUS_IRQ_TYPE "NONE"
#define LED_STATUS_NAME "/dev/led_status"
#define LED_STATUS_RESET_VALUE 0
#define LED_STATUS_SPAN 16
#define LED_STATUS_TYPE "altera_avalon_pio"


/*
 * minute0 configuration
 *
 */

#define ALT_MODULE_CLASS_minute0 altera_avalon_pio
#define MINUTE0_BASE 0x810b0
#define MINUTE0_BIT_CLEARING_EDGE_REGISTER 0
#define MINUTE0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MINUTE0_CAPTURE 0
#define MINUTE0_DATA_WIDTH 8
#define MINUTE0_DO_TEST_BENCH_WIRING 0
#define MINUTE0_DRIVEN_SIM_VALUE 0
#define MINUTE0_EDGE_TYPE "NONE"
#define MINUTE0_FREQ 50000000
#define MINUTE0_HAS_IN 0
#define MINUTE0_HAS_OUT 1
#define MINUTE0_HAS_TRI 0
#define MINUTE0_IRQ -1
#define MINUTE0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MINUTE0_IRQ_TYPE "NONE"
#define MINUTE0_NAME "/dev/minute0"
#define MINUTE0_RESET_VALUE 64
#define MINUTE0_SPAN 16
#define MINUTE0_TYPE "altera_avalon_pio"


/*
 * minute1 configuration
 *
 */

#define ALT_MODULE_CLASS_minute1 altera_avalon_pio
#define MINUTE1_BASE 0x81050
#define MINUTE1_BIT_CLEARING_EDGE_REGISTER 0
#define MINUTE1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MINUTE1_CAPTURE 0
#define MINUTE1_DATA_WIDTH 8
#define MINUTE1_DO_TEST_BENCH_WIRING 0
#define MINUTE1_DRIVEN_SIM_VALUE 0
#define MINUTE1_EDGE_TYPE "NONE"
#define MINUTE1_FREQ 50000000
#define MINUTE1_HAS_IN 0
#define MINUTE1_HAS_OUT 1
#define MINUTE1_HAS_TRI 0
#define MINUTE1_IRQ -1
#define MINUTE1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MINUTE1_IRQ_TYPE "NONE"
#define MINUTE1_NAME "/dev/minute1"
#define MINUTE1_RESET_VALUE 64
#define MINUTE1_SPAN 16
#define MINUTE1_TYPE "altera_avalon_pio"


/*
 * onchip_memory configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory altera_avalon_onchip_memory2
#define ONCHIP_MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY_BASE 0x40000
#define ONCHIP_MEMORY_CONTENTS_INFO ""
#define ONCHIP_MEMORY_DUAL_PORT 0
#define ONCHIP_MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY_INIT_CONTENTS_FILE "qsys_system_onchip_memory"
#define ONCHIP_MEMORY_INIT_MEM_CONTENT 0
#define ONCHIP_MEMORY_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY_IRQ -1
#define ONCHIP_MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY_NAME "/dev/onchip_memory"
#define ONCHIP_MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY_SIZE_VALUE 163840
#define ONCHIP_MEMORY_SPAN 163840
#define ONCHIP_MEMORY_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY_WRITABLE 1


/*
 * pwm configuration
 *
 */

#define ALT_MODULE_CLASS_pwm pwm
#define PWM_BASE 0x810f0
#define PWM_IRQ -1
#define PWM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_NAME "/dev/pwm"
#define PWM_SPAN 16
#define PWM_TYPE "pwm"


/*
 * second0 configuration
 *
 */

#define ALT_MODULE_CLASS_second0 altera_avalon_pio
#define SECOND0_BASE 0x810a0
#define SECOND0_BIT_CLEARING_EDGE_REGISTER 0
#define SECOND0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SECOND0_CAPTURE 0
#define SECOND0_DATA_WIDTH 8
#define SECOND0_DO_TEST_BENCH_WIRING 0
#define SECOND0_DRIVEN_SIM_VALUE 0
#define SECOND0_EDGE_TYPE "NONE"
#define SECOND0_FREQ 50000000
#define SECOND0_HAS_IN 0
#define SECOND0_HAS_OUT 1
#define SECOND0_HAS_TRI 0
#define SECOND0_IRQ -1
#define SECOND0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SECOND0_IRQ_TYPE "NONE"
#define SECOND0_NAME "/dev/second0"
#define SECOND0_RESET_VALUE 64
#define SECOND0_SPAN 16
#define SECOND0_TYPE "altera_avalon_pio"


/*
 * second1 configuration
 *
 */

#define ALT_MODULE_CLASS_second1 altera_avalon_pio
#define SECOND1_BASE 0x81060
#define SECOND1_BIT_CLEARING_EDGE_REGISTER 0
#define SECOND1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SECOND1_CAPTURE 0
#define SECOND1_DATA_WIDTH 8
#define SECOND1_DO_TEST_BENCH_WIRING 0
#define SECOND1_DRIVEN_SIM_VALUE 0
#define SECOND1_EDGE_TYPE "NONE"
#define SECOND1_FREQ 50000000
#define SECOND1_HAS_IN 0
#define SECOND1_HAS_OUT 1
#define SECOND1_HAS_TRI 0
#define SECOND1_IRQ -1
#define SECOND1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SECOND1_IRQ_TYPE "NONE"
#define SECOND1_NAME "/dev/second1"
#define SECOND1_RESET_VALUE 64
#define SECOND1_SPAN 16
#define SECOND1_TYPE "altera_avalon_pio"


/*
 * switches configuration
 *
 */

#define ALT_MODULE_CLASS_switches altera_avalon_pio
#define SWITCHES_BASE 0x810e0
#define SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHES_CAPTURE 1
#define SWITCHES_DATA_WIDTH 10
#define SWITCHES_DO_TEST_BENCH_WIRING 0
#define SWITCHES_DRIVEN_SIM_VALUE 0
#define SWITCHES_EDGE_TYPE "ANY"
#define SWITCHES_FREQ 50000000
#define SWITCHES_HAS_IN 1
#define SWITCHES_HAS_OUT 0
#define SWITCHES_HAS_TRI 0
#define SWITCHES_IRQ 2
#define SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SWITCHES_IRQ_TYPE "EDGE"
#define SWITCHES_NAME "/dev/switches"
#define SWITCHES_RESET_VALUE 0
#define SWITCHES_SPAN 16
#define SWITCHES_TYPE "altera_avalon_pio"


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x81100
#define SYSID_QSYS_0_ID 305419896
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1614460564
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_pwm configuration
 *
 */

#define ALT_MODULE_CLASS_timer_pwm altera_avalon_timer
#define TIMER_PWM_ALWAYS_RUN 0
#define TIMER_PWM_BASE 0x81000
#define TIMER_PWM_COUNTER_SIZE 32
#define TIMER_PWM_FIXED_PERIOD 0
#define TIMER_PWM_FREQ 50000000
#define TIMER_PWM_IRQ 4
#define TIMER_PWM_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_PWM_LOAD_VALUE 99999
#define TIMER_PWM_MULT 0.001
#define TIMER_PWM_NAME "/dev/timer_pwm"
#define TIMER_PWM_PERIOD 2
#define TIMER_PWM_PERIOD_UNITS "ms"
#define TIMER_PWM_RESET_OUTPUT 0
#define TIMER_PWM_SNAPSHOT 1
#define TIMER_PWM_SPAN 32
#define TIMER_PWM_TICKS_PER_SEC 500
#define TIMER_PWM_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_PWM_TYPE "altera_avalon_timer"


/*
 * timer_second configuration
 *
 */

#define ALT_MODULE_CLASS_timer_second altera_avalon_timer
#define TIMER_SECOND_ALWAYS_RUN 0
#define TIMER_SECOND_BASE 0x81020
#define TIMER_SECOND_COUNTER_SIZE 32
#define TIMER_SECOND_FIXED_PERIOD 0
#define TIMER_SECOND_FREQ 50000000
#define TIMER_SECOND_IRQ 1
#define TIMER_SECOND_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_SECOND_LOAD_VALUE 49999999
#define TIMER_SECOND_MULT 1.0
#define TIMER_SECOND_NAME "/dev/timer_second"
#define TIMER_SECOND_PERIOD 1
#define TIMER_SECOND_PERIOD_UNITS "s"
#define TIMER_SECOND_RESET_OUTPUT 0
#define TIMER_SECOND_SNAPSHOT 1
#define TIMER_SECOND_SPAN 32
#define TIMER_SECOND_TICKS_PER_SEC 1
#define TIMER_SECOND_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_SECOND_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
