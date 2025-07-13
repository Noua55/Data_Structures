#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <utility>
#include <map>
#include <cmath>
#include <set>
#define ll long long
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;


template<typename T>

class Queue
{
private:
	T *q;

	int front=0,  rear=0, count=0,size=0;

public:
	Queue(int max_size) {
	size = max_size;
	q = new T[size];
	front = 0;
	rear = size - 1;
	count = 0;
}


	bool isEmpty()
	{
		return count==0;
	}

	bool isFull()
	{
		return count==size;
	}

	void enqueue(T val)
	{
		if(!isFull())
		{
			rear=(rear+1)%size;
			q[rear]=val;
			count++;
		}

		else cout<<"The queue is full"<<endl;
	}

	void dequeue()
	{
		if(!isEmpty())
		{
			front=(front+1)%size;
			count--;
		}

		else cout<<"The queue is empty"<<endl;
	}

	T frontVal()
	{
		if(!isEmpty()) return q[front];
		else return 0;

	}

	T rearVal()
	{
		if(!isEmpty()) return q[rear];
		else return 0;

	}
	
	void print()
	{
	    if(isEmpty()) cout<<"The queue is empty"<<endl;
	    else
	    {
	        cout<<"The elements of the queue"<<endl;
	        for(int r=front; r!=rear; r=(r+1)%size)
			{
			    //cout<<r<<endl;
			 cout<<q[r]<<" ";
			}
			cout<<q[rear]<<endl;
	    }
	}

	int search(T val)
	{
		int pos=-1;
		if(!isEmpty()) {
			for(int r=front; r!=rear; r=(r+1)%size)
			{
				if(val==q[r])
				{
					pos=r;
					break;
				}
			}
			if(pos==-1)
			{
				if(q[rear]==val) pos=rear;
			}
		}
		return pos;
	}
	

};



int main()
{
	cout<<"Please,Enter the size of the queue: "<<endl;
	int size=0;
	cin>>size;

	Queue<int>q(size);
	cout<<"Please, Enter the elements of the queue : "<<endl;
	int num;

	for(int r=0; r<size; r++)
	{
		cin>>num;
		q.enqueue(num);
	}


// 	cout<<"The elements of the queue"<<endl;
// 	while(!q.isEmpty())
// 	{
// 		cout<<q.frontVal()<<" ";
// 		q.dequeue();
// 	}

q.print();

} 