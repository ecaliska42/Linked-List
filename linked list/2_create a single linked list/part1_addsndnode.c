#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main(void)
{
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
/*
    setting head with data to 45 and list to NULL;
	_________________
	|		|		 |
	|  45 	| NULL	 |
	|_______|________|
        ↑
       head
*/
    //create a second node (current) 
    struct node *current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> link = NULL;
/*
    setting current with data to 98 and list to NULL;
	_________________
	|		|		 |
	|  98 	| NULL	 |
	|_______|________|
        ↑
     current
*/
    //update the link part of the first node (head)
    head -> link = current;
/*
    setting head link to the adress current;
	_________________       ________________ 
	|		|		 |      |       |       |
	|  45 	|&current| ---> |  98   | NULL  |
	|_______|________|      |_______|_______|
        ↑       ↑               ↑
       head   adress         current
            to current
*/
}