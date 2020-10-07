#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node():data(0),next(nullptr){};
    node(int a):data(a),next(nullptr){};
    
};
class linkedList{
  private:
    node *first;
  public:
    linkedList():first(0){};
    void printAll();
    void pushBack(int pushValue);
  
};

void linkedList::printAll(){
  node* current=first;
  if(first==NULL){
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

void linkedList::pushBack(int pushValue){
  node* tempNode = new node(pushValue);
  if(first==nullptr){
    first = tempNode;
  }
  
  else{
    node* current = first;
    while(current->next!=nullptr){
      current=current->next;
    }
    current->next=tempNode;
  }
  
  
}

int main(){
  linkedList test;
  test.printAll();

}