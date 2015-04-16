/*
    This file is part of AutoQuad.

    AutoQuad is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AutoQuad is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with AutoQuad.  If not, see <http://www.gnu.org/licenses/>.

    Copyright � 2011-2014  Bill Nesbitt
*/

#ifndef _board_h
#define _board_h

#define HAS_USB

/*
#define SDIO_DMA				DMA2
#define SDIO_DMA_STREAM			DMA2_Stream3
#define SDIO_DMA_CHANNEL		DMA_Channel_4
#define SDIO_DMA_FLAG_FEIF		DMA_FLAG_FEIF3
#define SDIO_DMA_FLAG_DMEIF		DMA_FLAG_DMEIF3
#define SDIO_DMA_FLAG_TEIF		DMA_FLAG_TEIF3
#define SDIO_DMA_FLAG_HTIF		DMA_FLAG_HTIF3
#define SDIO_DMA_FLAG_TCIF		DMA_FLAG_TCIF3
#define SDIO_DMA_IRQHANDLER		DMA2_Stream3_IRQHandler
#define SDIO_DMA_IRQn			DMA2_Stream3_IRQn
#define SDIO_DETECT_GPIO_PORT	GPIOA
#define SDIO_DETECT_PIN			GPIO_Pin_4
#define SDIO_DETECT_PORT_SOURCE	EXTI_PortSourceGPIOA
#define SDIO_DETECT_PIN_SOURCE	EXTI_PinSource4
#define SDIO_DETECT_IRQ			EXTI4_IRQn
#define SDIO_DETECT_HANDLER		EXTI4_IRQHandler
#define SDIO_DETECT_EXTI_LINE	EXTI_Line4
#define SDIO_TRANSFER_CLK_DIV   ((uint8_t)0x02)	// SDIO Data Transfer Frequency (12MHz max)
*/

enum pwmPorts {
	PWM_1 = 0,
	PWM_2,
	PWM_3,
	PWM_4,
	PWM_5,
	PWM_6,
	PWM_7,
	PWM_8,
	PWM_9,
	PWM_10,
	PWM_NUM_PORTS,
};

#define PPM_PWM_CHANNEL		9	// which PWM channel to use for PPM capture

#define PWM_TIMERS  const TIM_TypeDef *pwmTimers[] = { \
    TIM3, \
    TIM2, \
    TIM3, \
    TIM3, \
    TIM3, \
    TIM4, \
    TIM4, \
    TIM4, \
    TIM4, \
    TIM9, \
};

#define	PWM_AFS	    const uint8_t pwmAFs[] = { \
    GPIO_AF_TIM3,  \
    GPIO_AF_TIM2,  \
    GPIO_AF_TIM3,  \
    GPIO_AF_TIM3, \
    GPIO_AF_TIM3, \
    GPIO_AF_TIM4, \
    GPIO_AF_TIM4,  \
    GPIO_AF_TIM4, \
    GPIO_AF_TIM4, \
    GPIO_AF_TIM9,  \
};

#define PWM_PORTS   const GPIO_TypeDef *pwmPorts[] = { \
    GPIOA, \
    GPIOA, \
    GPIOA, \
    GPIOB, \
    GPIOB, \
    GPIOB, \
    GPIOB, \
    GPIOB, \
    GPIOB, \
    GPIOA,  \
};

#define PWM_PINS    const uint32_t pwmPins[] = { \
    GPIO_Pin_6, \
    GPIO_Pin_5, \
    GPIO_Pin_7, \
    GPIO_Pin_0, \
    GPIO_Pin_1, \
    GPIO_Pin_8, \
    GPIO_Pin_9, \
    GPIO_Pin_6, \
    GPIO_Pin_7, \
    GPIO_Pin_3, \
};

#define PWM_PINSOURCES	const uint16_t pwmPinSources[] = { \
    GPIO_PinSource6, \
    GPIO_PinSource5, \
    GPIO_PinSource7, \
    GPIO_PinSource0, \
    GPIO_PinSource1, \
    GPIO_PinSource8, \
    GPIO_PinSource9, \
    GPIO_PinSource6, \
    GPIO_PinSource7, \
    GPIO_PinSource3, \
};

