#include <stdio.h>

int main() {
    int number;

    // Зчитуємо ц?ле число
    printf("Введ?ть ц?ле число: ");
    scanf_s("%d", &number);  // Використовуємо scanf_s

    // Виводимо останню цифру
    printf("Остання цифра числа: %d\n", number % 10);

    return 0;
}
