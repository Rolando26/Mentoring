#include<iostream>

using namespace std;

int ij;
int main()
{
	for(int i = 1; i<=8; i++){
		for(int j = 1; j<=8; j++){
			ij = i*j;
			cout <<ij << " ";
		}
		
		cout <<"\n";
	}
}

