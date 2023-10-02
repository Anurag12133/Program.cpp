#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        cout << "Memory is free for the selected position." << endl;
    }
};
void push(Node *&tail, Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void push2(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        tail = newnode;
        head - newnode;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertnode(Node *&tail, Node *&head, int data, int position)
{
    Node *temp = head;
    int cnt = 1;
    if (position == 1)
    {
        push(tail, head, data);
        return;
    }
    if (temp->next == NULL)
    {
        push2(tail, head, data);
        return;
    }
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void deletenode(Node *&head, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        Node *temp = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        temp->prev = NULL;
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *tail = n1;
    push(tail, head, 12);
    push(tail, head, 34);
    print(head);
    push2(tail, head, 33);
    print(head);
    insertnode(tail, head, 20, 5);
    print(tail);
    deletenode(head, 3);
    print(head);
    return 0;
}