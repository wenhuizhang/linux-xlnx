#ifndef _ASM_XPARAMETERS_H
#define _ASM_XPARAMETERS_H

#ifdef __KERNEL__

#if defined (CONFIG_SP3E)
 
#include <asm/xparameters-sp3e.h>
 
#elif defined(CONFIG_ML401)

#include <asm/xparameters-ml401.h>

#else

#include <asm/xparameters_bsp.h>

#endif

#define DDR_SDRAM_BASEADDR	(XPAR_ERAM_START)
#ifdef CONFIG_XILINX_UNCACHED_SHADOW
#define DDR_SDRAM_HIGHADDR	(XPAR_ERAM_START + (XPAR_ERAM_SIZE)/2 - 1)
#else
#define DDR_SDRAM_HIGHADDR	(XPAR_ERAM_START + XPAR_ERAM_SIZE - 1)
#endif

#define XPAR_CPU_FREQ			(XPAR_CPU_CLOCK_FREQ)
#define XPAR_TIMER_INTR			(CONFIG_XILINX_TIMER_0_IRQ)

/* Old LW BSP */
#ifdef XPAR_OPB_INTC_0_BASEADDR
#define XPAR_INTC_0_BASEADDR (XPAR_OPB_INTC_0_BASEADDR)
#define XPAR_INTC_MAX_NUM_INTR_INPUTS (XPAR_OPB_INTC_0_NUM_INTR_INPUTS)
#define XPAR_INTC_0_KIND_OF_INTR (XPAR_OPB_INTC_0_KIND_OF_INTR)
#endif

#ifdef XPAR_OPB_UARTLITE_0_BASEADDR
#define XPAR_UARTLITE_0_BASEADDR	(XPAR_OPB_UARTLITE_0_BASEADDR)
#define XPAR_UARTLITE_0_IRQ		(XPAR_OPB_INTC_0_OPB_UARTLITE_0_IRQ)
#endif

#ifdef XPAR_OPB_SPI_0_BASEADDR
#define XPAR_SPI_0_BASEADDR		(XPAR_OPB_SPI_0_BASEADDR)
#define XPAR_SPI_0_HIGHADDR		(XPAR_OPB_SPI_0_HIGHADDR)
#define XPAR_SPI_0_DEVICE_ID		(0)
#define XPAR_SPI_0_FIFO_EXIST		(XPAR_OPB_SPI_0_FIFO_EXIST)
#define XPAR_SPI_0_SPI_SLAVE_ONLY	(XPAR_OPB_SPI_0_SPI_SLAVE_ONLY)
#define XPAR_SPI_0_NUM_SS_BITS		(XPAR_OPB_SPI_0_NUM_SS_BITS)
#define XPAR_INTC_0_SPI_0_VEC_ID	(XPAR_OPB_INTC_0_OPB_SPI_0_IRQ)
#endif

#ifdef XPAR_OPB_ETHERNET_0_BASEADDR
#define XPAR_XEMAC_NUM_INSTANCES	(XPAR_OPB_ETHERNET_NUM_INSTANCES)
#define XPAR_EMAC_0_BASEADDR		(XPAR_OPB_ETHERNET_0_BASEADDR)
#define XPAR_EMAC_0_HIGHADDR		(XPAR_OPB_ETHERNET_0_HIGHADDR)
#define XPAR_EMAC_0_DEVICE_ID		(0)
#define XPAR_EMAC_0_ERR_COUNT_EXIST	(XPAR_OPB_ETHERNET_0_ERR_COUNT_EXIST)
#define XPAR_EMAC_0_DMA_PRESENT		(XPAR_OPB_ETHERNET_0_DMA_PRESENT)
#define XPAR_EMAC_0_MII_EXIST		(XPAR_OPB_ETHERNET_0_MII_EXIST)
#define XPAR_EMAC_0_CAM_EXIST		(XPAR_OPB_ETHERNET_0_CAM_EXIST)
#define XPAR_EMAC_0_JUMBO_EXIST		(XPAR_OPB_ETHERNET_0_JUMBO_EXIST)
#define XPAR_EMAC_0_TX_DRE_TYPE         (XPAR_OPB_ETHERNET_0_TX_DRE_TYPE)
#define XPAR_EMAC_0_RX_DRE_TYPE         (XPAR_OPB_ETHERNET_0_RX_DRE_TYPE)
#define XPAR_EMAC_0_TX_INCLUDE_CSUM     (XPAR_OPB_ETHERNET_0_TX_INCLUDE_CSUM)
#define XPAR_EMAC_0_RX_INCLUDE_CSUM     (XPAR_OPB_ETHERNET_0_RX_INCLUDE_CSUM)
#define XPAR_INTC_0_EMAC_0_VEC_ID	(XPAR_OPB_INTC_0_OPB_ETHERNET_0_IRQ)
#define XPAR_EMAC_0_IRQ (XPAR_OPB_INTC_0_OPB_ETHERNET_0_IRQ)
#endif

