#include <stdio.h>

int main() {
    int numberOfItems;
    double pricePerItem, totalCost;

    // ����� �?��?��� ⮢��?� � �?�� �� �������
    printf("����?�� �?��?��� ⮢��?�: ");
    scanf_s("%d", &numberOfItems);  // ������⮢�� scanf_s
    printf("����?�� �?�� �� ������� ⮢���: ");
    scanf_s("%lf", &pricePerItem);  // ������⮢�� scanf_s

    // ������ ������� ����?���
    totalCost = numberOfItems * pricePerItem;

    // �������� १����
    printf("�����쭠 ����?��� ���㯪�: %.2f �ਢ���\n", totalCost);

    return 0;
}
