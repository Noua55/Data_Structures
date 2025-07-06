#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <utility>
#include<stack>
#include <map>
#include <unordered_map>
#include <cmath>
#include <set>
#define ll long long
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;



bool isBalanced(string experssion)
{
  
	stack<char>s;

	for(auto it:experssion)
	{

		if(it=='[' || it=='(' || it=='{') s.push(it);
		
		else if(it==']' || it==')' || it=='}'){

          if(s.empty()) return false;
          
			 if((s.top()=='[' && it==']')||(s.top()=='{' && it=='}')||(s.top()=='(' && it==')')) 
			 {
			     s.pop();
			 }

             else return false;
		}  
		

	}

	return s.empty();

}

int main()
{
	FAST;
	ll t=1;
	//cin>>t;
	string experssion; 
	cout<<"Please, Enter the experssion : "<<endl;
	cin>>experssion;
	while(t--)
	{


	 cout << (isBalanced(experssion) ? "Balanced" : "NonBalanced");

	}

}