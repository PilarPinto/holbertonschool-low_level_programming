#include <stdio.h>

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
};
int i;

while (op.ops[i] != NULL)
	i++;

return (f.ops[i]);
}