#define PWM_TIMERCHANNELS   const uint8_t pwmTimerChannels[] = { \
    TIM_Channel_1, \
    TIM_Channel_1, \
    TIM_Channel_2, \
    TIM_Channel_3, \
    TIM_Channel_4, \
    TIM_Channel_3, \
    TIM_Channel_4, \
    TIM_Channel_1, \
    TIM_Channel_2, \
    TIM_Channel_2, \
};

#define PWM_BDTRS   const uint8_t pwmBDTRs[] = { \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
    0, \
};

#define PWM_CLOCKS  const uint32_t pwmClocks[] = { \
    84000000, \
    84000000, \
    84000000, \
    84000000, \
    84000000, \
    84000000, \
    84000000, \
    84000000, \
    84000000, \
    168000000, \
};

#define PWM_IC_IRQS  const uint8_t pwmIcIrqChannels[] = { \
    TIM3_IRQn, \
    TIM2_IRQn, \
    TIM3_IRQn, \
    TIM3_IRQn, \
    TIM3_IRQn, \
    TIM4_IRQn, \
    TIM4_IRQn, \
    TIM4_IRQn, \
    TIM4_IRQn, \
    TIM1_BRK_TIM9_IRQn, \
};

#define PWM_IRQ_TIM3_CH1	0
#define PWM_IRQ_TIM2_CH1	1
#define PWM_IRQ_TIM3_CH2	2
#define PWM_IRQ_TIM3_CH3	3
#define PWM_IRQ_TIM3_CH4	4
#define PWM_IRQ_TIM4_CH3	5
#define PWM_IRQ_TIM4_CH4	6
#define PWM_IRQ_TIM4_CH1	7
#define PWM_IRQ_TIM4_CH2	8
#define PWM_IRQ_TIM9_CH2	9


#define SUPERVISOR_READY_PORT	GPIOG
#define SUPERVISOR_READY_PIN	GPIO_Pin_13
#define SUPERVISOR_DEBUG_PORT	GPIOG
#define SUPERVISOR_DEBUG_PIN	GPIO_Pin_14

//#define SIG_BUZZER_PORT		GPIOB
//#define SIG_BUZZER_PIN		GPIO_Pin_14
//#define SIG_BUZZER_INVERT


#define ADC_DMA_STREAM		DMA2_Stream4
#define ADC_DMA_CHANNEL		DMA_Channel_0
#define ADC_DMA_FLAGS		(DMA_IT_TEIF4 | DMA_IT_DMEIF4 | DMA_IT_FEIF4 | DMA_IT_TCIF4 | DMA_IT_HTIF4)
#define ADC_DMA_TC_FLAG		DMA_IT_TCIF4
#define ADC_DMA_ISR			DMA2->HISR
#define ADC_DMA_CR			DMA2->HIFCR
#define ADC_DMA_IRQ			DMA2_Stream4_IRQn
#define ADC_DMA_HANDLER		DMA2_Stream4_IRQHandler

/*
#define CANx			    	CAN2
#define CAN_CLK			    	(RCC_APB1Periph_CAN1 | RCC_APB1Periph_CAN2)
#define CAN_GPIO_PORT		    GPIOB
#define CAN_RX_PIN		    	GPIO_Pin_12
#define CAN_TX_PIN		    	GPIO_Pin_13
#define CAN_AF_PORT		    	GPIO_AF_CAN2
#define CAN_RX_SOURCE		    GPIO_PinSource12
#define CAN_TX_SOURCE		    GPIO_PinSource13
#define CAN_RX0_IRQ		    	CAN2_RX0_IRQn
#define CAN_RX0_HANDLER		    CAN2_RX0_IRQHandler
#define CAN_TX_IRQ		    	CAN2_TX_IRQn
#define CAN_TX_HANDLER		    CAN2_TX_IRQHandler
*/

#define I2C_I2C1_CLOCK		    RCC_APB1Periph_I2C1
#define I2C_I2C1_AF		        GPIO_AF_I2C1
#define I2C_I2C1_SCL_PORT	    GPIOB
#define I2C_I2C1_SDA_PORT	    GPIOB
#define I2C_I2C1_SCL_PIN	    GPIO_Pin_6
#define I2C_I2C1_SDA_PIN	    GPIO_Pin_7
#define I2C_I2C1_SCL_SOURCE	    GPIO_PinSource6
#define I2C_I2C1_SDA_SOURCE	    GPIO_PinSource7

