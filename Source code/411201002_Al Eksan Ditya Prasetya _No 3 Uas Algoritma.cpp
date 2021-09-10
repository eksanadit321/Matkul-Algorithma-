#include <iostream>
#include <string>

using namespace std;

class person{
	public:
		string nama ;
		string pemain;
		string kota;
		
		int nim;
		person(string in_nama,string in_pemain,string in_kota, int in_nim){
			person::nama = in_nama;
			person::pemain=in_pemain;
			person::kota=in_kota;
			person::nim=in_nim;
			
			cout << person:: nama << endl;
			cout << person:: pemain << endl;
			cout << person:: kota << endl;
			cout << person:: nim << endl;
		}
}; int main(){
	cout << endl;
	person data1=person("Al Eksan Ditya Prasetya","BaseballPlayer","Dki Jakarta",411201002);
	cout<<endl;
	return 0;
}

