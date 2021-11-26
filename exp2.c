#include<stdio.h>
#include<conio.h>
void insert(void);
void delete(void);
void display(void);

int queue[100] , n ,choice , i;
int front = -1 ;
int rear = -1;

int main(){

   printf("Size of queue(size should be less than 100) : ") ;
   scanf ("%d" , &n);
   do
   {
     printf("enter the choice : \n1.insert \n2.delete \n3.display \n4.exit \n");
     scanf("%d" , &choice);
     switch(choice)
     {
         case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exit");
            break;
        
        default:
            printf("give correct choice ");
     }
   } while(choice !=4);
}

void insert(){

    int num ;
    if(rear >= n-1)
      printf("Queue is overflow. \n");
    
    else{
        if(front == -1)
           front =0;
           //rear == 0
        printf("give element to insert : ");
        scanf("%d" , &num);
        rear = rear +1 ;
        queue[rear] = num ;
    }
}

void delete(){
    if(front == -1 || front > rear)
    {
        printf("queue is underflow \n");
        
    }
    else
    {
        printf("Elements deleted from is : %d " , queue[front]);
        front = front + 1 ;
    }
}

void display(){
     if(front == -1)
     printf("queue is empty \n ");
     else
    {
      for(i == front ; i<= rear ;i++)
         printf("%d " , queue[i]);
         printf("\n");
     }    

}
