                                                     //CRICULAR QUEUE//

//*Aim :- To perform circular queue operations using array*//

🧭 Algorithm:
BEGIN

Initialize front = -1, rear = -1, and read queue size n.

Repeat until user enters “no”:
 a. Display menu with choices: Enqueue or Dequeue.
 b. If Enqueue selected:
  i. If (rear + 1) % max_size == front, print Queue Overflow.
  ii. Else if front == -1, set front = 0, rear = 0.
  iii. Else, set rear = (rear + 1) % max_size.
  iv. Insert new element at queue[rear].
 c. If Dequeue selected:
  i. If front == -1, print Queue Underflow.
  ii. Else, set item = queue[front].
  iii. If front == rear, set both front and rear to -1.
  iv. Else, set front = (front + 1) % max_size.
  v. Display deleted item.
 d. Ask user if they want to continue.

End when user types “no”.
END

🧭 Code:
#include<stdio.h>
#include<string.h>
int main()
{
    int n, rear, front, max, item, max_size, op;
    char choice[5];

    printf("\n enter the size of queue:\n");
    scanf("%d", &n);
    int queue[n];
    rear = -1;
    front = -1;
    max_size = n;

    do
    {
        printf("\n enter the operation of queue:\n1.enqueue\n2.dequeue\n");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
            {
                if ((rear + 1) % max_size == front)
                {
                    printf("\n queue overflow\n");
                    return 0;
                }
                else
                {
                    if (front == -1)
                    {
                        front = 0;
                        rear = 0;
                    }
                    else
                    {
                        rear = (rear + 1) % max_size;
                    }
                }
                printf("enter the item:\n");
                scanf("%d", &queue[rear]);
                printf("\n entered item: %d\n rear value: %d\n", queue[rear], rear);
                break;
            }

            case 2:
            {
                if (front == -1)
                {
                    printf("\nqueue is underflow\n");
                    break;
                }
                else
                {
                    item = queue[front];
                    if (front == rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                    else
                    {
                        front = (front + 1) % max_size;
                    }
                }
                printf("\ndeleted item = %d\n front value: %d", item, front);
                break;
            }

            default:
            {
                printf("invalid operation");
                return 0;
            }
        }

        printf("\n enter your choice to repeat or not yes or no:\n");
        scanf("%s", choice);

    } while (strcmp(choice, "no"));

    return 0;
}

Output:
--- CIRCULAR QUEUE USING LINKED LIST ---
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter value to enqueue: 4
Element enqueued.

Enter choice: 1
Enter value to enqueue: 8
Element enqueued.

Enter choice: 3
Circular Queue elements: 4 -> 8 -> (back to front)

Enter choice: 2
Element dequeued.

Enter choice: 3
Circular Queue elements: 8 -> (back to front)

Enter choice: 4

Result:
The program successfully implements a Circular Queue using a Linked List.
It performs enqueue, dequeue, and display efficiently, while maintaining the circular connection from rear to front.Aim:
To implement Circular Queue operations such as enqueue, dequeue, and display using a linked list, where the last node links back to the first node.
