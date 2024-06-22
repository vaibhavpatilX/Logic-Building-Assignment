#include<stdio.h>
#include<malloc.h>

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

struct Node{
	int Data;
	NODE* Next;
};

void InsertFirst(PPNODE Head, int iNo)
{
	PNODE Newn = NULL;
	
	Newn = (PNODE)malloc(sizeof(NODE));

	Newn->Data = iNo;
	Newn->Next = NULL;

	if (*Head == NULL)
	{
		*Head = Newn;
	}
	else
	{
		Newn->Next = *Head;
		*Head = Newn;
	}
}
void  SearchFirstOcc(PNODE First, int iNo)
{
	if (First == NULL)
	{
		printf("\nLinkedlist Is Empty");
	}
	else
	{
		int i = 1;
		while (First != NULL)
		{
			if (First->Data == iNo)
			{
				printf("\nFirst Occurrence Of %d is at Position %d\n", iNo, i);
				break;
			}
			i++;
			First = First->Next;
		}
	}
}
void SearchLastOcc(PNODE First, int iNo)
{
	if (First == NULL)
	{
		printf("\nLinkedlist is Empty ");
	}
	else
	{
		int i = 1,j=0;
		while (First != NULL)
		{
			if (First->Data == iNo)
			{
				j = i;
			}
			i++;
			First = First->Next;
		}
		if (j != 0)
		{
			printf("\nLast Occurrence Of %d at Position %d\n", iNo, j);
		}
		else
		{
			printf("\n%d Is Not Present in the Linkedlist \n", iNo);
		}
	}
}
int Addition(PNODE First)
{
	int i = 0;
	while (First != NULL)
	{
		i += First->Data;
		First = First->Next;
	}
	return i;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;

    InsertFirst(&Head, 10);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 30);
	InsertFirst(&Head, 40);

	SearchFirstOcc(Head, 30);
	SearchLastOcc(Head, 30);

	printf("\nAddition Of All Elements Is %d \n", Addition(Head));

	return 0;
}