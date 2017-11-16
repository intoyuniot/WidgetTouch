#ifndef WIDGET_TOUCH_H_
#define WIDGET_TOUCH_H_

#include "application.h"


class WidgetTouch
{
public:
    WidgetTouch(uint8_t ucItem = 0);
    ~WidgetTouch();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayTouchStatus(uint8_t ucVal);
    
private:
    char pDataStatusTopic[64];
    uint8_t _Item=0;         
};

#endif
