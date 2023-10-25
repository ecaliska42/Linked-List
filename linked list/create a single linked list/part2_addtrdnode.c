#include <stdio.h>
#include <stdlib.h>

/*
there are 2 possible methods of adding a third node to the second
    1. allocate memory (like we did in part1 for current)
    2. set the link of the link of head to your 3rd node
*/


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
    // the code bellow would be the first method of creating a third node.
    // without the first four arrows of course.
    // but there is a problem with this method because we are unnecessarilly using the pointer current2
    // immagine that you have to create a single linked list for N ammount of nodes
    // then you would have to create N amounts of different pointers
/*
(    
->  struct node *current2 = malloc(sizeof(struct node));
->  current2 -> data = 3;
->  current2 -> link = NULL;
->  current -> link = current2;
)
	_________________       __________________        _________________
	|		|		 |      |       |         |       |       |        |
	|  45 	|&current| ---> |  98   |&current2| --->  |   3   | NULL   |
	|_______|________|      |_______|_________|       |_______|________|
        ↑       ↑               ↑       ↑                 ↑
       head   adress         current  adress           current2
            to current              to current2


    //the second method would be just to set the vallue of the mallocated node
    //the data with your int and set the link to NULL
    //for example:
(
-> current = malloc(sizeof(struct node)); (as you can see I dont create a new varaiable like current2)
-> current -> data = 3;
-> current -> link = NULL;
-> head -> link -> link = current;
)
	_________________       __________________        _________________
	|		|		 |      |       |         |       |       |        |
	|  45 	|&current| ---> |  98   |&current | --->  |   3   | NULL   |
	|_______|________|      |_______|_________|       |_______|________|
        ↑       ↑                                         ↑
       head   adress                                   current
            to current              
*/
}