#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* fore = nullptr;
    node* next = nullptr;
};
class linkedList{
  node* first=nullptr;
  node* last=nullptr;
  public:
    void printAll();
    void pushBack(int pushValue);
    void pushFront(int pushValue);
    void Delete(int deleteValue);
    void clear();
  
};
void linkedList::pushFront(int pushValue){
  node* tempNode = new node;
  tempNode->data=pushValue;
  if(first==nullptr){
    first=tempNode;
    last=first;
  }
  else{
    first->fore=tempNode;
    tempNode->next=first;
    first=tempNode;

  }
}
void linkedList::printAll(){
  node* current=first;
  if(first==nullptr){
    cout<<"none";
  }
  else{
    while(current->next!=nullptr){
      cout<<current->data;
      current=current->next;
    }
    cout<<current->data;
  }

  
}
void linkedList::clear(){
  if(first==nullptr){
    cout<<"No item inside";
  }
  else{
    if(first->next==nullptr){
      delete first;
    }
    else{
      while(first!=nullptr){
        node* current = first;
        first=first->next;
        delete current;
      }
    }

  }

}

void linkedList::pushBack(int pushValue){
  node* tempNode = new node;
  tempNode->data=pushValue;
  if(first==nullptr){
    first = tempNode;
    last = tempNode;
  }
  
  else{
    tempNode->fore=last;
    last->next=tempNode;
    last=tempNode;
  }
  
  
}

int main(){
  linkedList test;
  test.pushBack(1);
  test.pushBack(3);
  test.printAll();
  test.clear();
  test.printAll();
}