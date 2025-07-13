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



class Queue
{
private:
	struct node
	{

		T data;
		node *next;
	};

	node *front, *rear;
	int length;

public:
	Queue():front(NULL),rear(NULL),length(0) {}

	bool isEmpty()
	{
		return length==0;
	}
	void push(T val)
	{
		node *newnode=new node;
		newnode->data=val;
		newnode->next=NULL;
		if(isEmpty())
		{
			front=newnode;
			rear=newnode;

		}

		else
		{
			rear->next=newnode;
			rear=newnode;
		}

		length++;
	}

	void pop()
	{
		if(isEmpty()) cout<<"The queue is empty"<<endl;
		else
		{
			node *temp=front;
			front=front->next;
			delete temp;
		}
		if(front==NULL) rear=NULL;
		length--;
	}

	void print()
	{
		if(isEmpty()) cout<<"The queue is empty"<<endl;
		else {
			cout<<"The element of the queue: "<<endl;
			node *temp=front;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
		cout<<endl;
	}


	int size()
	{
		return length;

	}

	T valfront()
	{
		if(!isEmpty()) return front->data;
		return T();
	}

	T valrear()
	{
		if(!isEmpty()) return rear->data;
		return T();
	}

	~Queue()
	{
		while (!isEmpty())
			pop();
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

	Queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	//q.pop();
	q.push(5);
	q.print();
// 	cout<<q.size()<<endl;
// 	cout<<q.valfront()<<endl;
// 	cout<<q.valrear()<<endl;
}
