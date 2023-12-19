#include <iostream>
#include "./calFunc.hpp"

using namespace std;
int main()
{
	int a,b,choice,result=0;
	cout<<"enter two numbers"<<endl;
	cin>>a;
	cin>>b;
	cout << "choose your operation from below. for example 1 for Addition"<<endl;
	
	cout<<"1.Addition\n2.Substraction\n3.Multiplication"<<endl;
	cin>>choice;
	switch (choice)
	{
		case 1: result= sum(a,b);
			cout<<"Your result is="<<result<<endl;
		break;
		case 2: result= subs(a,b);
			cout<<"Your result is="<<result<<endl;
		break;
		case 3: result= multiply(a,b);
			cout<<"Your result is="<<result<<endl;
		break;
		default: cout<<"invalid option please try again\n";
	}

	cout<<"Your result is="<<result<<endl;

}
