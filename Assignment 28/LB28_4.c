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
		printf("\nLinkedlist is Empty");
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
			printf("\nLast Occurrence Of %d is At Position %d\n", iNo, j);
		}
		else
		{
			printf("\n%d is Not Present in Linkedlist \n", iNo);
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
int Maximum(PNODE First)
{
	int i = First->Data;

	while (First != NULL)
	{
		if (i < First->Data)
		{
			i = First->Data;
		}
		First = First->Next;
	}
	return i;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertFirst(&Head, 240);
	InsertFirst(&Head, 320);
	InsertFirst(&Head, 230);
	InsertFirst(&Head, 110);

    SearchFirstOcc(Head, 230);
	SearchLastOcc(Head, 230);
	
    printf("\nAddition Of All Elements is %d \n", Addition(Head));
	printf("\nMaximum Elements is %d \n", Maximum(Head));
	
	return 0;
}