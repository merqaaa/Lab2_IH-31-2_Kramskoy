#include <stdio.h>

int main() {
    int number;

    // ����� �?�� �᫮
    printf("����?�� �?�� �᫮: ");
    scanf_s("%d", &number);  // ������⮢�� scanf_s

    // �������� ��⠭�� ����
    printf("��⠭�� ��� �᫠: %d\n", number % 10);

    return 0;
}
