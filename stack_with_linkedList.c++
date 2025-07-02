#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <utility>
#include <map>
#include <unordered_map>
#include <cmath>
#include <set>
#define ll long long
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;




template<typename T>



class Stack
{
    private:
    struct node
{
   
      T data;
       node *next;
};

    node *top=NULL;

    public:
    void push(T val)
    {
        node *newnode=new node; 
           newnode->data=val;
           newnode->next=top; 
           top=newnode;   
    }

    void pop()
    {
        node *temp=top;
        if(top!=NULL){
        top=temp->next;
        delete temp;
        }
        else cout<<"Sorry the stack is empty"<<endl;
    }
 
     void print()
     {
        node *temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
     }

};




int main() 
{
	FAST;
	//ll t;
// 	cin >> t;
// 	while (t--) 
// 	{
// 		solution();
// 	}

  Stack<string>s;
  s.push("Ali");
  s.push("Noureen");
  
  
  s.print();
  
 
}