#define SPI_SPI3_CLOCK		    	RCC_APB1Periph_SPI3
#define SPI_SPI3_AF		    		GPIO_AF_SPI3
#define SPI_SPI3_SCK_PORT	    	GPIOB
#define SPI_SPI3_MISO_PORT	    	GPIOB
#define SPI_SPI3_MOSI_PORT	    	GPIOB
#define SPI_SPI3_SCK_PIN	    	GPIO_Pin_3
#define SPI_SPI3_MISO_PIN	    	GPIO_Pin_4
#define SPI_SPI3_MOSI_PIN	    	GPIO_Pin_5
#define SPI_SPI3_SCK_SOURCE	    	GPIO_PinSource3
#define SPI_SPI3_MISO_SOURCE	    GPIO_PinSource4
#define SPI_SPI3_MOSI_SOURCE	    GPIO_PinSource5
#define SPI_SPI3_DMA_RX		    	DMA1_Stream0
#define SPI_SPI3_DMA_RX_CHANNEL	    DMA_Channel_0
#define SPI_SPI3_DMA_RX_FLAGS	    (DMA_IT_TEIF0 | DMA_IT_DMEIF0 | DMA_IT_FEIF0 | DMA_IT_TCIF0 | DMA_IT_HTIF0)
#define SPI_SPI3_DMA_RX_IRQ	    	DMA1_Stream0_IRQn
#define SPI_SPI3_DMA_RX_HANDLER	    DMA1_Stream0_IRQHandler
#define SPI_SPI3_DMA_TX		    	DMA1_Stream5
#define SPI_SPI3_DMA_TX_CHANNEL	    DMA_Channel_0
#define SPI_SPI3_DMA_TX_FLAGS	    (DMA_IT_TEIF5 | DMA_IT_DMEIF5 | DMA_IT_FEIF5 | DMA_IT_TCIF5 | DMA_IT_HTIF5)

/*
#define SPI_SPI5_CLOCK		    	RCC_APB2Periph_SPI5
#define SPI_SPI5_AF		    		GPIO_AF_SPI5
#define SPI_SPI5_SCK_PORT	    	GPIOF
#define SPI_SPI5_MISO_PORT	    	GPIOF
#define SPI_SPI5_MOSI_PORT	    	GPIOF
#define SPI_SPI5_SCK_PIN	    	GPIO_Pin_7
#define SPI_SPI5_MISO_PIN	    	GPIO_Pin_8
#define SPI_SPI5_MOSI_PIN	    	GPIO_Pin_9
#define SPI_SPI5_SCK_SOURCE	    	GPIO_PinSource7
#define SPI_SPI5_MISO_SOURCE	    GPIO_PinSource8
#define SPI_SPI5_MOSI_SOURCE	    GPIO_PinSource9
#define SPI_SPI5_DMA_RX		    	DMA1_Stream0
#define SPI_SPI5_DMA_RX_CHANNEL	    DMA_Channel_0
#define SPI_SPI5_DMA_RX_FLAGS	    (DMA_IT_TEIF0 | DMA_IT_DMEIF0 | DMA_IT_FEIF0 | DMA_IT_TCIF0 | DMA_IT_HTIF0)
#define SPI_SPI5_DMA_RX_IRQ	    	DMA1_Stream0_IRQn
#define SPI_SPI5_DMA_RX_HANDLER	    DMA1_Stream0_IRQHandler
#define SPI_SPI5_DMA_TX		    	DMA1_Stream5
#define SPI_SPI5_DMA_TX_CHANNEL	    DMA_Channel_0
#define SPI_SPI5_DMA_TX_FLAGS	    (DMA_IT_TEIF5 | DMA_IT_DMEIF5 | DMA_IT_FEIF5 | DMA_IT_TCIF5 | DMA_IT_HTIF5)

#define DIMU_L3GD20_SPI	 	   		SPI5
#define DIMU_L3GD20_CS_PORT	    	GPIOC
#define DIMU_L3GD20_CS_PIN	  	  	GPIO_Pin_1
#define DIMU_L3GD20_INT_PORT	    GPIOA
#define DIMU_L3GD20_INT_PIN	    	GPIO_Pin_1
#define DIMU_L3GD20_INT_EXTI_PORT  	EXTI_PortSourceGPIOA
#define DIMU_L3GD20_INT_EXTI_PIN   	EXTI_PinSource1
#define DIMU_L3GD20_INT_EXTI_LINE  	EXTI_Line1
#define DIMU_L3GD20_INT_EXTI_IRQ   	EXTI1_IRQn
#define DIMU_L3GD20_INT_ISR	    	EXTI1_IRQHandler

*/

