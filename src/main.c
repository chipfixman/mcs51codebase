// #include <REGX52.H>
#include "func.h"
#include "sample.h"

// LED VARIABLE
// P2=0xFE;	//1111 1110

// P3_1==0   K1按键  -- 见开发板说明书
// P3_0==0	 K2按键



void main()
{
	// 闪烁
	// LedLightEvery500ms();

	// 流水等
	// LedLightOnebyOne();

	// 按下松开
    // PressDownControl();

	// 按下 马上松开控制Led, 类似家里开关
	// ButtonControlLed();

	// 按键控制 8个LED 二进制计算
	// ButtonLedBinaryCalc();

	// 按键 控制 前一个LED, 或者后一个LED 亮
	// BUttonPrevNextLed();

	// 数码管2显示3
	// while(1)
	// {
		// Nixie(2,3);	//在数码管的第2位置显示3
	// }
	
	// 数码管显示123
	display123();
}