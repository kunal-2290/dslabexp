#include<stdio.h>
int stack[100] , choice , n , top , i , x ;
void push(void);
void pop(void);
void display(void);
void peek(void);

int main(){

	top = -1 ;
	printf("Enter the size of the stack less than 100 \n");
	scanf("%d",&n);
	do{
		printf("Enter your choice \n 1.Push \n 2.Pop \n 3.Peek \n 4.Display \n 5.Exit \n");
        scanf("%d" , &choice);
        switch(choice)
        {
        	case 1:
        	     push();
        	     break;
            case 2:
        	     pop();
        	     break;
        	case 3:
        	     peek();
        	     break;      
            case 4:
        	     display();
        	     break;
        	case 5:
        	     printf("Exit");
        	     break;     
            default : 
               printf("ïnvalid choice"); 
             }
	}while (choice != 5);
}

void push(){
	if(top >= n-1){
		printf("stack is overflow");
	}
	else {
		printf("Enter a value to push ");
		scanf("%d",&x);
		top++;
		stack[top] = x;
	}
}

void pop(){
	if(top <= -1){
		printf("stack is empty");
	}else{
		printf("the poped element is %d \n" , stack[top]);
		top--;
	}
}
void peek(){
   printf("the top most elemets is %d" ,stack[top]);
}
void display(){
	if(top >= 0){
		printf("\n the elements in stack \n");
		for(i =top ;i >=0;i--)
			printf("\n%d",stack[i]);
		printf("\n Press next choice \n");
	}
	else{
		printf("\n the stack is empty");
	}
}

