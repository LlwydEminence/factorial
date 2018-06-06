#include <stdio.h>

int factorial(int number)
{
    return number < 2 ? 1 : number * factorial(number - 1);
}

int main()
{
    printf("Введите число от которого нужно вычислить факториал: ");
    int number = 0;
    scanf("%d", &number);
    printf("Факториал от %d равен %d\n", number, factorial(number));
}
