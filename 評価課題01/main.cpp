#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct cell
{
	int val;
	struct cell* next;
}CELL;


void Create(CELL* list, int number)
{
	CELL* newcell;
	newcell = (CELL*)malloc(sizeof(CELL));
	newcell->val = number;
	newcell->next = nullptr;
	while (list->next != nullptr)
	{
		list = list->next;
		
	}
	
	list->next = newcell;

}
void Index(CELL* list)
{

	printf("[");
	while (list->next != nullptr)
	{
		list = list->next;
		
		printf("%d,", list->val);
		
	}

	printf("]\n");
}
int main()
{
	int number;
	CELL head;
	head.next = nullptr;

	while (true)
	{
		printf("好きな数字を入力してください\n");
		printf("入力する値: ");
		scanf_s("%d", &number);
		printf("\n入力された値一覧: ");
		
		Create(&head, number);

		Index(&head);
	}
	return 0;
}