#define HAS_DIGITAL_IMU
#define USE_DIGITAL_IMU

//#define DIMU_HAVE_EEPROM
#define DIMU_HAVE_MPU6000
#define DIMU_HAVE_HMC5983
#define DIMU_HAVE_MS5611

#define MPU6000_ACC_SCALE           16     // g      (2, 4, 8, 16)
#define MPU6000_GYO_SCALE           2000  // deg/s  (250, 500, 1000, 2000)

#define DIMU_ORIENT_ACC_X	    (+in[0])
#define DIMU_ORIENT_ACC_Y	    (-in[1])
#define DIMU_ORIENT_ACC_Z	    (-in[2])

#define DIMU_ORIENT_GYO_X	    (-in[0])
#define DIMU_ORIENT_GYO_Y	    (+in[1])
#define DIMU_ORIENT_GYO_Z	    (-in[2])

#define DIMU_ORIENT_MAG_X	    (-in[0])
#define DIMU_ORIENT_MAG_Y	    (+in[1])
#define DIMU_ORIENT_MAG_Z	    (-in[2])


#define DIMU_EEPROM_SPI		    	SPI3
#define DIMU_EEPROM_CS_PORT	    	GPIOC
#define DIMU_EEPROM_CS_PIN	    	GPIO_Pin_15

#define DIMU_HMC5983_SPI		    SPI3
#define DIMU_HMC5983_CS_PORT	    GPIOC
#define DIMU_HMC5983_CS_PIN		    GPIO_Pin_13
#define DIMU_HMC5983_INT_PORT	    GPIOC
#define DIMU_HMC5983_INT_PIN	    GPIO_Pin_2
#define DIMU_HMC5983_INT_EXTI_PORT  EXTI_PortSourceGPIOA
#define DIMU_HMC5983_INT_EXTI_PIN   EXTI_PinSource2
#define DIMU_HMC5983_INT_EXTI_LINE  EXTI_Line2
#define DIMU_HMC5983_INT_EXTI_IRQ   EXTI2_IRQn
#define DIMU_HMC5983_INT_ISR	    EXTI2_IRQHandler

#define DIMU_MS5611_SPI		    	SPI3
#define DIMU_MS5611_CS_PORT	    	GPIOA
#define DIMU_MS5611_CS_PIN	    	GPIO_Pin_8

#define DIMU_MPU6000_SPI	 	   	SPI3
#define DIMU_MPU6000_CS_PORT	    GPIOC
#define DIMU_MPU6000_CS_PIN	  	  	GPIO_Pin_14
#define DIMU_MPU6000_INT_PORT	    GPIOC
#define DIMU_MPU6000_INT_PIN	    GPIO_Pin_3
#define DIMU_MPU6000_INT_EXTI_PORT  EXTI_PortSourceGPIOC
#define DIMU_MPU6000_INT_EXTI_PIN   EXTI_PinSource3
#define DIMU_MPU6000_INT_EXTI_LINE  EXTI_Line3
#define DIMU_MPU6000_INT_EXTI_IRQ   EXTI3_IRQn
#define DIMU_MPU6000_INT_ISR	    EXTI3_IRQHandler


#define COMM_PORT1		    	USART1
//#define COMM_PORT2		    	UART4
//#define COMM_PORT3		    	USART6

#define RC1_DELTANG_BAUD		134078
#define RC1_UART				USART2

#define GPS_USART				USART3
#define GPS_LED_PORT			GPIOC
#define GPS_LED_PIN				GPIO_Pin_2

