//Rolando

#include <iostream>


	using namespace std;
	
	int main()
	{
		int number;
		
		cout <<"Input an integer: ";
		cin >> number;
		
		if(number % 2 == 0 ){
			cout<<"Number " <<number <<" is Even";
		}else{
			cout<<"Number " <<number <<" is Odd";
		}
		return 0;
	}
