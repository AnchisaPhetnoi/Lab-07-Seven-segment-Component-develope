#include <stdio.h>
#include "SevenSegment.h"

SevenSegment s1(0);  // Seven-Segment Display สำหรับหลักสิบ
SevenSegment s2(4);  // Seven-Segment Display สำหรับหลักหน่วย

extern "C" void app_main(void)
{
    uint8_t counter = 15;  // กำหนดค่าเริ่มต้นให้เป็น 15

    while (1)
    {
        // แสดงหลักสิบ (เลข 1) บน Seven-Segment Display ที่ 1
        s1.DisplayNumber(counter / 10);
        s1.DisplayOn();

        // แสดงหลักหน่วย (เลข 5) บน Seven-Segment Display ที่ 2
        s2.DisplayNumber(counter % 10);
        s2.DisplayOn();

        vTaskDelay(1000 / portTICK_PERIOD_MS);  // ให้แสดงผลค้างไว้ 1 วินาที
    }
}
