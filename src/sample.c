#include <REGX52.H>
#include "sample.h"
#include "func.h"

void LedLightEvery500ms()
{
	while(1)
	{
		P2=0xFE;	//1111 1110
		// P2=0xFD;	//1111 1101
		Delay500ms();
		P2=0xFF;	//1111 1111
		Delay500ms();
	}
}




void LedLightOnebyOne() 
{
    while(1)
	{
		P2=0xFE;//1111 1110
		Delay500ms();
		P2=0xFD;//1111 1101
		Delay500ms();
		P2=0xFB;//1111 1011
		Delay500ms();
		P2=0xF7;//1111 0111
		Delay500ms();
		P2=0xEF;//1110 1111
		Delay500ms();
		P2=0xDF;//1101 1111
		Delay500ms();
		P2=0xBF;//1011 1111
		Delay500ms();
		P2=0x7F;//0111 1111
		Delay500ms();
	}

}


void PressDownControlLed()
{
	while(1)
	{
		if(P3_1==0 || P3_0==0)	//如果K1按键或K2按键按下
		{
			P2_0=0;		//LED1输出0，点亮
		}
		else
		{
			P2_0=1;		//LED1输出1，熄灭
		}
	}
}


void ButtonControlLed()
{
	while(1)
	{
		if(P3_1==0)			//如果K1按键按下
		{
			Delay(20);		//延时消抖
			while(P3_1==0);	//松手检测
			Delay(20);		//延时消抖
			
			P2_0=~P2_0;		//LED1取反
		}
	}
}


void ButtonLedBinaryCalc()
{
	unsigned char LEDNum=0;
	while(1)
	{
		if(P3_1==0)			//如果K1按键按下
		{
			Delay(20);		//延时消抖
			while(P3_1==0);	//松手检测
			Delay(20);		//延时消抖
			
			LEDNum++;		//变量自增
			P2=~LEDNum;		//变量取反输出给LED
		}
	}
}


void BUttonPrevNextLed()
{
    unsigned char LEDNum;
	P2=~0x01;				//上电默认LED1点亮
	while(1)
	{
		if(P3_1==0)			//如果K1按键按下
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			
			LEDNum++;		//LEDNum自增
			if(LEDNum>=8)	//限制LEDNum自增范围
				LEDNum=0;
			P2=~(0x01<<LEDNum);	//LED的第LEDNum位点亮
		}
		if(P3_0==0)			//如果K2按键按下
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			
			if(LEDNum==0)	//LEDNum减到0后变为7
				LEDNum=7;
			else			//LEDNum未减到0，自减
				LEDNum--;
			P2=~(0x01<<LEDNum);	//LED的第LEDNum位点亮
		}
	}
}

void display123()
{
	while(1)
	{
		Nixie(1,1);		//在数码管的第1位置显示1
//		Delay(20);
		Nixie(2,2);		//在数码管的第2位置显示2
//		Delay(20);
		Nixie(3,3);		//在数码管的第3位置显示3
//		Delay(20);
	}
}