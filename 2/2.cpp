#include <stdio.h>

int main() {
    int numberOfItems;
    double pricePerItem, totalCost;

    // Зчитуємо к?льк?сть товар?в та ц?ну за одиницю
    printf("Введ?ть к?льк?сть товар?в: ");
    scanf_s("%d", &numberOfItems);  // Використовуємо scanf_s
    printf("Введ?ть ц?ну за одиницю товару: ");
    scanf_s("%lf", &pricePerItem);  // Використовуємо scanf_s

    // Обчислюємо загальну варт?сть
    totalCost = numberOfItems * pricePerItem;

    // Виводимо результат
    printf("Загальна варт?сть покупки: %.2f гривень\n", totalCost);

    return 0;
}
