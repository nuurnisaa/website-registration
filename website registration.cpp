#include <iostream>
#include <string.h>

using namespace std;

int age;
float id;
string name;
int password; int password1;

void signup() {

cout<<"Enter your name: "; cin>>name;
cout<<"Age: "; cin>>age;
cout<<"ID: "; cin>>id;
cout<<"Enter your password: "; cin>>password;
cout<<"Re-type your password: "; cin>>password1;

if(password==password1)
{
	cout<<"Registration complete";
	
}
else 
{
cout<<"Password not match!";
}; 
}


void login()
{
	string name1; int password2;
	cout<<"Name: "; cin>>name1;
	cout<<"Password: "; cin>>password2;
	
	if(name1==name && password2==password)
	{ cout<<"Welcome" <<name1;
	
	}
	else{
	
	cout<<"Your name or password wrong !";

	}
}


void exit(){
	
	cout<<"Thank you";
}

int main()

{
	int choice;
	cout<<" 1. Sign Up account"<<endl;
	cout<<"2. Login"<<endl;
	cout<<"3. Exit"<<endl;
	cin>>choice;
	
	switch (choice){
		case 1: 
		signup();
		break;
		
		case 2:
			login();
			break;
			
			case 3:
				exit();
				break;
			
			default:
			cout<<"Enter your choice";
				
				system("cls");
				main();
	}



return choice;
}
