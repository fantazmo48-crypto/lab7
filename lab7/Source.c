#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, ".UTF-8");
    Work1Switch();
    Work2Calculator();
	Homework();
    return 0;
}

int Work1Switch()
{ 
    char c;
    puts("Задание 1\n");
    printf_s("Введите символ: ");
    scanf_s(" %c", &c, 1);

    switch (c)
    {
        // Цифры
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf_s("Это цифра.\n\n\n\n");
        break;

        // Строчные английские буквы
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':

        // Заглавные английские буквы
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        printf_s("Это буква.\n\n\n\n");
        break;

    default:
        printf_s("Это неизвестный символ.\n\n\n\n");
        break;
    }

    return 0;
}

int Work2Calculator()
{
    float x, y;
    char c;
    int degree;
	puts("Задание 2\n");
    printf_s("Введите выражение в формате: число операция число\n");
    printf_s("Например: 5 + 3\n");
    printf_s("Доступные операции: +, -, *, /, ^\n\n");

    // Ввод двух чисел и символа операции
    if (scanf_s("%f %c %f", &x, &c, 1, &y) != 3)
    {
        printf_s("Ошибка ввода данных.\n\n\n\n");
        return 1;
    }

    switch (c)
    {
    case '+':
        printf_s("%.2f + %.2f = %.2f\n\n\n\n", x, y, x + y);
        break;

    case '-':
        printf_s("%.2f - %.2f = %.2f\n\n\n\n", x, y, x - y);
        break;

    case '*':
        printf_s("%.2f * %.2f = %.2f\n\n\n\n", x, y, x * y);
        break;

    case '/':
        if (y != 0.0f)
        {
            printf_s("%.2f / %.2f = %.2f\n\n\n\n", x, y, x / y);
        }
        else
        {
            printf_s("Ошибка: деление на ноль невозможно.\n\n\n\n");
        }
        break;

    case '^':
        /*
         * Для операции возведения в степень
         * второе введённое число должно быть целым.
         */
        degree = (int)y;

        if (degree < 0)
        {
            printf_s("Ошибка: степень должна быть неотрицательной.\n\n\n\n");
        }
        else
        {
            printf_s("%.2f ^ %d = %.2f\n\n\n\n",
                x, degree, pow(x, degree));
        }
        break;

    default:
        printf_s("Ошибка: неизвестная операция '%c'.\n\n\n\n", c);
        break;
    }

    return 0;
}

int Homework()
{
    int month;
    int year;
    int days;
    puts("Домашняя работа");
    printf_s("Введите номер месяца (1–12): ");
    if (scanf_s("%d", &month) != 1) {
        printf_s("Ошибка: введите целое число.\n");
        return 1;
    }

    switch (month) {
    case 1:
        days = 31;
        break;
    case 2:
        printf_s("Введите год: ");
        if (scanf_s("%d", &year) != 1) {
            printf_s("Ошибка: введите целое число.\n");
            return 1;
        }

        // Високосный год: кратен 400
        // или кратен 4, но не кратен 100
        days = (year % 400 == 0 ||
            (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
        break;
    case 3:
        days = 31;
        break;
    case 4:
        days = 30;
        break;
    case 5:
        days = 31;
        break;
    case 6:
        days = 30;
        break;
    case 7:
        days = 31;
        break;
    case 8:
        days = 31;
        break;
    case 9:
        days = 30;
        break;
    case 10:
        days = 31;
        break;
    case 11:
        days = 30;
        break;
    case 12:
        days = 31;
        break;
    default:
        printf_s("Ошибка: номер месяца должен быть от 1 до 12.\n");
        return 1;
    }

    printf_s("В этом месяце %d дней.\n", days);

    return 0;
}