//COMM1
#define SERIAL_UART1_PORT		GPIOA
#define SERIAL_UART1_RX_PIN		GPIO_Pin_10
#define SERIAL_UART1_TX_PIN		GPIO_Pin_9
#define SERIAL_UART1_RX_SOURCE	GPIO_PinSource10
#define SERIAL_UART1_TX_SOURCE	GPIO_PinSource9
#define SERIAL_UART1_RX_DMA_ST	DMA2_Stream2
#define SERIAL_UART1_TX_DMA_ST	DMA2_Stream7
#define SERIAL_UART1_RX_DMA_CH	DMA_Channel_4
#define SERIAL_UART1_TX_DMA_CH	DMA_Channel_4
#define SERIAL_UART1_TX_DMA_IT	DMA2_Stream7_IRQHandler
#define SERIAL_UART1_TX_IRQn	DMA2_Stream7_IRQn
#define SERIAL_UART1_RX_TC_FLAG	DMA_FLAG_TCIF2
#define SERIAL_UART1_RX_HT_FLAG	DMA_FLAG_HTIF2
#define SERIAL_UART1_RX_TE_FLAG	DMA_FLAG_TEIF2
#define SERIAL_UART1_RX_DM_FLAG	DMA_FLAG_DMEIF2
#define SERIAL_UART1_RX_FE_FLAG	DMA_FLAG_FEIF2
#define SERIAL_UART1_TX_TC_FLAG	DMA_FLAG_TCIF7
#define SERIAL_UART1_TX_HT_FLAG	DMA_FLAG_HTIF7
#define SERIAL_UART1_TX_TE_FLAG	DMA_FLAG_TEIF7
#define SERIAL_UART1_TX_DM_FLAG	DMA_FLAG_DMEIF7
#define SERIAL_UART1_TX_FE_FLAG	DMA_FLAG_FEIF7

//SBUS
#define SERIAL_UART2_PORT		GPIOA
#define SERIAL_UART2_RX_PIN		GPIO_Pin_3
#define SERIAL_UART2_RX_SOURCE	GPIO_PinSource3

//GPS
#define SERIAL_UART3_PORT		GPIOB
#define SERIAL_UART3_RX_PIN		GPIO_Pin_11
#define SERIAL_UART3_TX_PIN		GPIO_Pin_10
#define SERIAL_UART3_RX_SOURCE	GPIO_PinSource11
#define SERIAL_UART3_TX_SOURCE	GPIO_PinSource10
/*
//COMM2
#define SERIAL_UART4_PORT		GPIOA
#define SERIAL_UART4_RX_PIN		GPIO_Pin_1
#define SERIAL_UART4_TX_PIN		GPIO_Pin_0
#define SERIAL_UART4_RX_SOURCE	GPIO_PinSource1
#define SERIAL_UART4_TX_SOURCE	GPIO_PinSource0
#define SERIAL_UART4_RX_DMA_ST	DMA1_Stream2
#define SERIAL_UART4_TX_DMA_ST	DMA1_Stream4
#define SERIAL_UART4_RX_DMA_CH	DMA_Channel_4
#define SERIAL_UART4_TX_DMA_CH	DMA_Channel_4
#define SERIAL_UART4_TX_DMA_IT	DMA1_Stream4_IRQHandler
#define SERIAL_UART4_TX_IRQn	DMA1_Stream4_IRQn
#define SERIAL_UART4_RX_TC_FLAG	DMA_FLAG_TCIF2
#define SERIAL_UART4_RX_HT_FLAG	DMA_FLAG_HTIF2
#define SERIAL_UART4_RX_TE_FLAG	DMA_FLAG_TEIF2
#define SERIAL_UART4_RX_DM_FLAG	DMA_FLAG_DMEIF2
#define SERIAL_UART4_RX_FE_FLAG	DMA_FLAG_FEIF2
#define SERIAL_UART4_TX_TC_FLAG	DMA_FLAG_TCIF4
#define SERIAL_UART4_TX_HT_FLAG DMA_FLAG_HTIF4
#define SERIAL_UART4_TX_TE_FLAG	DMA_FLAG_TEIF4
#define SERIAL_UART4_TX_DM_FLAG	DMA_FLAG_DMEIF4
#define SERIAL_UART4_TX_FE_FLAG	DMA_FLAG_FEIF4

//COMM3
#define SERIAL_UART6_PORT		GPIOC
#define SERIAL_UART6_RX_PIN		GPIO_Pin_7
#define SERIAL_UART6_TX_PIN		GPIO_Pin_6
#define SERIAL_UART6_RX_SOURCE	GPIO_PinSource7
#define SERIAL_UART6_TX_SOURCE	GPIO_PinSource6
#define SERIAL_UART6_RX_DMA_ST	DMA2_Stream1
#define SERIAL_UART6_TX_DMA_ST	DMA2_Stream6
#define SERIAL_UART6_RX_DMA_CH	DMA_Channel_5
#define SERIAL_UART6_TX_DMA_CH	DMA_Channel_5
#define SERIAL_UART6_TX_DMA_IT	DMA2_Stream6_IRQHandler
#define SERIAL_UART6_TX_IRQn	DMA2_Stream6_IRQn
#define SERIAL_UART6_RX_TC_FLAG	DMA_FLAG_TCIF1
#define SERIAL_UART6_RX_HT_FLAG	DMA_FLAG_HTIF1
#define SERIAL_UART6_RX_TE_FLAG	DMA_FLAG_TEIF1
#define SERIAL_UART6_RX_DM_FLAG	DMA_FLAG_DMEIF1
#define SERIAL_UART6_RX_FE_FLAG	DMA_FLAG_FEIF1
#define SERIAL_UART6_TX_TC_FLAG	DMA_FLAG_TCIF6
#define SERIAL_UART6_TX_HT_FLAG	DMA_FLAG_HTIF6
#define SERIAL_UART6_TX_TE_FLAG	DMA_FLAG_TEIF6
#define SERIAL_UART6_TX_DM_FLAG	DMA_FLAG_DMEIF6
#define SERIAL_UART6_TX_FE_FLAG	DMA_FLAG_FEIF6
*/

