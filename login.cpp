#include <iostream>

using namespace std;

int main(){
	string username, password;
	
	cout<<"Masukkan username : ";
	cin>>username; cout<<endl;
	
	cout<<"Masukkan password : ";
	cin>>password; cout<<endl;
	
	if(username != "Admin" && password != "Admin123") {
		cout<<"Username dan password tidak sesuai";
	}
	else{
		if(username == "Admin" && password == "Admin123"){
			cout<<"Login Berhasil";
		}
		else if(username == "Admin"){
			cout<<"Username sesuai, password tidak sesuai";
		}else if(password == "Admin123"){
			cout<<"Username tidak sesuai, password sesuai";
		}else{
			cout<<"Username dan password tidak sesuai";
		}
		
	}
	
	return 0;
}
