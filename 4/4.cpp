#include <stdio.h>

int main() {
    double distance1 = 120, distance2 = 80;  // �?��⠭� ��� ������� �?��?���
    double time1 = 2, time2 = 1;  // ��� ��� ������� �?��?���
    double totalDistance, totalTime, averageSpeed;

    // ������ ������� �?��⠭� ? �����쭨� ��
    totalDistance = distance1 + distance2;
    totalTime = time1 + time2;

    // ������ �।�� 袨��?���
    averageSpeed = totalDistance / totalTime;

    // �������� १����
    printf("��।�� 袨��?���: %.2f ��/���\n", averageSpeed);

    return 0;
}