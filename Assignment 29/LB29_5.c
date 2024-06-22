#include<stdio.h>
#include<malloc.h>

typedef struct {
	int Data;
	struct NODE* Next;
}NODE;

typedef NODE* PNODE;
typedef NODE** PPNODE;

void InsertFirst(PPNODE First, int iNo)
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
	return;
}

void SumDigit(PNODE First)
{
	while (First != NULL)
	{
		int Sum = 0, Num = 0;
		Num = First->Data;
		while (Num > 0)
		{
			Sum += Num % 10;
			Num = Num / 10;
		}
		printf(" %d ", Sum);
		First = First->Next;
	}
	return;
}


int main()
{
	NODE* Head = NULL;

	InsertFirst(&Head, 640);
	InsertFirst(&Head, 240);
	InsertFirst(&Head, 320);
	InsertFirst(&Head, 230);
	InsertFirst(&Head, 110);

	printf("\n");

    printf("Additions of digits of element are : ");

	SumDigit(Head);
    
	printf("\n");
	return 0;
}