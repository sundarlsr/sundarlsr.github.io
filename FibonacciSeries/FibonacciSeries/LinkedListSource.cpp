//Linked List All
/*

#include<iostream>

using namespace std;

struct node
{
int data;
node *next;
};

void pushatfront(struct node **node1, int data1)
{
struct node *temp = new node();

temp->data = data1;
temp->next = *node1;

*node1 = temp;

}

void appendatend(struct node **node1, int data1)
{
struct node *last = NULL;
struct node *temp1 = new node();
last = *node1;

while (last->next != NULL)
{
last = last->next;
}

temp1->data = data1;
temp1->next = NULL;

last->next = temp1;

//*node1 = last;

}

void reverselist(struct node **node1)
{
struct node *prev = NULL;
struct node *current = *node1;
struct node *nextnode = NULL;


while (current != NULL)
{
nextnode = current->next;
current->next = prev;
prev = current;
current = nextnode;
}

*node1 = prev;
}

void displaydata(struct node *temp)
{
while (temp != NULL)
{
printf("Data is %d \n", temp->data);
printf("Address of data is %u \n", temp->next);
temp = temp->next;
}
}

int main()
{
struct node *head = NULL;

pushatfront(&head, 2);

pushatfront(&head, 5);

displaydata(head);


printf("\n After Append the data \n");
appendatend(&head, 7);

displaydata(head);

printf("\n After reverse the data \n");

reverselist(&head);
displaydata(head);

return 0;
getchar();
}
*/