#define ANALOG_REF_VOLTAGE		3.3f
#define ANALOG_VIN_RTOP         10.0f
#define ANALOG_VIN_RBOT         1.0f
#define ANALOG_EXT_VOLT_RTOP	10.0f
#define ANALOG_EXT_VOLT_RBOT	1.0f
#define ANALOG_EXT_AMP_RTOP		1.0f
#define ANALOG_EXT_AMP_RBOT		1.2f

#define	ANALOG_CHANNEL_VIN		    ADC_Channel_10
#define	ANALOG_CHANNEL_EXT_VOLT	    ADC_Channel_11
#define	ANALOG_CHANNEL_EXT_AMP	    ADC_Channel_14
#define ANALOG_CHANNEL_SPARE4	    ADC_Channel_15
#define ANALOG_CHANNEL_SPARE5	    ADC_Channel_5
#define ANALOG_CHANNEL_SPARE6	    ADC_Channel_6
#define ANALOG_CHANNEL_SPARE7	    ADC_Channel_7

#define ANALOG_DMA_STREAM	DMA2_Stream4
#define ANALOG_DMA_CHANNEL	DMA_Channel_0
#define ANALOG_DMA_FLAGS	(DMA_IT_TEIF4 | DMA_IT_DMEIF4 | DMA_IT_FEIF4 | DMA_IT_TCIF4 | DMA_IT_HTIF4)
#define ANALOG_DMA_TC_FLAG	DMA_IT_TCIF4
#define ANALOG_DMA_ISR		DMA2->HISR
#define ANALOG_DMA_IRQ		DMA2_Stream4_IRQn
#define ANALOG_DMA_HANDLER	DMA2_Stream4_IRQHandler


