/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
按键触发器：检测是否有触摸

所需器件:
1.触摸传感器模块

接线说明:
触摸传感器                   核心板
1.VCC                        +3.3V
2.GND                        GND
3.SIG                        D0
*/

#include <WidgetTouch.h>

#define TOUPIN    D0 // 连接触摸传感器信号管脚

WidgetTouch touch  = WidgetTouch();

void setup()
{
	pinMode(TOUPIN, INPUT); // 设置连接触摸传感器信号管脚的模式为输入
}

void loop()
{
    // 触摸传感器被触摸，输出的状态为高电平，未触摸时输出低电平
	touch.displayTouchStatus(digitalRead(TOUPIN));
	delay(3000);	
}
