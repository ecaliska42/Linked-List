#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void print_data(struct node *head)
{
    if (head == NULL)//checks if there is no node prints "Linked List is empty"
        print("Linked List is empty");//this will be printed out if the if-statement above is true
    struct node *ptr = NULL;//create a pointer of type struct node and initialize it to NULL;
    ptr = head;//put the value of head inside ptr (ptr becomes head(the adress to the first node))
    while (ptr != NULL)//since the value of ptr is head(adress of the first node) it will go into this while loop
    {
        printf("%d ", ptr->data);//print the data part of the current node (so 45 then 98 and then 3 will get printed)
        ptr = ptr -> link;//ptr will now be set to point to the second node in our list (since link is the adress of our second node)
    }//at the end of our loop ptr will become NULL (because we set the link of our 3rd node to NULL)
}


int main(void)
{
    print_data(head)//after creating the linked list we can print the nodes with sending in the head
}
/* this is the head
	_________________       __________________        _________________
	|		|		 |      |       |         |       |       |        |
	|  45 	|&current| ---> |  98   |&current | --->  |   3   | NULL   |
	|_______|________|      |_______|_________|       |_______|________|
        ↑       ↑                                         ↑
       head   adress                                   current
            to current              
*/