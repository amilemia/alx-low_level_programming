#include "3-calc.h"

/**
 * main - performs simple operations on two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on incorrect number of arguments,
 *         99 on invalid operator, or 100 on division/modulo by zero
 */

int main(int argc, char *argv[])
{
    int num1, num2, result;
    char *op;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    op = argv[2];
    num2 = atoi(argv[3]);

    if (num2 == 0 && (*op == '/' || *op == '%'))
    {
        printf("Error\n");
        exit(100);
    }

    if (get_op_func(op) == NULL || op[1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    result = get_op_func(op)(num1, num2);

    printf("%d\n", result);

    return (0);
}
