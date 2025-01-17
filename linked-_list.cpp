#include<iostream>
using namespace std;

class Node
{
    public:
        int info;
        Node *link;

        void Insert();
        void Display();
        void Delete();
};
Node *head,*temp;
void Node::Insert()
{
    int data;
    cout<<"\nEnter element : ";
    cin>>data;
    Node *newNode = new Node;
    newNode->info = data;
    newNode->link = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else{
        temp=head;
        while (temp->link != NULL)
        {
            temp = temp->link 
        }
        temp->link = newNode;
    }
}

void Node::Display()
{
    if (head == NULL)
    {
        cout<<"\nList is empty";
    }
    else{
        temp=head;
        while (temp != NULL)
        {
            cout<<"\t"<<temp->info;
            temp = temp->link;
        }
    }
}

void Node::Delete()
{
    if (head == NULL)
    {
        cout<<"\nList is empty";
    }
    else if (head->link == NULL)
    {
        cout<<"\nDeleted element : "<<head->info;
        delete head;
        head = NULL;
    }
    else
    {
        Node *move;
        temp=head;
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        move = temp->link;
        cout<<"\nDeleted : "<<move->info;
        temp->link = NULL;
        delete move;
    }
}

int main()
{
    Node n;
    int ch;
    while (1)
    {
        cout<<"\n1.Insert 2.Display 3.Delete 4.Exit";
        cout<<"\nEnter choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            n.Insert();
            break;
        case 2:
            n.Display();
            break;
        case 3:
            n.Delete();
            break;
        case 4:
            exit(0);
        }
    }
    
}

