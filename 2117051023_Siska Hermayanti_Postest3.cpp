#include <iostream>
using namespace std;

int main(){
	int tahun;
	cout<<"Masukkan Tahun : ";
	cin>>tahun;
	
	if(tahun%400==0){
		cout<<"Tahun " <<tahun<< " adalah tahun kabisat";
	}else if(tahun%400!=0 && tahun%100==0){
		cout<<"Bukan tahun kabisat";
	}else if(tahun%400!=0 && tahun%100!=0){
		if(tahun%4==0)
		cout<<"Tahun "<<tahun<<" adalah tahun kabisat";
	}else if(tahun%400!=0 && tahun%100!=0){
		if(tahun%4!=0)
		cout<<"Bukan tahun kabisat";
	}
	
	return 0;
}
