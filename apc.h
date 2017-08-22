#ifndef APC_H
#define APC_H

#include <dlist.h>

void reverse_str(char *string);

void slicing_data(char *string, dlist_t **head);

void swap_list(dlist_t **ptr_1, dlist_t **ptr_2);

int get_carry(int *ptr_value);

dlist_t *apc_addition(dlist_t *head_1, dlist_t *head_2);

dlist_t *apc_subtraction(dlist_t *head_1, dlist_t *head_2);

void add_zeros(dlist_t **head, int limit);

void calculate_limits(int value, int *limit_1, int *limit_2);

dlist_t *apc_multiplication(dlist_t *head_1, dlist_t *head_2);

dlist_t *get_quotient(dlist_t **head_1, dlist_t *head_2);

dlist_t *apc_division(dlist_t *head_1, dlist_t *head_2);

#endif
