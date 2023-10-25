#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

/*
    created a node;
	________________
	|		|		|
	| data 	| list	|
	|_______|_______|
*/

int main(void)
{
	struct node *head = NULL; // create one pointer head and set it to NULL
	head = (struct node *)malloc (sizeof(struct node)); //allocate memory for struct node (malloc is helping us to create node) (memory has been createt for the node (data (int) and the next part))
	head -> data = 45; //with the help of arrow opperator head can go into node. with the arrow opperator head is accessing the data and it is trying to initialize this datat by 45
	head -> link = NULL;//acces the link part and replact it with NULL
/*
    setting head with data to 45 and list to NULL;
	________________
	|		|		|
	|  45 	| NULL	|
	|_______|_______|
*/
	printf("%d", head -> data);//call the printf function to print the data on the srceen
}