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

double operation(double x , double y , string ope)
{
    if(ope=="+") return (x)+(y);
    else if(ope=="-") return (x)-(y);
    else if(ope=="*") return (x)*(y);
    else if(ope=="/") return (x)/(y);
    return 0;
    
}

double solution(vector<string> experssion)
{
  
	stack<double>s;

	for(auto it:experssion)
	{
         
         if(isdigit(it[0])||(it[0]=='-' && it.size()>1)) s.push(stod(it));
         else{
             if(s.size()>=2)
             {
             double y=s.top();
             s.pop();
             double x=s.top();
             s.pop();
             string ope=it;
             s.push(operation(x,y,ope));
             }
         }

	}
	
	return (!s.empty()?s.top():0);

   

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


	 cout << "result is : "<<solution(experssion);

	}

 
}