#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void zadanie1()
{
    char c;
    printf("1. Введите символ: ");
    scanf(" %c", &c);

    switch (c)
    {
    case 'a':
        printf("Введено 'a'.\n");
        break;
    case 'b':
        printf("Введено 'b'.\n");
        break;
    default:
        if (c >= '0' && c <= '9')
            printf("Это цифра\n");
        else
            printf("Это буква\n");
    }
}

void zadanie2()
{
    float x, y, res;
    char op;

    printf("2. Введите выражение (например 2+3): ");
    scanf("%f%c%f", &x, &op, &y);

    switch (op)
    {
    case '+':
        printf("=%f\n", x + y);
        break;
    case '-':
        printf("=%f\n", x - y);
        break;
    case '*':
        printf("=%f\n", x * y);
        break;
    case '/':
        if (y != 0)
            printf("=%f\n", x / y);
        else
            printf("Деление на ноль\n");
        break;
    case '^':
        res = 1;
        for (int i = 0; i < (int)y; i++)
            res = res * x;
        printf("=%f\n", res);
        break;
    default:
        printf("Неизвестная операция\n");
    }
}


int main()
{
    setlocale(LC_CTYPE, "RUS");

    zadanie1();
    zadanie2();

    return 0;
}
