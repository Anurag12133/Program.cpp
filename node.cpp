#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        // cout<<"Memory is free."<<endl;
    }
};
void insertnewnode(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
//     void insertattail(Node* &tail,int d){
//                Node*temp=new Node(d);
//                tail->next=temp;
//                tail=temp;

//     }
//     void insertatposition(Node* &tail,Node* &head,int position,int d){
//         Node*temp=head;
//         int count=1;
//         if(position==1){
//             insertnewnode(head,d);
//             return;
//         }
//         if(temp->next==NULL){
//             insertattail(tail,d);
//             return;
//         }
//       while(count<position-1){
//             temp=temp->next;
//             count++;
//         }
//         Node* nodetoinsert=new Node(d);
//         nodetoinsert->next=temp->next;
//         temp->next=nodetoinsert;
//         delete temp;

//     }
//     void deletenode(Node* &head,int position){
//             if(position==1){
//           Node* temp=head;
//           head=head-> next;
//           temp->next=NULL;
//           delete temp;
//             }
//             //from middle nad end;
//             Node*curr=head;
//             Node* pre=NULL;
//             int count=1;
//             while(count<position){
//                     pre=curr;
//                     curr=curr->next;
//                     count++;
//             }
//             curr->next=NULL;
//             delete curr;

//     }
//     int countNodes(Node* head)
// {
//     Node* temp = head;
//     int result = 0;
//     if (temp != NULL) {
//         // do {
//             temp = temp->next;
//             result++;
//         // } while (temp != head);
//     }

//     return result;
// }
//     bool iscircular(Node* &head){
//         if(head==NULL){
//             return true;
//         }
//         Node*temp=head->next;
//         while(temp!=NULL && temp!=head){
//             temp=temp->next;
//         }
//         if(temp==head){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// bool checkcycle(Node* &head){
//     if(head==NULL){
//         return false;
//     }
//     map<Node*, bool>visited;
//     Node*temp=head;
//     while(temp!=NULL){
//     if(visited[temp]==true){
//         cout<<"The element where the cycle starts is:"<<temp->data<<endl;
//         return true;
//     }
//     visited[temp]==true;
//     temp=temp->next;
// }
// return false;
// }
//     Node* floyeddetection(Node* &head){
//         if(head==NULL){
//             return NULL;
//         }
//         Node* slow=head;
//         Node* fast=head;
//         while(slow!=NULL && fast!=NULL){
//             fast=fast->next;
//             if(fast!=NULL){
//                 fast=fast->next;
//             }
//             slow=slow->next;
//             if(fast==slow){
//                 return slow;
//             }
//         }
//         return NULL;
//     }
//     Node* gettinghead(Node* &head){
//         if(head==NULL){
//             return NULL;
//         }
//         Node* intersection= floyeddetection(head);
//         Node* slow=head;
//         if(slow!=intersection){
//             slow=slow->next;
//             intersection=intersection->next;
//         }
//         return slow;
//     }
//     void deleteloop(Node* head){
//         if(head==NULL){
//             return;
//         }
//         Node* startofloop=gettinghead(head);
//         Node*temp=startofloop;
//         while(temp->next!=startofloop){
//             temp=temp->next;
//         }
//         temp->next=NULL;
//     }
//      Node* deleteDuplicates(Node* &head) {

//     if(head==NULL){
//         return NULL;
//     }
//     Node* curr=head;
//     while(curr!=NULL){
//         if(curr->next!=NULL && curr->data==curr->next->data){
//             delete(curr->next);
//             curr->next=curr->next->next;
//         }
//         else{
//             curr=curr->next;
//         }
//     }
//     return head;
// }
// Node*duplicatedelete(Node* &head){
//     if(head==NULL){
//         return NULL;
//     }
//     Node*curr=head;
//     while(curr!=NULL){
//         Node*temp=curr->next;
//         while(temp!=NULL){
//             curr=curr->next;
//             temp=temp->next;
//             if(curr->data==temp->data){
//                 delete(curr->next);
//             }
//             else{
//                 cout<<"No duplicated found."<<endl;
//             }
//         }
//     }
//     return head;

// }
void print(Node *&head)
{
    Node *n1 = head;
    while (n1 != NULL)
    {
        cout << "The data is" << n1->data << " " << endl;
        n1 = n1->next;
    }
    cout << endl;
}

int main()
{
    Node *n1 = new Node(10);
    print(n1);
    // cout<<"The value of data is:"<<n1->data<<endl;
    // cout<<"The value of data is:"<<n1->next<<endl;
    // Node* head=n1;

    // Node* tail=n1;
    // print(tail);
    // insertattail(tail,20);
    // print(tail);
    // insertattail(tail,30);
    // insertattail(tail,22);
    // print(tail);
    // insertatposition(tail,head,5,30);
    //  print(head);
    //  cout<<"The number of nodes is:"<<endl;
    //  countNodes(head);

    //  duplicatedelete(head);
    //  print(head);
    //  tail->next=head->next;
    //  if  (floyeddetection(head)){
    //     cout<<"The cycle or loop is present."<<endl;
    //  }

    //  else{
    //     cout<<"The cycle is not present.";
    //  }
    //  Node*loop=gettinghead(head);
    //  cout<<"The loop start at :"<<loop->data<<endl;
    //  deleteloop(head);
    //  print(head);
    // if(iscircular(head)){
    //     cout<<"The list is circular in nature."<<endl;
    // }
    // else{
    //     cout<<"Linked list is not circular in nature";
    // }

    return 0;
}