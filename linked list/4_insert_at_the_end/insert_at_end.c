#include <strio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data)
{
/* this is the head
	_________________       __________________        _________________
	|		|		 |      |       |         |       |       |        |
	|  45 	|&current| ---> |  98   |&current | --->  |   3   | NULL   |
	|_______|________|      |_______|_________|       |_______|________|
        ↑       ↑                                         ↑
       head   adress                                   current
            to current

    ________
    |       |
    |   67  |
    |_______|
        ↑
     int data
*/

    struct node *ptr, *temp;
    prt = head;
    temp = malloc(sizeof(struct node));//create a new node temp

    temp -> data = data;//set the data in temp to 67(int data that i sent in)
    temp -> link = NULL;//set the link to NULL
/*
    setting temp with data to 67 (int data that I sent in) and list to NULL;
	_________________
	|		|		 |
	|  67 	| NULL	 |
	|_______|________|
        ↑
       temp
*/
    while (ptr -> link != NULL)
    {
        ptr = ptr -> link;//go through the nodes until the end see "3_traversing a node")
    }
    ptr -> link = temp;//set the link in the last node to point to the temp node
}

int main(void)
{
    add_at_end(head, 67);
}


int main(void)
{
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
    
    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);
    
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d", ptr -> data);
        ptr = ptr -> link;
    }
}