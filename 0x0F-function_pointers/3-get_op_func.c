#include "calc.h"
#include <stddef.h>

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
};

int i;

int (*get_op_func(char *s))(int a, int b)

{

        if (*s == '+' || *s == '-' || *s == '*' || *s == '/' || *s == '%')

        {

                i = 0;

                while (ops[i].op != s)

                {

                         i++;

                }

                return (ops[i].f);

        }

        return (NULL);

}paste
