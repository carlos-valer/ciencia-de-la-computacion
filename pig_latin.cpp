#include <iostream>
#include <string>
using namespace std;

string Piglatinify(string &str){
	if(str.substr(0,1)=="a"||str.substr(0,1)=="e"||str.substr(0,1)=="i"||str.substr(0,1)=="o"||str.substr(0,1)=="u")
	{
		return str+"way";
	}
	else{
		if(str.find("qu")==0)
		{
			return str.substr(2,str.length()-1)+str.substr(0,2)+"ay";
		}
		return str.substr(1,str.length()-1)+str.substr(0,1)+"ay";
	}
}

int main() {
	string a;
	cin>>a;
	cout<<Piglatinify(a)<<endl;
	return 0;
}
