#include <REGX52.H>
#include <INTRINS.H>
#include "func.h"


void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void Delay(unsigned int xms)
{
    Delay1ms(xms);

}

//@12.000MHz
void Delay1ms(unsigned int xms)
{
    unsigned char i, j;
	while(xms)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}

}

//数码管显示子函数
void Nixie(unsigned char Location,Number)
{
    //数码管段码表
    //63 6 91
    //重点，这个记录一下，数码管 7位+1个小数点位,正好8位. 
    //0= 0x3F (为什么是这个值，查一下 数码管 段码表 就知道)
    //1= 0x06 
    //所以,第2个数码管显示。 P2_4=1;P2_3=1;P2_2=0; 这三个位控制位置
    //显示3, 给 P0 赋值 NixieTable[3] 即可
    unsigned char NixieTable[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};



	switch(Location)		//位码输出
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=NixieTable[Number];	//段码输出
    Delay(1);				//显示一段时间
	P0=0x00;				//段码清0，消影
}