#ifdef XPAR_OPB_EMC_0_MEM0_BASEADDR
#define XPAR_FLASH_BASEADDR		(XPAR_OPB_EMC_0_MEM0_BASEADDR)
#define XPAR_FLASH_HIGHADDR		(XPAR_OPB_EMC_0_MEM0_HIGHADDR)
#define XPAR_FLASH_BUSWIDTH		1
#endif

#ifdef XPAR_OPB_GPIO_0_BASEADDR
#define XPAR_GPIO_0_BASEADDR		(XPAR_OPB_GPIO_0_BASEADDR)
#define XPAR_GPIO_0_HIGHADDR		(XPAR_OPB_GPIO_0_HIGHADDR)
#define XPAR_GPIO_0_DEVICE_ID		(0)
#define XPAR_GPIO_0_IS_DUAL		(XPAR_OPB_GPIO_0_IS_DUAL)
#define XPAR_GPIO_0_INTERRUPT_PRESENT	(XPAR_OPB_GPIO_0_INTERRUPT_PRESENT)
#define XPAR_GPIO_0_IRQ			(XPAR_OPB_INTC_0_OPB_GPIO_0_IRQ)
#endif

#ifdef XPAR_OPB_GPIO_1_BASEADDR
#define XPAR_GPIO_1_BASEADDR		(XPAR_OPB_GPIO_1_BASEADDR)
#define XPAR_GPIO_1_HIGHADDR		(XPAR_OPB_GPIO_1_HIGHADDR)
#define XPAR_GPIO_1_DEVICE_ID		(1)
#define XPAR_GPIO_1_IS_DUAL		(XPAR_OPB_GPIO_1_IS_DUAL)
#define XPAR_GPIO_1_INTERRUPT_PRESENT	(XPAR_OPB_GPIO_1_INTERRUPT_PRESENT)
#define XPAR_GPIO_1_IRQ			(XPAR_OPB_INTC_0_OPB_GPIO_1_IRQ)
#endif

#ifdef XPAR_OPB_GPIO_2_BASEADDR
#define XPAR_GPIO_2_BASEADDR		(XPAR_OPB_GPIO_2_BASEADDR)
#define XPAR_GPIO_2_HIGHADDR		(XPAR_OPB_GPIO_2_HIGHADDR)
#define XPAR_GPIO_2_DEVICE_ID		(2)
#define XPAR_GPIO_2_IS_DUAL		(XPAR_OPB_GPIO_2_IS_DUAL)
#define XPAR_GPIO_2_INTERRUPT_PRESENT	(XPAR_OPB_GPIO_2_INTERRUPT_PRESENT)
#define XPAR_GPIO_2_IRQ			(XPAR_OPB_INTC_0_OPB_GPIO_2_IRQ)
#endif

