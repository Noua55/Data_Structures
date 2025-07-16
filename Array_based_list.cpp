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

class Array
{
private:
	int index, length;
	T *arr;

public:
	Array(int maxSize)
	{
		index=0;
		length=maxSize;
		arr=new T[length];
	}

	bool isEmpty()
	{
		return index==0;
	}

	bool isFull()
	{
		return index==length;
	}
	

	void add(T val , int pos)
	{
		if(isFull())
		{
			cout<<"The array is full"<<endl;
			return;
		}
		if(pos<0 || pos>index)
		{
		    cout << "Invalid position!" << endl;
			return;
		}

		for(int r=index; r>pos; r--)
		{
		    arr[r]=arr[r-1];
		    
		}
		
		arr[pos]=val;
		index++;
	}

	void Delete(int pos)
	{
		if(isEmpty())
		{
			cout<<"The array is empty"<<endl;
			return;
		}
		if(pos<0 || pos>index)
		{
		    cout << "Invalid position!" << endl;
			return;
		}
		
		for(int r=pos; r<index-1; r++)
		{
		    arr[r]=arr[r+1];
		}
		index--;
	
	}
	~Array()
	{
	    delete[] arr;
	}

	void print()
	{
		if(isEmpty())
		{
			cout<<"The array is empty"<<endl;
			return;
		}
		cout<<"The elements of the array"<<endl;
		for(int r=0; r<index; r++)
		{
			cout<<arr[r]<<" ";
			
		}
	}
};




int main()
{
	//FAST;
	int size=0;
	cout<<"Please Enter the size of the array: ";
	cin>>size;

	Array<int>a(size);
	cout<<"Please,Enter the elements of the array: "<<endl;
	int num=0;
	for(int r=0; r<size; r++)
	{
		cin>>num;
		a.add(num,r);
	}
	a.Delete(3);
	a.add(5,10);
    
	a.print();
}