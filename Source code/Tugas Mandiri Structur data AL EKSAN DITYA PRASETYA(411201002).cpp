#include<iostream>

using namespace std;

struct mhs{
	string nim;
	string nama;
};

int main(){
	mhs mahasiswa[2];
	
	cout << " Data Mahasiswa"<<endl;
	cout <<"masukkan nim :"; cin>>mahasiswa[0].nim;
	cout <<"masukkan nama :"; cin>>mahasiswa[0].nama;
	
	
	cout << " Data Mahasiswa"<<endl;
	cout <<"masukkan nim :"; cin>>mahasiswa[1].nim;
	cout <<"masukkan nama :"; cin>>mahasiswa[1].nama;
	
	
	cout<<"============"<<endl;
	cout<<"output"<<endl;
	cout<<"nim :" << mahasiswa[0].nim<<endl;
	cout<<"nama :"<< mahasiswa[0].nama<<endl;
	cout<<endl;
	cout<<"nim :" << mahasiswa[1].nim<<endl;
	cout<<"nama :"<< mahasiswa[1].nama<<endl;
}
