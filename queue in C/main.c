#include <stdio.h>
# define SIZE 100

int inp_arr[SIZE];
int Rear = - 1;
int Front = - 1;

void enqueue()
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)

        Front = 0;
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
}

void show()
{

    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
}

int main(){
    int i, num,searchingValue;
    for(i = 0 ; i < 100 ; i++)
    {
        num = rand() % 1000 + 1;
        enqueue(num);
    }
    for(i=0; i<100;i++){
        printf("Enter the searhcing value: ");
        scanf("%d", searchingValue);
        if(searchingValue=num){
            printf(i);
        }
        else
            break;
    }
}