#ifdef XPAR_OPB_GPIO_3_BASEADDR
#define XPAR_GPIO_3_BASEADDR		(XPAR_OPB_GPIO_3_BASEADDR)
#define XPAR_GPIO_3_HIGHADDR		(XPAR_OPB_GPIO_3_HIGHADDR)
#define XPAR_GPIO_3_DEVICE_ID		(3)
#define XPAR_GPIO_3_IS_DUAL		(XPAR_OPB_GPIO_3_IS_DUAL)
#define XPAR_GPIO_3_INTERRUPT_PRESENT	(XPAR_OPB_GPIO_3_INTERRUPT_PRESENT)
#define XPAR_GPIO_3_IRQ			(XPAR_OPB_INTC_0_OPB_GPIO_3_IRQ)
#endif

#ifdef XPAR_OPB_GPIO_4_BASEADDR
#define XPAR_GPIO_4_BASEADDR		(XPAR_OPB_GPIO_4_BASEADDR)
#define XPAR_GPIO_4_HIGHADDR		(XPAR_OPB_GPIO_4_HIGHADDR)
#define XPAR_GPIO_4_DEVICE_ID		(4)
#define XPAR_GPIO_4_IS_DUAL		(XPAR_OPB_GPIO_4_IS_DUAL)
#define XPAR_GPIO_4_INTERRUPT_PRESENT	(XPAR_OPB_GPIO_4_INTERRUPT_PRESENT)
#define XPAR_GPIO_4_IRQ			(XPAR_OPB_INTC_0_OPB_GPIO_4_IRQ)
#endif

#ifdef XPAR_OPB_GPIO_5_BASEADDR
#define XPAR_GPIO_5_BASEADDR		(XPAR_OPB_GPIO_5_BASEADDR)
#define XPAR_GPIO_5_HIGHADDR		(XPAR_OPB_GPIO_5_HIGHADDR)
#define XPAR_GPIO_5_DEVICE_ID		(5)
#define XPAR_GPIO_5_IS_DUAL		(XPAR_OPB_GPIO_5_IS_DUAL)
#define XPAR_GPIO_5_INTERRUPT_PRESENT	(XPAR_OPB_GPIO_5_INTERRUPT_PRESENT)
#define XPAR_GPIO_5_IRQ			(XPAR_OPB_INTC_0_OPB_GPIO_5_IRQ)
#endif

#ifdef XPAR_OPB_GPIO_6_BASEADDR
#define XPAR_GPIO_6_BASEADDR		(XPAR_OPB_GPIO_6_BASEADDR)
#define XPAR_GPIO_6_HIGHADDR		(XPAR_OPB_GPIO_6_HIGHADDR)
#define XPAR_GPIO_6_DEVICE_ID		(6)
#define XPAR_GPIO_6_IS_DUAL		(XPAR_OPB_GPIO_6_IS_DUAL)
#define XPAR_GPIO_6_INTERRUPT_PRESENT	(XPAR_OPB_GPIO_6_INTERRUPT_PRESENT)
#define XPAR_GPIO_6_IRQ			(XPAR_OPB_INTC_0_OPB_GPIO_6_IRQ)
#endif

#ifdef XPAR_OPB_ETHERNETLITE_0_BASEADDR
#define XPAR_ETHERNETLITE_0_BASEADDR		(XPAR_OPB_ETHERNETLITE_0_BASEADDR)
#define XPAR_ETHERNETLITE_0_HIGHADDR		(XPAR_OPB_ETHERNETLITE_0_HIGHADDR)
#define XPAR_ETHERNETLITE_0_IRQ			(XPAR_OPB_INTC_0_OPB_ETHERNETLITE_0_IRQ)
#define XPAR_ETHERNETLITE_0_TX_PING_PONG	(XPAR_OPB_ETHERNETLITE_0_TX_PING_PONG)
#define XPAR_ETHERNETLITE_0_RX_PING_PONG	(XPAR_OPB_ETHERNETLITE_0_RX_PING_PONG)
#define XPAR_XEMACLITE_NUM_INSTANCES		1
#endif

/* New LW BSP */
#ifdef XPAR_INTC_0_INSTANCE
#define XPAR_INTC_MAX_NUM_INTR_INPUTS (XPAR_INTC_0_NUM_INTR_INPUTS)
#endif

