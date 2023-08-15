
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter number: ");
    scanf("%d", &num1);

    printf("Enter number: ");
    scanf("%d", &num2);

    printf("Enter number: ");
    scanf("%d", &num3);

    int sum = num1 + num2 + num3;
    printf("sum: %d\n", sum);

    return 0;
}