#define UKF_VEL_Q               +3.2545e-02     // +0.032544903471       0.000000350530 +0.000037342305
#define UKF_VEL_ALT_Q           +1.4483e-01     // +0.144827254833       0.000000347510 -0.000055111229
#define UKF_POS_Q               +7.1562e+03     // +7156.240473309331    0.000000352142 +2.727925965284749
#define UKF_POS_ALT_Q           +5.3884e+03     // +5388.369673129109    0.000000351319 -6.187843541372100
#define UKF_ACC_BIAS_Q          +1.3317e-03     // +0.001331748045       0.000000359470 +0.000000039113
#define UKF_GYO_BIAS_Q          +4.5256e-02     // +0.045255679186       0.000000349060 +0.000045999290
#define UKF_QUAT_Q              +5.4005e-04     // +0.000540045060       0.000000353882 +0.000000029711
#define UKF_PRES_ALT_Q          +6.3105e+01     // +63.104671424320      0.000000353790 +0.0166164673283
#define UKF_ACC_BIAS_V          +7.8673e-07     // +0.000000786725       0.000000345847 -0.000000000977
#define UKF_GYO_BIAS_V          +4.0297e-09     // +0.000000004030       0.000000359017 +0.000000000000
#define UKF_RATE_V              +1.7538e-05     // +0.000017538388       0.000000358096 +0.000000000397
#define UKF_VEL_V               +2.8605e-07     // +0.000000286054       0.000000351709 +0.000000000183
#define UKF_ALT_VEL_V           +6.8304e-08     // +0.000000068304       0.000000362348 -0.000000000050
#define UKF_GPS_POS_N           +8.0703e-06     // +0.000008070349       0.000000353490 +0.000000005602
#define UKF_GPS_POS_M_N         +3.0245e-05     // +0.000030245341       0.000000345021 -0.000000008396
#define UKF_GPS_ALT_N           +1.1796e-05     // +0.000011795879       0.000000356036 -0.000000010027
#define UKF_GPS_ALT_M_N         +3.8329e-05     // +0.000038328879       0.000000346581 +0.000000027268
#define UKF_GPS_VEL_N           +1.7640e-01     // +0.176404763511       0.000000355574 -0.000094105688
#define UKF_GPS_VEL_M_N         +3.0138e-02     // +0.030138272888       0.000000343584 -0.000002668997
#define UKF_GPS_VD_N            +4.6379e+00     // +4.637855992835       0.000000358079 +0.000310962082
#define UKF_GPS_VD_M_N          +1.3127e-02     // +0.013127146795       0.000000347978 -0.000001550944
#define UKF_ALT_N               +9.5913e-02     // +0.095913477777       0.000000356359 -0.000049781087
#define UKF_ACC_N               +6.3287e-05     // +0.000063286884       0.000000342761 -0.000000022717
#define UKF_DIST_N              +9.7373e-03     // +0.009737270392       0.000000356147 +0.000009059372
#define UKF_MAG_N               +5.2355e-01     // +0.523549973965       0.000000500000 +0.000000000000
#define UKF_POS_DELAY           +2.1923e+03     // +2192.300048828125    0.000000500000 +0.000000000000125
#define UKF_VEL_DELAY           -1.0182e+05     // -101820.000000000000  0.000000500000 +0.00000000000000000

#define USE_EXTERNAL_ESC

#ifndef USE_EXTERNAL_ESC
#define HAS_ONBOARD_ESC         84000000
#endif

#ifdef HAS_ONBOARD_ESC
#define MOTORS_PWM_FREQ		80000	// Hz
#else
#define MOTORS_PWM_FREQ		400	// Hz
#endif

#define DEFAULT_IMU_ACC_BIAS_X      0.0
#define DEFAULT_IMU_ACC_BIAS_Y      0.0
#define DEFAULT_IMU_ACC_BIAS_Z      0.0
#define DEFAULT_IMU_ACC_BIAS1_X     0.0
#define DEFAULT_IMU_ACC_BIAS1_Y     0.0
#define DEFAULT_IMU_ACC_BIAS1_Z     0.0
#define DEFAULT_IMU_ACC_BIAS2_X     0.0
#define DEFAULT_IMU_ACC_BIAS2_Y     0.0
#define DEFAULT_IMU_ACC_BIAS2_Z     0.0
#define DEFAULT_IMU_ACC_BIAS3_X     0.0
#define DEFAULT_IMU_ACC_BIAS3_Y     0.0
#define DEFAULT_IMU_ACC_BIAS3_Z     0.0

#define DEFAULT_IMU_ACC_SCAL_X      1.0
#define DEFAULT_IMU_ACC_SCAL_Y      1.0
#define DEFAULT_IMU_ACC_SCAL_Z      1.0
#define DEFAULT_IMU_ACC_SCAL1_X     0.0
#define DEFAULT_IMU_ACC_SCAL1_Y     0.0
#define DEFAULT_IMU_ACC_SCAL1_Z     0.0
#define DEFAULT_IMU_ACC_SCAL2_X     0.0
#define DEFAULT_IMU_ACC_SCAL2_Y     0.0
#define DEFAULT_IMU_ACC_SCAL2_Z     0.0
#define DEFAULT_IMU_ACC_SCAL3_X     0.0
#define DEFAULT_IMU_ACC_SCAL3_Y     0.0
#define DEFAULT_IMU_ACC_SCAL3_Z     0.0

