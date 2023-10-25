#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL) //checks if there is no node prints "node is empty"
        printf("node is empty");//this will be printed out if the if-statement above is true
    struct node *ptr = NULL; //create a pointer of type struct node and initialize it to NULL;
    ptr = head; //put the value of head inside ptr (ptr becomes head(the adress to the first node))
    while (ptr != NULL) //since the value of ptr is head(adress of the first node) it will go into this while loop
    {
        count++; //increment count by 1 (count becomes 1 then 2 then 3 and so on as long as we are in this loop)
        ptr = ptr -> link; //ptr will now be set to point to the second node in our list (since link is the adress of our second node)
    }//at the end of our loop ptr will become NULL (because we set the link of our 3rd node to NULL)
    printf("%d", count);//now we will print out our count (in our case 3 because we only created 3 nodes)
}


int main(void)
{
    count_nodes(head); //after creating the linked list we can count the nodes with sending in the head
}