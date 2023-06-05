#include<iostream>
using namespace std;

class Queue
{
    private:
    int arr[10];
    int front;
    int rear;
    public:
    Queue()
    {
        front=-1;
        rear=-1;
    }
    void insert()
    {
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
            cout<<"enter element :";
            cin>>arr[rear];
        }
        else if(rear==10)
        {
            cout<<"overflow \n";
            return;
        }
        else
        {
            rear=rear+1;
            cout<<"enter element:";
            cin>>arr[rear];
        }
    }
    void deletion()
    {
        if(front==-1 && rear==-1)
        {
            cout<<"underflow"<<endl;
        }
        else if(front==10)
        {
            cout<<"queue is empty"<<endl;
            rear=-1;
            front=-1;
        }
        else
        {
            
            cout<<"Deleted item is: "<<arr[front]<<endl;
            front=front+1;
        }
    }
    void isempty()
    {
        if(front==0 && rear==10)
        {
            cout<<"queue is not empty!"<<endl;
        }
        if(front==-1 && rear==-1)
        {
            cout<<"queue is empty!"<<endl;
        }
        else{
            cout<<"queue is not empty!"<<endl;
        }
    }

     void isfull()
    {
        if(front==0 && rear==10)
        {
            cout<<"queue is full"<<endl;
        }
        if(front==-1 && rear==-1)
        {
            cout<<"queue is not full"<<endl;
        }
        else{
            cout<<"queue is not full"<<endl;
        }
    }
    void peek()
    {
        if(front==-1)
        {
            cout<<"underflow"<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }

    void traverse()
    {
        cout<<"The elements in queue are: \n";
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void search(int element)
    {
        for(int i=front;i<=rear;i++)
        {
            if(arr[i]==element)
            {
                cout<<"Yes! it is present "<<endl;
            }
        }
    }
};

void queue_operation()
{
    cout<<"The basic operations performed on queue are: \n1. insert\t2. deletion\n3. isfull\t4. isempty\n5. peek \t6. traverse\n7. search"<<endl;
    cout<<"If you want to exit from operation then press 0"<<endl;
    cout<<"If you want to perform the above operations Then write the operation index as given above"<<endl<<endl;


    Queue queue;        //creating an object


    int n=1;

    while(n>0)
    {
        int s;
        cout<<"which opeartion are you want to perform :";
        cin>>s;
        switch(s)
        {
            case 0:
            {
            n=0;
            break;
            }

            case 1:
            {
            queue.insert();
            break;
            }

            case 2:
            {
            queue.deletion();
            break;
            }
            
            case 3:
            {
            queue.isfull();
            break;
            }
            
            case 4:
            {
            queue.isempty();
            break;
            }
            
            case 5:
            {
            queue.peek();
            break;
            }

            case 6:
            {
                queue.traverse();
                break;
            }

            case 7:
            {
                int element;
                cout<<"which element are you want to search , enter element: ";
                cin>>element;
                queue.search(element);
                break;
            }

        }

    }

}

int main()
{

    cout<<"If want to perform queue operations then \n Write queue_operation : ";
    string in_system="queue_operation";
    string enter_by_user;
    getline(cin,enter_by_user);

    if(in_system==enter_by_user)
    {
        queue_operation();
    }
   
    return 0;
}