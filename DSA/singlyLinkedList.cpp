#include<iostream>
#include <type_traits>
using namespace std;

struct node{

    int data;
    node * next;
    
};

class linkedList
{
    private:
        node *head, *tail;

    public:
        linkedList()
        {
            head = NULL;
            tail = NULL;
        }

        void insertAtBegining(int n);
        void insertAfter(int after, int n);
        void display();
        node* gethead();
        void concatenate(node *a, node *b);
        void deleteNode(int n);

};

void linkedList::insertAtBegining(int n)
{
    node *tmp = new node;
    tmp->data = n;

    if(head == NULL)
    {
        head = tmp;
        tmp->next = NULL;
    }
    else {
        tmp->next = head;
        head = tmp;
    }
}

void linkedList::insertAfter(int after, int n)
{
    node *tmp = new node;
    tmp->data = n;

    node *prev = head;
    while(prev->data != after)
    {
        prev = prev->next;
    }

    tmp->next = prev->next;
    prev->next = tmp;
}

void linkedList::display()
{
    node *tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->data << "->";
        tmp = tmp->next;
    }
    cout << "null" << endl;

}

node* linkedList::gethead()
{
    return head;

}

void linkedList::concatenate(node *a, node *b)
{
    if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }

    else {

        cout << "either a or b is null" << endl;
    }

}

void linkedList::deleteNode(int n)
{
    if(head->data == n)
    {
        head = head->next;
    }
    else {

        node *tmp = head;
        while(tmp->next->data != n)
        {
            tmp = tmp->next;
        }

        tmp->next = tmp->next->next;
    }
}



int main()
{
    linkedList a;
    a.insertAtBegining(5);
    a.insertAtBegining(4);
    a.insertAtBegining(3);
    a.display();

    linkedList b;
    b.insertAtBegining(2);
    b.insertAtBegining(3);
    b.display();

    a.concatenate(a.gethead(), b.gethead());
    a.display();

    a.insertAfter(4, 8);
    a.display();

    a.deleteNode(4);
    a.display();

    a.deleteNode(3);
    a.display();

    return 0;
}