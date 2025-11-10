#ifndef CB_SAMPLE_H 
#define CB_SAMPLE_H 


// SAMPLE 2: LED闪烁
void LedLightEvery500ms();

// SAMPLE 3: 流水灯
void LedLightOnebyOne();

//按下松开 控制LED
void PressDownControlLed();

// 按下 不用按住 控制led 亮和灭，类似开关
void ButtonControlLed();

//按键控制 8个LED 二进制计算
void ButtonLedBinaryCalc();

//按键控制 LED 前一个亮，后一个亮
void BUttonPrevNextLed();

//数码管 显示123
void display123();

//LCD 1602 显示 读秒 递增
void LCD1602_Sample();

//矩阵键盘
void MatrixKeySample();

//矩阵键盘 密码例子
void MatrixKeyPassword();

#endif