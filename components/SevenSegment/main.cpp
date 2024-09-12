#include <stdio.h>
#include "SevenSegment.h"

SevenSegment s1(0);  // Seven Segment ตัวแรก
SevenSegment s2(4);  // Seven Segment ตัวที่สอง

extern "C" void app_main(void)
{
    while (1)
    {
        // แสดงเลข 1 บน Seven Segment ตัวแรก
        s1.DisplayNumber(1);
        s1.DisplayOn();
        vTaskDelay(500 / portTICK_PERIOD_MS); // หน่วงเวลา 500ms

        s1.DisplayOff(); // ปิดการแสดงผลบน Seven Segment ตัวแรก

        // แสดงเลข 5 บน Seven Segment ตัวที่สอง
        s2.DisplayNumber(5);
        s2.DisplayOn();
        vTaskDelay(500 / portTICK_PERIOD_MS); // หน่วงเวลา 500ms

        s2.DisplayOff(); // ปิดการแสดงผลบน Seven Segment ตัวที่สอง
    }
}
