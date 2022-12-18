#include<bits/stdc++.h>
using namespace std;

template <typename N> class Node
{
public:
    Node * next;
    N value;

    Node(N val)
    {
        value =val;
        next =NULL;
    }
};

template <typename Q> class Queue1
{

public:
    Node <Q> * front;
    Node <Q> * rear;

    Queue1()
    {
        front =NULL;
        rear =NULL;
    }

// push
    void Push(Q v)
    {
        Node <Q> *newNode = new Node<Q>(v);

        if(front==NULL)
        {
            front = newNode;
            rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = rear->next;

    }

//pop
    Q Pop()
    {
      Q chk;
      if(front == NULL && rear == NULL)
      {
       cout<<"Queue Overflow- No element here!";
       return chk;
      }

      Node <Q> * delNode = front;
      front = front->next;

      if(front == NULL)
      { rear=NULL; }

      chk = delNode->value;
      return chk;

    }
//front
  Q Front()
  {
   Q chk;
      if(front == NULL && rear == NULL)
      {
       cout<<"Queue Overflow- No element here!";
       return chk;
      }
      return front->value;
  }
//back
  Q Back()
  {
   Q chk;
      if(front == NULL && rear == NULL)
      {
       cout<<"Queue Overflow- No element here!";
       return chk;
      }
      return rear->value;
  }
//empty
bool Empty()
{
 if(front == NULL && rear == NULL) return true;
 else return false;
}

};
