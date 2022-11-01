#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* function sumerize */
int op_add(int a, int b);
/* function substraction */
int op_sub(int a, int b);
/* function multiplication */
int op_mul(int a, int b);
/* function division */
int op_div(int a, int b);
/* function modulo */
int op_mod(int a, int b);
/* function that select correct function to perform the operation */
int (*get_op_func(char *s))(int, int);


#endif
