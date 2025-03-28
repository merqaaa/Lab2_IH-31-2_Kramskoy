#include <stdio.h>

int main() {
    double distance1 = 120, distance2 = 80;  // В?дстань для кожного в?др?зка
    double time1 = 2, time2 = 1;  // Час для кожного в?др?зка
    double totalDistance, totalTime, averageSpeed;

    // Обчислюємо загальну в?дстань ? загальний час
    totalDistance = distance1 + distance2;
    totalTime = time1 + time2;

    // Обчислюємо середню швидк?сть
    averageSpeed = totalDistance / totalTime;

    // Виводимо результат
    printf("Середня швидк?сть: %.2f км/год\n", averageSpeed);

    return 0;
}