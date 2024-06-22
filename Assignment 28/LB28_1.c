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
				printf("\nFirst Occurrence Of %d is at Pos %d\n", iNo, i);
				break;
			}
			i++;
			First = First->Next;
		}
	}
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;

    InsertFirst(&Head, 10);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 30);
	InsertFirst(&Head, 40);
	InsertFirst(&Head, 50);
	InsertFirst(&Head, 30);
	InsertFirst(&Head, 70);

	SearchFirstOcc(Head, 30);

	return 0;
}
