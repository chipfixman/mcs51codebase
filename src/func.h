#ifndef CB_FUNC_H   // If MATH_UTILS_H is not defined
#define CB_FUNC_H   // Define MATH_UTILS_H


void Delay500ms();

// 例子代码可以用 stc-isp tool 选择芯片型号 生成
void Delay1ms(unsigned int xms);		
void Delay(unsigned int xms);	



void Nixie(unsigned char Location,Number);

#endif
