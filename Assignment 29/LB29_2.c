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
void DisplayPerfect(PNODE First)
{
	while (First != NULL)
	{
		if (First->Data % 2 == 0)
		{
			printf("\t%d", First->Data);
		}
		First = First->Next;
	}
	return;
}
void DisplayPrime(PNODE First)
{
	while (First != NULL)
	{
		int i = 2;

		while (i <= (First->Data / 2))
		{
			if (First->Data % i == 0)
			{
				break;
			}
			i++;
		}
		if (i > First->Data / 2)
		{
			printf("\t%d", First->Data);
		}
		First = First->Next;
	}
	return;
}

int main()
{
	NODE* Head = NULL;

	InsertFirst(&Head, 89);
	InsertFirst(&Head, 6);
	InsertFirst(&Head, 41);
	InsertFirst(&Head, 17);
	InsertFirst(&Head, 28);
	InsertFirst(&Head, 11);

	printf("\n");

    printf("Perfect numbers are : ");

	DisplayPerfect(Head);

    printf("\n");

    printf("Prime numbers are : ");

	DisplayPrime(Head);

	printf("\n");
    
	return 0;
}