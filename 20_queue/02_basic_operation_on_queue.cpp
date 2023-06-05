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
        else if(rear==9)
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
        else if(front==9 || front>rear)
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
    

    void traverse()
    {
        if(front!=-1 && rear!=-1)
        {
            cout<<"The elements in queue are: \n";
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"the queue is empty"<<endl;
        }
    }

    void search(int element)
    {
        if(front!=-1 && rear!=-1)
        {
            int flag=0;
            for(int i=front;i<=rear;i++)
            {
                if(arr[i]==element)
                {
                    cout<<"Yes! it is present "<<endl;
                    flag=1;
                }
            }
            if(flag==0)
            {
                cout<<"element is not present in queue"<<endl;
            }
        }
        else
        {
            cout<<"not present in queue"<<endl;
        }
    }
};

void queue_operation()
{
    cout<<"The basic operations performed on queue are: \n1. insert\t2. deletion\n3. traverse\t4. search"<<endl;
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
                queue.traverse();
                break;
            }
            
            case 4:
            {
                int element;
                cout<<"which element are you want to search , enter element: ";
                cin>>element;
                queue.search(element);
                break;
            }

            default:
            cout<<"enter a valid index"<<endl;

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