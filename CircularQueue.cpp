#include<iostream>
using namespace std;
int n;
class Queue
{
    int q[10],f,r;
    public:
            void ins();
            void del();
            void dis();
    Queue(){
        f=r=-1;
    }
};

void Queue::ins()
{
    int ele;
    if(((r+1)%n) == f)
    {
        cout<<"Queue is overflow";
    }
    else
    {
        if (f==-1)
        {
            f=0;
        }
        cout<<"\nEnter element : ";
        cin>>ele;
        r=(r+1)%n;
        q[r] = ele;   
    }
}

void Queue::del()
{
    if(f==-1){
        cout<<"Queue is underflow";
    }
    else{
        int ele;
        ele = q[f];
        f=(f+1)%n;
        cout<<"Deleted element is : "<<ele;
        if (f==r)   
        {
            f=r=-1;
        }
    }
}

void Queue::dis()
{
    if(f <= 0){
        cout<<"\nQueue is Empty";
    }
    else
    {
        cout<<"\nQueue elements are :";
        for (int i = r; i >= f; i--)
        {
            cout<<"\t"<<q[i];
        }
    }
    
}

int main()
{
    cout<<"Enter Queue size : ";
    cin>>n;
    Queue qu;
    int ch;
    cout<<"1.Insert 2.Delete 3.Display 4.Exit";
    while (1)
    {
        cout<<"\nEnter choice :";
        cin>>ch;
        switch (ch)
        {
        case 1: qu.ins(); break;
        case 2: qu.del(); break;
        case 3: qu.dis(); break;
        case 4: exit(0);
        default:
            break;
        }
    }
    
}