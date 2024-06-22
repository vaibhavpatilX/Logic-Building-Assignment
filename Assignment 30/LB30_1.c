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
void Reverse(PNODE First)
{
	int iNo = 0, Rev = 0, n1 = 0;

	while (First != NULL)
	{
		iNo = First->Data;
		printf("Reverse Of ");
		n1=printf("%d is",First->Data);
		while (iNo>0)
		{
			Rev = (Rev * 10) + iNo % 10;
			iNo = iNo / 10;
		}
		printf(" |%0*d|\n",n1-3, Rev);
		Rev = 0;
		First = First->Next;
	}

}
int main()
{
	PNODE Head = NULL;
	
    InsertFirst(&Head, 89);
	InsertFirst(&Head, 6);
	InsertFirst(&Head, 41);
	InsertFirst(&Head, 17);
	InsertFirst(&Head, 28);
	InsertFirst(&Head, 11);

	Reverse(Head);

	free(Head);
	return 0;
}