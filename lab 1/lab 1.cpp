#include <stdio.h>

int main() {
    int a, b;

    // ����� ��� �᫠ � ��ॢ?મ�
    printf("����?�� ��� �᫠: ");
    if (scanf_s("%d %d", &a, &b) != 2) {
        printf("������� �����!\n");
        return 1;  // �������� �ணࠬ�, �� �������� ����४⭥
    }

    // �?��� �᫠ �?��ﬨ
    a = a + b;
    b = a - b;
    a = a - b;

    // �������� १����
    printf("�?�� ���?��: a = %d, b = %d\n", a, b);

    return 0;
}
