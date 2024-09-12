#include <stdio.h>
#include "SevenSegment.h"

SevenSegment s1(0);
SevenSegment s2(4);

extern "C" void app_main(void)
{
    uint8_t counter = 0;  // ใช้ตัวแปร counter แบบ uint8_t
    
    while (1)
    {
        // แสดงหลักสิบบน Seven-Segment Display ที่ 1
        s1.DisplayNumber(counter / 10);
        s1.DisplayOn();
        vTaskDelay(500 / portTICK_PERIOD_MS);  // แสดงผลเป็นเวลา 500 ms
        s1.DisplayOff();

        // แสดงหลักหน่วยบน Seven-Segment Display ที่ 2
        s2.DisplayNumber(counter % 10);
        s2.DisplayOn();
        vTaskDelay(500 / portTICK_PERIOD_MS);  // แสดงผลเป็นเวลา 500 ms
        s2.DisplayOff();

        // เพิ่มค่า counter
        counter++;
        if (counter > 99)
            counter = 0;
    }
}

