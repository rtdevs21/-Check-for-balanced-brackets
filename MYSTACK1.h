#include<bits/stdc++.h>
using namespace std;

template<typename N> class Node
{
public:
    N value;
    Node *next;
    Node *prev;

    Node(N val)
    {
        value = val;
        next =NULL;
        next  =NULL;
    }
};

template<typename S> class Stack1
{

    Node <S> *head;
    Node <S> *top;
    int Count=0;

public:
    Stack1()
    {
        head =NULL;
        top=NULL;
    }
    // PUSH
    void Push(S val)
    {
        Node <S> * newNode = new Node<S>(val);
        if(head == NULL)
        {
            head= top =newNode;
            Count++;
            return;
        }

        top->next = newNode;
        newNode->prev =top;
        top = newNode;
        Count++;

    }

    // POP
    S Pop()
    {
        Node <S> * delNode = top;
        S chk;

        if(head == NULL)
        {
            cout<<"The Stack is UnderFollow";
            return chk;
        }
        else if(top == head)
        {
            head = top =NULL;
        }
        else
        {
            top = delNode->prev;
            top->next = NULL;

        }
        chk = delNode->value;
        delete delNode;
        Count--;

        return chk;
    }

    //EMPTY
    bool Empty()
    {
        if(head == NULL) return true;
        else return false;
    }

    //SIZE
    int Size()
    {
        return Count;
    }

    //TOP
    S Top()
    {
        S chk;

        if(head == NULL)
        {
            cout<<"Stack UnderFollow - there is no elements!\n";
            return chk;
        }
        chk = top->value;

        return chk;
    }




};

