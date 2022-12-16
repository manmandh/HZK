#include<iostream>
using namespace std;
int main()
{
    string s;
	cin >> s;
	int count0=0;
	int count=0, max1 =0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='1'){
			count++;
		}
		else{
			s[i]='1';
			count0++;
			count0=count;
		
		}
	}
}