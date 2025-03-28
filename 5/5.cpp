
#include <stdio.h>

int main() {
    int number;

    // ����� �ਧ��筥 �᫮
    printf("����?�� �ਧ��筥 �᫮: ");
    scanf_s("%d", &number);

    // ��ॢ����� �᫮ � ����⭨� ���冷�
    int reversedNumber = 0;
    while (number != 0) {
        int digit = number % 10;       // ��ਬ�� ��⠭�� ����
        reversedNumber = reversedNumber * 10 + digit; // ����� �� �� ����⭮�� �᫠
        number /= 10;                  // ������� ��⠭�� ���� � �᫠
    }

    // �������� �᫮ � ����⭮�� ���浪�
    printf("��᫮ � ����⭮�� ���浪�: %d\n", reversedNumber);

    return 0;
}
