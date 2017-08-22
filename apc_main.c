#include <stdio.h>
#include <apc.h>

int main()
{
	dlist_t *head1 = NULL, *head2 = NULL, *result = NULL;

	char array[1000], ch;

	int option;

	do
	{

		/*Read the option*/
		printf("Enter the option : \n\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\nChoose : ");
		scanf("%d", &option);

		switch (option)
		{
			case 1:

				/*Read the number1*/
				printf("Enter the number 1 :");
				scanf("%s", array);

				/*invoking the function call to slice the data*/
				slicing_data(array, &head1);

				/*Read the number2*/
				printf("Enter the number 2 :");
				scanf("%s", array);

				/*invoking the function call to slice the data*/
				slicing_data(array, &head2);

				/*invoking the function call to add the numbers*/
				result = apc_addition(head1, head2);

				/*invoking the function call to print the result*/
				dl_print_list(result);

				/*deleting the lists*/
				dl_del_list(&head1);

				dl_del_list(&head2);

				dl_del_list(&result);

				break;

			case 2:

				/*Read the number1*/
				printf("Enter the number 1 :");
				scanf("%s", array);

				/*invoking the function call to slice the data*/
				slicing_data(array, &head1);

				/*Read the number2*/
				printf("Enter the number 2 :");
				scanf("%s", array);

				/*invoking the function call to slice the data*/
				slicing_data(array, &head2);

				/*invoking the function call to subtract the numbers*/
				result = apc_subtraction(head1, head2);

				/*invoking the function call to print the result*/
				dl_print_list(result);

				/*deleting the lists*/
				dl_del_list(&head1);

				dl_del_list(&head2);

				dl_del_list(&result);

				break;

			case 3:

				/*Read the number1*/
				printf("Enter the number 1 :");
				scanf("%s", array);

				/*invoking the function call to slice the data*/
				slicing_data(array, &head1);

				/*Read the number2*/
				printf("Enter the number 2 :");
				scanf("%s", array);

				/*invoking the function call to slice the data*/
				slicing_data(array, &head2);

				/*invoking the function call to Multiply the numbers*/
				result = apc_multiplication(head1, head2);

				/*invoking the function call to print the result*/
				dl_print_list(result);

				/*deleting the lists*/
				dl_del_list(&head1);

				dl_del_list(&head2);

				dl_del_list(&result);

				break;

			case 4:

				/*Read the number1*/
				printf("Enter the number 1 :");
				scanf("%s", array);

				/*invoking the function call to slice the data*/
				slicing_data(array, &head1);

				/*Read the number2*/
				printf("Enter the number 2 :");
				scanf("%s", array);

				/*invoking the function call to slice the data*/
				slicing_data(array, &head2);

				/*invoking the function call to divide the numbers*/
				result = apc_division(head1, head2);

				/*invoking the function call to print the result*/
				dl_print_list(result);

				/*deleting the lists*/
				dl_del_list(&head1);

				dl_del_list(&head2);

				dl_del_list(&result);

				break;

			default :

				printf("Check the option : \n");

				break;

		}

		/*read the continue option*/
		printf("Do you want to continue : \n");
		scanf("\n%c", &ch);

	} while (ch == 'y');

	return 0;
}