#ifdef XPAR_EMAC_0_INSTACE
#define XPAR_INTC_0_EMAC_0_VEC_ID	(XPAR_EMAC_0_IRQ)
#endif


/* EDK 9.2 */
#ifdef XPAR_XPS_TIMER_0_BASEADDR
#define XPAR_TIMER_0_BASEADDR XPAR_XPS_TIMER_0_BASEADDR
#define XPAR_TIMER_0_HIGHADDR XPAR_XPS_TIMER_0_HIGHADDR
#define XPAR_TIMER_0_IRQ XPAR_XPS_TIMER_0_IRQ
#endif

#ifdef XPAR_XPS_INTC_0_BASEADDR
#define XPAR_INTC_0_BASEADDR (XPAR_XPS_INTC_0_BASEADDR)
#define XPAR_INTC_MAX_NUM_INTR_INPUTS (XPAR_XPS_INTC_0_NUM_INTR_INPUTS)
#define XPAR_INTC_0_KIND_OF_INTR (XPAR_XPS_INTC_0_KIND_OF_INTR)
#endif

#ifdef XPAR_XPS_UARTLITE_0_BASEADDR
#define XPAR_UARTLITE_0_BASEADDR	(XPAR_XPS_UARTLITE_0_BASEADDR)
#define XPAR_UARTLITE_0_IRQ		(XPAR_XPS_UARTLITE_0_IRQ)
#endif

#ifdef XPAR_XPS_SPI_0_BASEADDR
#define XPAR_SPI_0_BASEADDR		(XPAR_XPS_SPI_0_BASEADDR)
#define XPAR_SPI_0_HIGHADDR		(XPAR_XPS_SPI_0_HIGHADDR)
#define XPAR_SPI_0_DEVICE_ID		(0)
#define XPAR_SPI_0_FIFO_EXIST		(XPAR_XPS_SPI_0_FIFO_EXIST)
#define XPAR_SPI_0_SPI_SLAVE_ONLY	(1)
#define XPAR_SPI_0_NUM_SS_BITS		(XPAR_XPS_SPI_0_NUM_SS_BITS)
#define XPAR_INTC_0_SPI_0_VEC_ID	(XPAR_XPS_SPI_0_IRQ)
#endif

#ifdef XPAR_XPS_ETHERNETLITE_0_BASEADDR
#define XPAR_ETHERNETLITE_0_BASEADDR		(XPAR_XPS_ETHERNETLITE_0_BASEADDR)
#define XPAR_ETHERNETLITE_0_HIGHADDR		(XPAR_XPS_ETHERNETLITE_0_HIGHADDR)
#define XPAR_ETHERNETLITE_0_IRQ			(XPAR_XPS_ETHERNETLITE_0_IRQ)
#define XPAR_ETHERNETLITE_0_TX_PING_PONG	(XPAR_XPS_ETHERNETLITE_0_TX_PING_PONG)
#define XPAR_ETHERNETLITE_0_RX_PING_PONG	(XPAR_XPS_ETHERNETLITE_0_RX_PING_PONG)
#define XPAR_XEMACLITE_NUM_INSTANCES		1
#endif

#ifdef XPAR_XPS_LL_TEMAC_0_BASEADDR
/* LocalLink TYPE Enumerations */
#define XPAR_LL_FIFO    1
#define XPAR_LL_DMA     2

