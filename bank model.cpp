#include <iostream>
using namespace std;

int main(){
	
	int a,b,c,d;
	int bal =25000;
	
	cout <<          "****************WELCOME TO HDFC BANK********************\n";
	
	 cout <<"                         Pleas Inter your card\n              ";
	
	cout<<"Create your Pin\n";
	cin>>a;
	cout<<"Pin set successfully\n";
	
	cout<<"Enter the Pin for access your acount\n";
	cin>>b;
	
	
	 if(a==b){
		cout<<"1.Check balance\n";
		cout<<"2.change pin\n";
		cout <<"3.acount holder name\n";
		cout <<"4.Exit\n"; 
		
		cout <<"click the no. to access the option \n";
		cin>>c;
		
		if(c==1){
			cout<<bal;
		}
		else if (c==2){
			cout <<"Enter your old pin";
			cin>>d;
			if(d==a){
				cout <<"inter the new pin";
				cin>>a;
			}
			else{
				cout<<"does not meet from old pin";
			}
		}
		
		else if (c==3){
			
			cout <<"Tushar Kumar\n";
			cout <<"Your atm pin is :\n"<<a;
		}
		else if(c==4){
			
			exit(0);
		}
		else{
			cout<<"Dose not meet any option from above";
		}
	
	}
	else{
	 cout<<"YOU HAD ENTERED WRONG PIN, PLEASE CHECKED";
		
		
		
	}
	
	
	return 0;
}
