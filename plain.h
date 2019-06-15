// header file 
#ifndef STACK_H
#define STACK_H
using namespace std; 
#include <iostream> 

template <class T> struct Node
{
	Node *next;
	T info;
};

template <class T>
class Stack
{
   public: 
   Stack()
   {  
      stackTop = NULL;
   }
   void push(T input)
   {
      Node<T> *newNode;
      newNode = new Node<T>;
      newNode->info = input;
      newNode->next = stackTop;
      stackTop = newNode;
   }
   
   T top()const
   {
      return stackTop-> info; 
   }
   
   void pop()
   {  
   Node<T> *current = stackTop;
   T input = current->info;
   stackTop = stackTop->next;
   delete current;
   }
   
   bool isEmpty() const
   {
      return stackTop == NULL; 
   }
   
   ~Stack()
   { 
      delete [] stackTop; 
   }
      
   private: 
    Node<T> *stackTop;
    
};

#endif
