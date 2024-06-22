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
void DisplayPalindrome(PNODE First)
{
	while (First != NULL)
	{
		int iNo = First->Data,Rev=0;
		while (iNo > 0)
		{
			Rev = (Rev * 10) + iNo % 10;
			iNo = iNo / 10;
		}
		if (First->Data == Rev)
		{
			printf("\n%d is Palindrome\n", Rev);
		}
		First = First->Next;
	}
}

int main()
{
	PNODE Head = NULL;
	
    InsertFirst(&Head, 89);
	InsertFirst(&Head, 6);
	InsertFirst(&Head, 414);
	InsertFirst(&Head, 17);
	InsertFirst(&Head, 28);
	InsertFirst(&Head, 11);

	DisplayPalindrome(Head);

	free(Head);
	return 0;
}