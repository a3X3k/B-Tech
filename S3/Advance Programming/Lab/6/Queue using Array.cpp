#include <iostream>
#define MAX_SIZE 10
using namespace std;
 
class Queue 
{
    private:
        int myqueue[MAX_SIZE], front, rear;
     
    public:
        Queue()
        {
            front = -1;
            rear = -1;
        }
     
        bool isFull()
        {
            if(front == 0 && rear == MAX_SIZE - 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
     
        bool isEmpty()
        {
            if(front == -1) 
            {
                return true;
            }
            else
            {
                return false;
            }
        }
     
        void enQueue(int value)
        {
            if(isFull())
            {
                cout<<"\nQueue is full";
            } 
            else 
            {
                if(front==-1) front = 0;
                rear++;
                myqueue[rear]=value;
            }
        }
        int deQueue()
        {
            int value;
            if(isEmpty())
            {
                cout<<"Queue is empty"; 
            } 
            else 
            {
                value=myqueue[front];
                if(front==rear)
                { 
                    front = -1;
                    rear = -1;
                } 
                else 
                {
                    front++;
                }
                cout<<endl<<"Deleted the Element "<<value<<" from the Queue.";
            }
        }
     
        void displayQueue()
        { 
            int i;
            if(isEmpty()) 
            {
                cout<<"Queue is Empty!!";
            }
            else 
            {
                cout<<"The Queue is : ";
                for(i=front;i<=rear;i++)
                {
                    cout<<myqueue[i]<<" ";
                }
            }
}

};

int main()
{
    Queue q;
    
    q.enQueue(1); 
    q.enQueue(2); 
    q.enQueue(3); 
    q.enQueue(4); 
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7); 
    q.enQueue(8); 
    q.enQueue(9);
    q.enQueue(10); 
    q.displayQueue();
     
    q.deQueue();
    cout<<"\n";
    q.displayQueue();
     
    return 0;
}