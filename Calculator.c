#include <stdio.h>

int main()
{
    int a;
    char sign;
    int b;

    printf("vvedite sign:");
    scanf(" %c", &sign);

    printf("vvedite 1 znachenie:");
    scanf("%d", &a);

    printf("vvedite 2 znachenie:");
    scanf("%d", &b);

    switch (sign)
    {
    case '+':
        printf("otvet = %d", a + b);
        break;
    case '-':
        printf("otvet = %d", a - b);
        break;
    case '*':
        printf("otvet = %d", a * b);
        break;
    case '/':
        printf("otvet = %d", a / b);
        break;
    default:
        printf("da poshel ti");
    }
    return 0;
}