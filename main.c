#include <stdio.h>

// Задача 1. Сумма трех чисел
void task1() {
    int a, b, c;
    printf("Введите три числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    printf("%d+%d+%d=%d\n", a, b, c, sum);
}

// Задача 2. Сумма и произведение трех чисел
void task2() {
    int a, b, c;
    printf("Введите три числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    int product = a * b * c;
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    printf("%d*%d*%d=%d\n", a, b, c, product);
}

// Задача 3. Разность двух чисел
void task3() {
    int a, b;
    printf("Введите два числа через пробел: ");
    scanf("%d %d", &a, &b);
    int diff = a - b;
    printf("%d\n", diff);
}

// Задача 4. Найти среднее арифметическое цифр числа
void task4() {
    int num;
    printf("Введите четырехзначное число: ");
    scanf("%d", &num);
    int sum = 0;
    int count = 0;
    int temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
        count++;
    }
    float average = (float)sum / count;
    printf("%.2f\n", average);
}

int main() {
    task1();
    task2();
    task3();
    task4();
    return 0;
}
