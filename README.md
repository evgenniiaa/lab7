## Домашнее задание к работе 7 (вар.32)
### Условие задачи
Написать программу, которая по введенному номеру единицы измерения: 1 – килограмм, 
2 – миллиграмм, 3 – грамм, 4 – тонна, 5 – центнер, и массе M выдавала бы соответствующее 
значение массы в килограммах, например, 5M1 это 5 кг, а 5M4 – 5 тонн

### 1. Блок-схема
<img width="1012" height="1062" alt="lab7 drawio" src="https://github.com/user-attachments/assets/f9165142-c97d-4fc9-b163-e4292105d400" />

### 2. Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void zadanie1()
{
    int n;
    float M;

    printf("Введите номер единицы (1-кг, 2-мг, 3-г, 4-т, 5-ц): ");
    scanf("%d", &n);
    printf("Введите массу M: ");
    scanf("%f", &M);

    switch (n)
    {
    case 1:
        printf("%.3f кг\n", M);
        break;
    case 2:
        printf("%.3f кг\n", M / 1000000.0);
        break;
    case 3:
        printf("%.3f кг\n", M / 1000.0);
        break;
    case 4:
        printf("%.3f кг\n", M * 1000.0);
        break;
    case 5:
        printf("%.3f кг\n", M * 100.0);
        break;
    default:
        printf("Неверный номер\n");
    }
}

int main()
{
    setlocale(LC_CTYPE, ".UTF-8");
    zadanie1();
    return 0;
}
```

### 3. Результат работы программы
```
Введите номер единицы (1-кг, 2-мг, 3-г, 4-т, 5-ц): 3
Введите массу M: 1598
1.598 кг
```
### 4. Информация о разработчике
Федорова Евгения бИД-261
