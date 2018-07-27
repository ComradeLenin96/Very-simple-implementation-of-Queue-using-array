#include	<stdio.h>

#define	SIZE	10

typedef	struct queue {
	int	storage[SIZE];
	int	front;
	int	tail;
}Queue;

void	enQueue(Queue*,	int);
void	deQueue(Queue*);
void	display(Queue*);

int	main()	{
	Queue q,	*Q =	&q;
	Q->front	=	Q->tail	=	-1;
	enQueue(Q,	1);
	enQueue(Q,	2);
	enQueue(Q,	3);
	enQueue(Q,	4);
	enQueue(Q,	5);
	display(Q);
	deQueue(Q);
	deQueue(Q);
	deQueue(Q);
	printf("_______________\n");
	display(Q);
	return	0;
}

void	enQueue(Queue*	q,	int	data)	{
	if (q->tail	==	SIZE	-	1)	{
		printf("Queue is full\n");
		return;
	}	else	{
		if (q->front	==	-1)	q->front	=	0;
		++(q->tail);
		q->storage[q->tail]	=	data;
	}
}

void	deQueue(Queue*	q)	{
	int	data	=	q->storage[q->front++];
}

void	display(Queue*	q){
	for (int i = q->front; i < SIZE; i++)
		printf("q{%d} -> %d\n", i,	q->storage[i]);
}

