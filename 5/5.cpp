
#include <stdio.h>

int main() {
    int number;

    // Зчитуємо тризначне число
    printf("Введ?ть тризначне число: ");
    scanf_s("%d", &number);

    // Переводимо число у зворотний порядок
    int reversedNumber = 0;
    while (number != 0) {
        int digit = number % 10;       // Отримуємо останню цифру
        reversedNumber = reversedNumber * 10 + digit; // Додаємо її до зворотного числа
        number /= 10;                  // Видаляємо останню цифру з числа
    }

    // Виводимо число у зворотному порядку
    printf("Число в зворотному порядку: %d\n", reversedNumber);

    return 0;
}
