//Rolando
#include <iostream>
#include <string>
#include <ctime>   
using namespace std;
    

	int main()
	{
		system("color B");
		
		time_t now = time(0);
   		char* dt = ctime(&now);
	
		//declare variable
		int nim;
		string tgl;
		string tlp;
		string email;
		string nama;
		string alamat;
		string jenis_kelamin;
	
	 
		cout<<"====================================================== \n";
		cout<<"\tFormulir Data Diri Mahasiswa\n";
		cout<<"\tTanggal :" <<dt;
		cout<<"====================================================== \n";
		cout<<"Input data anda dibawah ini\n\n";
		
		//Input 
		cout<<"Email     	 : ";
		getline (cin, email);
			
		cout<<"Nama     	 : ";
		getline (cin, nama);
		
		cout<<"NIM     	 : ";
		cin>>nim;
		cin.ignore();
		
		cout<<"Jenis Kelamin    : ";
		cin>>jenis_kelamin;
		
		cout<<"Tgl. Lahir    	 : ";
		cin>>tgl;
		cin.ignore();
		
		cout<<"Alamat    	 : ";
		getline (cin, alamat);
	
		cout<<"No. Tlp       	 : ";
		cin>>tlp;
	
		
		//Output
		
		cout<<"====================================================== \n";
		cout<<"\tHasil Input Formulir\n\n";
		
		cout<<"Email    	 : "<<email <<endl;
		cout<<"Nama     	 : "<<nama <<endl;
		cout<<"NIM      	 : "<<nim <<endl;
		cout<<"Jenis Kelamin 	 : "<<jenis_kelamin <<endl;
		cout<<"Tgl. Lahir    	 : "<<tgl <<endl;
		cout<<"Alamat    	 : "<<alamat <<endl;
		cout<<"No. Tlp    	 : "<<tlp <<endl<<endl;
		
		cout<<"program berakhir...\nTerima kasih telah menggunakan program ini :D";
	
		
	}
