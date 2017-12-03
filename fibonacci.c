#include <stdio.h>

#define amount 10
#define first 0
#define second 1

typedef struct
{
	int numarr[amount];	
} itemtype;

int create_fibonacci(itemtype *p)
{
	int i, tmp, tmp2;
	
	//assign value to first and second index
	p->numarr[0] = first;
	p->numarr[1] = second;

	//calculate next index
	for (i = 2; i < amount; i++)
	{
		tmp = p->numarr[i - 2];
		tmp2 = p->numarr[i - 1];
		p->numarr[i] = tmp + tmp2;
	}

	return 0;
}

int show_fibonacci(itemtype *p)
{
	int i, tmp, sum;
	sum = 0;

	//display all of values
	for (i = 0; i < amount; i++)
	{
		tmp = p->numarr[i];
		
		printf("%d", tmp);
		printf(" ");

		//calculate sum from all
		sum = sum + tmp;
	}

	//show sum value
	printf("\n\nSum is %d", sum);

	return 0;
}

int main()
{
	itemtype p;
	
	if (amount < 3) 
	{
		printf("Amount value must be 3 or more.");
	}
	else
	{
		create_fibonacci(&p);
		show_fibonacci(&p);
	}

	getchar();

	return 0;
}