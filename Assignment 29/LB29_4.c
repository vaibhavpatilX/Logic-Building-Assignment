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

void SecMaximum(PNODE First)
{
	int Max1, Max2;

	Max2 = Max1 = First->Data;

	while (First != NULL)
	{
		if (First->Data > Max1)
		{
			Max2 = Max1;
			Max1 = First->Data;
		}
		else if (First->Data > Max2)
		{
			Max2 = First->Data;
		}
		First = First->Next;
	}
	printf("%d\n", Max2);
}

int main()
{
	NODE* Head = NULL;

	InsertFirst(&Head, 240);
	InsertFirst(&Head, 320);
	InsertFirst(&Head, 230);
	InsertFirst(&Head, 110);

	printf("\n");

    printf("Additions of second maximum element is : ");

	SecMaximum(Head);

	return 0;
}