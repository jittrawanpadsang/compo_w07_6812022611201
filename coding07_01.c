#include <stdio.h>

int main(){

    float score = 70;
    float midterm_score;

 // ตรวจสอบว่าคะแนนมากกว่าหรือเท่ากับ 50 หรือไม่
    if (score >= 50){
        midterm_score = score * 0.05;// เพิ่มคะแนนพิเศษ 5%
    } else {
        midterm_score = score;
    }

    printf("Midterm score: %.2f\n", midterm_score);// แสดงผลคะแนนรวมหลังจากเพิ่มคะแนนพิเศษ (ถ้ามี)
    printf("End of evaluation\n"); // แสดงข้อความจบการประเมิน

    return 0;
}