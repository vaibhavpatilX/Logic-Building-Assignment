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

void DisplayLarge(PNODE First)
{
	while (First != NULL)
	{
		int Large = 0, iNo = First->Data;
		while (iNo > 0)
		{
			if (Large < iNo % 10 || iNo == First->Data)
			{
				Large = iNo % 10;
			}
			iNo /= 10;
		}
		printf("Largest Digit Of %d is %d\n",First->Data, Large);
		First = First->Next;
	}
}

int main()
{
	PNODE Head = NULL;
	
	InsertFirst(&Head, 419);
	InsertFirst(&Head, 532);
	InsertFirst(&Head, 250);
	InsertFirst(&Head, 11);

	DisplayLarge(Head);

	free(Head);
	return 0;
}