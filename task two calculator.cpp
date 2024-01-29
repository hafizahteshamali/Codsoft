#include<iostream>
using namespace std;

int main(){
	int choice;

	cout<<"Welcome to Calculator"<<endl;
	while(1){
	cout<<"Enter (0) for Exit: "<<endl;
	cout<<"Enter (1) for Addition: "<<endl;
	cout<<"Enter (2) for Subtraction: "<<endl;
	cout<<"Enter (3) for Multiplication: "<<endl;
	cout<<"Enter (4) for Division: "<<endl <<endl;
	
	cout<<"Choose the Operation: ";
	cin>>choice;
	switch(choice){
		case 1:
			int add1, add2;
			cout<<"Enter the First Integer For Addition: ";
			cin>>add1;
			cout<<"Enter the Second Integer For Addition: ";
			cin>>add2;
			
			cout<<"The Addition Value of " <<add1 << " and " << add2 <<" is: " <<(add1 + add2) <<endl <<endl;
			break;
			
			case 2:
			int sub1, sub2;
			cout<<"Enter the First Integer For Subtraction: ";
			cin>>sub1;
			cout<<"Enter the Second Integer For Subtraction: ";
			cin>>sub2;
			
			cout<<"The Subtraction Value of " <<sub1 << " and " << sub2 <<" is: " <<(sub1 - sub2) <<endl <<endl;
			break;
			
			case 3:
			int mul1, mul2;
			cout<<"Enter the First Integer For Multiplication: ";
			cin>>mul1;
			cout<<"Enter the Second Integer For Multiplication: ";
			cin>>mul2;
			
			cout<<"The Multiplication Value of " <<mul1 << " and " << mul2 <<" is: " <<(mul1 * mul2) <<endl <<endl;
			break;
			
			case 4:
			int div1, div2;
			cout<<"Enter the First Integer For Division: ";
			cin>>div1;
			cout<<"Enter the Second Integer For Division: ";
			cin>>div2;
			
			if(div2 != 0){
				cout<<"The Division Value of " <<div1 << " and " << div2 <<" is: " <<(float) div1 / div2 <<endl <<endl;
			}
			else{
				cout<<"Zero Condition Situation!";
			}
			break;
			
			case 0:
				exit(1);
				break;
			
			default:
				cout<<"Invalid Operation!" <<endl <<endl;
				break;
	}
		}
	return 0;
	
}
