#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	vector<string> res;
	cout<<"Enter string:";
	getline(cin,s,'\n');
	string temp="";
	bool flag=false;
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			flag=true;
		}
		if(s[i]==' ' && flag && temp!=""){
			res.push_back(temp);
			temp="";
		}
		else if(s[i]!=' ' && flag)
			temp+=s[i];
	}
	res.push_back(temp);
	if(res.back()==""){
		res.pop_back();
	}
	for(auto str:res){
		cout<<str<<endl;
	}
	return 0;
}

