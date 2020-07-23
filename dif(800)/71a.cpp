#include <bits/stdc++.h>
using namespace std;


int main()
{
	
	int num;
	cin>>num;
	string ins[num];
	for(int i=0;i < num;i++)
	{
		
		cin>>ins[i];
		
		}
		
		
		
		
		
		for(int i=0;i < num;i++)
		{
		if(ins[i].length() < 10)
		{
			cout<<ins[i]<<endl;
		}
		else
		{
			cout<<ins[i].at(0)<<ins[i].length()-2<<ins[i].at(ins[i].length()-1)<<endl;
			}	
			}
	
	
	return 0;
}
