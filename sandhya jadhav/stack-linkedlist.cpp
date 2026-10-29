
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

class stack
{
    private:
    node *top;

    public:
    stack()
    {
        top=NULL;
    }

    int empty()
    {
        if(top==NULL)
            return 1;
        else
            return 0;
    }

    void push(int x)
    {
        node *temp=new node(x);
        temp->next=top;
        top=temp;
    }

    int pop()
    {
        if(empty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        int x=top->data;
        node *temp=top;
        top=top->next;
        delete temp;
        return x;
    }

    int peek()
    {
        if(empty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        return top->data;
    }

    void display()
    {
        if(empty())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }

        node *temp=top;

        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};

int main()
{
    stack s;
    int x;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    x=s.peek();
    cout<<"Top element is "<<x<<endl;

    x=s.pop();
    cout<<"Removed "<<x<<endl;

    s.display();

    s.pop();
    s.pop();
    s.pop();

    return 0;
}


/*PS C:\sandhya jadhav> cd 'c:\sandhya jadhav\output'
PS C:\sandhya jadhav\output> & .\'stack_linked_list.exe'
30
20
10
Top element is 30
Removed 30
20
10
Stack is empty*/