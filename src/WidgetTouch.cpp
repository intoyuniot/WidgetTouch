
#include "WidgetTouch.h"


WidgetTouch::WidgetTouch(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));  
    sprintf(pDataStatusTopic,"channel/touch_%d/data/status",_Item); 
}

WidgetTouch::~WidgetTouch()
{
}

void WidgetTouch::begin(void (*UserCallBack)(void))
{
}

void WidgetTouch::displayTouchStatus(uint8_t ucVal)
{
    IntoRobot.publish(pDataStatusTopic,ucVal);
}