#define DEFAULT_IMU_ACC_ALGN_XY     0.0
#define DEFAULT_IMU_ACC_ALGN_XZ     0.0
#define DEFAULT_IMU_ACC_ALGN_YX     0.0
#define DEFAULT_IMU_ACC_ALGN_YZ     0.0
#define DEFAULT_IMU_ACC_ALGN_ZX     0.0
#define DEFAULT_IMU_ACC_ALGN_ZY     0.0

#define DEFAULT_IMU_MAG_BIAS_X      0.0
#define DEFAULT_IMU_MAG_BIAS_Y      0.0
#define DEFAULT_IMU_MAG_BIAS_Z      0.0
#define DEFAULT_IMU_MAG_BIAS1_X     0.0
#define DEFAULT_IMU_MAG_BIAS1_Y     0.0
#define DEFAULT_IMU_MAG_BIAS1_Z     0.0
#define DEFAULT_IMU_MAG_BIAS2_X     0.0
#define DEFAULT_IMU_MAG_BIAS2_Y     0.0
#define DEFAULT_IMU_MAG_BIAS2_Z     0.0
#define DEFAULT_IMU_MAG_BIAS3_X     0.0
#define DEFAULT_IMU_MAG_BIAS3_Y     0.0
#define DEFAULT_IMU_MAG_BIAS3_Z     0.0

#define DEFAULT_IMU_MAG_SCAL_X      1.0
#define DEFAULT_IMU_MAG_SCAL_Y      1.0
#define DEFAULT_IMU_MAG_SCAL_Z      1.0
#define DEFAULT_IMU_MAG_SCAL1_X     0.0
#define DEFAULT_IMU_MAG_SCAL1_Y     0.0
#define DEFAULT_IMU_MAG_SCAL1_Z     0.0
#define DEFAULT_IMU_MAG_SCAL2_X     0.0
#define DEFAULT_IMU_MAG_SCAL2_Y     0.0
#define DEFAULT_IMU_MAG_SCAL2_Z     0.0
#define DEFAULT_IMU_MAG_SCAL3_X     0.0
#define DEFAULT_IMU_MAG_SCAL3_Y     0.0
#define DEFAULT_IMU_MAG_SCAL3_Z     0.0

#define DEFAULT_IMU_MAG_ALGN_XY     0.0
#define DEFAULT_IMU_MAG_ALGN_XZ     0.0
#define DEFAULT_IMU_MAG_ALGN_YX     0.0
#define DEFAULT_IMU_MAG_ALGN_YZ     0.0
#define DEFAULT_IMU_MAG_ALGN_ZX     0.0
#define DEFAULT_IMU_MAG_ALGN_ZY     0.0

#define DEFAULT_IMU_GYO_BIAS_X      0.0
#define DEFAULT_IMU_GYO_BIAS_Y      0.0
#define DEFAULT_IMU_GYO_BIAS_Z      0.0
#define DEFAULT_IMU_GYO_BIAS1_X     0.0
#define DEFAULT_IMU_GYO_BIAS1_Y     0.0
#define DEFAULT_IMU_GYO_BIAS1_Z     0.0
#define DEFAULT_IMU_GYO_BIAS2_X     0.0
#define DEFAULT_IMU_GYO_BIAS2_Y     0.0
#define DEFAULT_IMU_GYO_BIAS2_Z     0.0
#define DEFAULT_IMU_GYO_BIAS3_X     0.0
#define DEFAULT_IMU_GYO_BIAS3_Y     0.0
#define DEFAULT_IMU_GYO_BIAS3_Z     0.0

#define DEFAULT_IMU_GYO_SCAL_X      1.0
#define DEFAULT_IMU_GYO_SCAL_Y      1.0
#define DEFAULT_IMU_GYO_SCAL_Z      1.0

#define DEFAULT_IMU_GYO_ALGN_XY     0.0
#define DEFAULT_IMU_GYO_ALGN_XZ     0.0
#define DEFAULT_IMU_GYO_ALGN_YX     0.0
#define DEFAULT_IMU_GYO_ALGN_YZ     0.0
#define DEFAULT_IMU_GYO_ALGN_ZX     0.0
#define DEFAULT_IMU_GYO_ALGN_ZY     0.0

#endif
