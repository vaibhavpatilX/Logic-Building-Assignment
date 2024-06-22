#include<stdio.h>
#include<malloc.h>

typedef struct {
	int Data;
	struct NODE* Next;
}NODE;

typedef NODE* PNODE;
typedef NODE** PPNODE;

void InsertFirst(PPNODE First,int iNo)
{
	PNODE Newn = NULL;
	Newn = (PNODE)malloc(sizeof(NODE));

	Newn->Data = iNo;
	Newn->Next = NULL;

	if (*First == NULL)
	{
		*First = Newn;
	}
	else
	{
		Newn->Next = *First;
		*First = Newn;
	}
}

void DisplayProduct(PNODE First)
{
	while (First != NULL)
	{
		int iNo = First->Data, Product = 1;
		while (iNo > 0)
		{
			Product = Product * ((iNo % 10 == 0) ? 1 : iNo % 10);
			iNo = iNo / 10;
		}
		printf("Product Of %d is %d\n",First->Data, Product);
		First = First->Next;
	}
}

int main()
{
	PNODE Head = NULL;
	
	InsertFirst(&Head, 41);
	InsertFirst(&Head, 32);
	InsertFirst(&Head, 20);
	InsertFirst(&Head, 11);

	DisplayProduct(Head);

	free(Head);
	return 0;
}