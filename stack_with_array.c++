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



const int size=5;

template<typename T>


class Stack
{
    private:
    int top=-1;
    T st[size];
    
    public:
    bool isEmpty()
    {
       return top==-1;
    }
    
    bool isFull()
    {
       return top>=size-1;
        
    }
    void push(T num)
    {
        
        if(!isFull()) top++ , st[top]=num;
        else cout<<"The stack is full\n";
        
        
    }
    
    void pop()
    {
        if(!isEmpty()) top--;
        else cout<<"The stack is empty\n";
    }
    
    T Top()
    {
       if(!isEmpty()) return st[top];
       return T();
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

 Stack<int>s;
 int num;
 cout<<"Enter the element of the stack"<<endl;
 for(int r=0; r<size; r++) cin>>num,s.push(num);
 cout<<"The elements of the stack are : "<<endl;
 cout<<"[ ";
 while(!s.isEmpty())
 {
     cout<<s.Top()<<" ";
     s.pop();
 }
 cout<<"]";
 cout<<endl;

 
}
