/**-------------------------------------------------------------------------------------------
** Created by:          qinyx
** Last modified Date:  2014-02-28
** Last Version:        V1.00
** Descriptions:        STM32F407嵌入式实验箱
**
**-------------------------------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "SysTick.h"

__IO uint32_t TimingDelay;

/******************************************************************************************
*函数名称：void SysTick_Init(void)
*
*入口参数：无
*
*出口参数：无
*
*功能说明：SysTick初始化  如果初始化失败，会停入WHILE死循环
*******************************************************************************************/
void SysTick_Init(void)
{
    if (SysTick_Config(SystemCoreClock / 1000))    //1ms
    { 
        while (1); //初始化失败
    }
}

/******************************************************************************************
*函数名称：void Delay(__IO uint32_t nTime)
*
*入口参数：无
*
*出口参数：无
*
*功能说明：供外部调用的延时函数
*******************************************************************************************/
void Delay(__IO uint32_t nTime)
{ 
    TimingDelay = nTime;
    
    while(TimingDelay != 0);
}

/******************************************************************************************
*函数名称：void TimingDelay_Decrement(void)
*
*入口参数：无
*
*出口参数：无
*
*功能说明：SysTick中断调用函数
*******************************************************************************************/
void TimingDelay_Decrement(void)
{
    if (TimingDelay != 0x00)
    { 
        TimingDelay--;
    }
}

