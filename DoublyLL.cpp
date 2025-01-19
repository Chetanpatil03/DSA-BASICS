#include<iostream>
using namespace std;
class Node
{
    int data;
    Node *right;
    Node *left;

    public:
        void f_insert();
        void f_del();
        void r_insert();
        void r_del();
        void f_dis();
        void r_dis();

};

Node *temp = NULL,*head = NULL;


void Node::f_insert(){
    int d;
    cout<<"\nEnter element :: ";
    cin>>d;

    Node *newNode = new Node;
    newNode->data = d;
    newNode->left = NULL;
    newNode->right = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        head->left = newNode;
        newNode->right = head;
        head = newNode;
    }
}

void Node::r_insert(){
    int d;
    cout<<"\nEnter element :: ";
    cin>>d;

    Node *newNode = new Node;
    newNode->data = d;
    newNode->left = NULL;
    newNode->right = NULL;

    if (head == NULL)
    {
        head = newNode;
    }    
    else
    {
        temp = head;
        while (temp->right != NULL)
        {
            temp = temp->right;
        }

        temp->right = newNode;
        newNode->left = temp;
    }
}

void Node::f_del()
{
    if (head == NULL)
    {
        cout<<"\nList is Empty....";
        return;
    }
    else if (head->right ==NULL)
    {
        delete head;
        cout<<"\nDeleted element :: "<<head->data;
        head = NULL;
    }
    else
    {
        temp = head;
        head=head->right;
        cout<<"\nDeleted element :: "<<temp->data;
        delete temp;
    }
}

void Node::r_del()
{
    if (head == NULL)
    {
        cout<<"\nList is Empty....";
    }
    else if (head->right ==NULL)
    {
        delete head;
        cout<<"\nDeleted element :: "<<head->data;
        head = NULL;
    }
    else
    {
        temp = head;
        while (temp->right->right != NULL)
        {
            temp = temp->right;
        }
        Node *n;
        n= temp->right;
        cout<<"\nDeleted element :: "<<n->data;
        temp->right = NULL;
        delete n;
    }
}

void Node::f_dis()
{
    if (head == NULL)
    {
        cout<<"\nEmpty list ......";
    }
    else
    {
        temp = head;
        cout<<"\nList Elements are : ";
        while (temp !=NULL)
        {
            cout<<"\t"<<temp->data;
            temp = temp->right;
        }
    }
    
}
void Node::r_dis()
{
    if (head == NULL)
    {
        cout<<"\nEmpty list ......";
    }
    else
    {
        temp = head;

        while (temp->right !=NULL)
        {
            // cout<<temp->data;
            temp = temp->right;
            
        }

        cout<<"\nList Elements are : ";
        Node *n = temp;
        while (n != nullptr)
        {
            cout<<"\t"<<n->data;
            n = n->left;
        }
    }   
}

int main()
{
    int ch;
    Node n;
    while (1)
    {
        cout<<"\n1.InsertAtFront 2.InsertAtEnd 3.DeleteAtFront 4.DeleteAtEnd 5.DisplayFront 6.DisplayEnd 7.Exit";
        cout<<"\nEnter choice :: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            n.f_insert();
            break;
        case 2:
            n.r_insert();
            break;
        case 3:
            n.f_del();
            break;
        case 4:
            n.r_del();
            break;
        case 5:
            n.f_dis();
            break;
        case 6:
            n.r_dis();
            break;
        case 7:
            exit(0);
        
        }
    }
    
}