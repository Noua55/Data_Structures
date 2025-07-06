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

int operation(string ope)
{
    if(ope=="+" || ope=="-") return 1 ;
    else if(ope=="*" || ope=="/") return 2;
    return 0;
   
}

void solution(vector<string> experssion)
{
    vector<string>ans;
	stack<string>s;


	for(auto it:experssion)
	{
        if(isdigit(it[0])||(it[0]=='-' && it.size()>1)) ans.push_back(it);
       
        
        else if(it=="(" || it=="[" || it=="{") s.push(it);
        
        else if(it==")" || it=="]" || it=="}")
        {
           while (!s.empty() && !(s.top() == "(" || s.top() == "[" || s.top() == "{")) {
                ans.push_back(s.top());
                s.pop();
            }
            if (!s.empty()) s.pop(); 
        }
        
        else if(it=="+" || it=="-" || it=="*" || it=="/") 
        {
            if(!s.empty())
            {
                while(!s.empty() && operation(s.top())>=operation(it))
                {
                    ans.push_back(s.top());
                    s.pop();
                }
                 
            }
             s.push(it);
        }
        
        
        
	}
	while(!s.empty()) ans.push_back(s.top()) , s.pop();
	
   for(auto it:ans) cout<<it<<" ";
   

}

int main()
{
	FAST;
	ll t=1;
	//cin>>t;
	int size;
	cout<<"Please, Enter the size of the experssion : "<<endl;
	cin>>size;
	
    vector<string>experssion(size);
	cout<<"Please, Enter the experssion : "<<endl;
          for(auto &it:experssion) cin>>it;
    
	while(t--)
	{


	solution(experssion);

	}

 
}