#define XPAR_LLTEMAC_0_INSTANCE           XPAR_XPS_LL_TEMAC_0_INSTANCE 
#define XPAR_LLTEMAC_0_SUBFAMILY          XPAR_XPS_LL_TEMAC_0_SUBFAMILY
#define XPAR_LLTEMAC_0_RESERVED           XPAR_XPS_LL_TEMAC_0_RESERVED
#define XPAR_LLTEMAC_0_SPLB_NATIVE_DWIDTH XPAR_XPS_LL_TEMAC_0_SPLB_NATIVE_DWIDTH
#define XPAR_LLTEMAC_0_FAMILY             XPAR_XPS_LL_TEMAC_0_FAMILY
#define XPAR_LLTEMAC_0_BASEADDR           XPAR_XPS_LL_TEMAC_0_BASEADDR
#define XPAR_LLTEMAC_0_HIGHADDR           XPAR_XPS_LL_TEMAC_0_HIGHADDR
#define XPAR_LLTEMAC_0_SPLB_DWIDTH        XPAR_XPS_LL_TEMAC_0_SPLB_DWIDTH
#define XPAR_LLTEMAC_0_SPLB_AWIDTH        XPAR_XPS_LL_TEMAC_0_SPLB_AWIDTH
#define XPAR_LLTEMAC_0_SPLB_NUM_MASTERS   XPAR_XPS_LL_TEMAC_0_SPLB_NUM_MASTERS
#define XPAR_LLTEMAC_0_SPLB_MID_WIDTH     XPAR_XPS_LL_TEMAC_0_SPLB_MID_WIDTH
#define XPAR_LLTEMAC_0_SPLB_P2P           XPAR_XPS_LL_TEMAC_0_SPLB_P2P
#define XPAR_LLTEMAC_0_BUS2CORE_CLK_RATIO XPAR_XPS_LL_TEMAC_0_BUS2CORE_CLK_RATIO
#define XPAR_LLTEMAC_0_TEMAC_TYPE         XPAR_XPS_LL_TEMAC_0_TEMAC_TYPE
#define XPAR_LLTEMAC_0_INCLUDE_IO         XPAR_XPS_LL_TEMAC_0_INCLUDE_IO 
#define XPAR_LLTEMAC_0_PHY_TYPE           XPAR_XPS_LL_TEMAC_0_PHY_TYPE
#define XPAR_LLTEMAC_0_TEMAC1_ENABLED     XPAR_XPS_LL_TEMAC_0_TEMAC1_ENABLED
#define XPAR_LLTEMAC_0_TEMAC0_PHYADDR     XPAR_XPS_LL_TEMAC_0_TEMAC0_PHYADDR
#define XPAR_LLTEMAC_0_TEMAC1_PHYADDR     XPAR_XPS_LL_TEMAC_0_TEMAC1_PHYADDR
#define XPAR_LLTEMAC_0_TEMAC0_TXFIFO      XPAR_XPS_LL_TEMAC_0_TEMAC0_TXFIFO
#define XPAR_LLTEMAC_0_TEMAC0_RXFIFO      XPAR_XPS_LL_TEMAC_0_TEMAC0_RXFIFO
#define XPAR_LLTEMAC_0_TEMAC1_TXFIFO      XPAR_XPS_LL_TEMAC_0_TEMAC1_TXFIFO
#define XPAR_LLTEMAC_0_TEMAC1_RXFIFO      XPAR_XPS_LL_TEMAC_0_TEMAC1_RXFIFO
#define XPAR_LLTEMAC_0_TEMAC0_TXCSUM      XPAR_XPS_LL_TEMAC_0_TEMAC0_TXCSUM
#define XPAR_LLTEMAC_0_TEMAC0_RXCSUM      XPAR_XPS_LL_TEMAC_0_TEMAC0_RXCSUM
#define XPAR_LLTEMAC_0_TEMAC1_TXCSUM      XPAR_XPS_LL_TEMAC_0_TEMAC1_TXCSUM
#define XPAR_LLTEMAC_0_TEMAC1_RXCSUM      XPAR_XPS_LL_TEMAC_0_TEMAC1_RXCSUM 
#define XPAR_LLTEMAC_0_HW_VER             XPAR_XPS_LL_TEMAC_0_HW_VER
#define XPAR_LLTEMAC_0_SPLB_CLK_PERIOD_PS XPAR_XPS_LL_TEMAC_0_SPLB_CLK_PERIOD_PS 
#endif

#ifdef XPAR_OPB_INTC_0_FSL_PS2_0_IRQ
#define XPAR_FSL_PS2_IRQ		(XPAR_OPB_INTC_0_FSL_PS2_0_IRQ)
#endif

#endif /* __KERNEL__ */

#endif /* _ASM_XPARAMETERS_H */