#include <iostream>
#include <string>

using namespace std;

int main(){
	try{
	
	int nilai;
	cout <<"\n 411201002_Al Eksan Ditya Prasetya"<<endl;
	cout << "==================================="<<endl;
	cout << "Masukkan nilai : ";cin >> nilai;
	
	if (nilai >=85 && nilai <100){
		cout <<"grade : A\t anda lulus\n";	}
		else if (nilai >=75 && nilai<85){
			cout << "grade : B\t anda lulus\n";
		}
		else if (nilai >= 60 && nilai<75){
			cout << "grade : C\t anda lulus\n";
		}
		else if (nilai >=50 && nilai<60){
			cout << " grade : D\t anda tidak lulus\n";
		}
		else if (nilai >=0 && nilai<50){
			cout << " grade : E\t anda tidak lulus\n";
		}
		else{
			throw"Nilai tidak sesuai jangkauan 0-100";
		}  
	
	}
		catch (const char*e){
			cout <<"Error :"<< e << endl;
		}
		
}
