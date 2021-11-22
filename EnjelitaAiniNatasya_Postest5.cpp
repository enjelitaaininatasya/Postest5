#include <iostream>
#include <cstdio>
using namespace std;

int main (){
	int m;
	cout<<"Jumlah Rumah Griya Asri: ";
	cin>>m;
	cin.ignore(512,'\n');
	
	string n[m];
	string a[m];
	string b[m];
	string c[m]; // y[0], y[1]
	
	if(m%2==0){
		for (int i=0; i<m; i++){
			cout<<"Nama Pemilik Rumah: ";
			getline (cin,n[i]);
			
			cout<<"Alamat Pemilik: ";
			getline (cin,a[i]);
		}
	}else{
		for (int i=0; i<m; i++){
			cout<<"Nama Pemilik yang ingin dicek: ";
			getline (cin,n[i]);
			
			cout<<"Alamat Rumah yang ingin dicek: ";
			getline (cin,a[i]);	
		}	
	}
	for(int i=0; i<1; i++){
		cout<<"Yang ingin di cek: ";
		getline (cin,b[i]);
		cout<<"Alamat: ";
		getline (cin,c[i]);
		
	}
	if(m%2==0){
		if (b[0]==n[0] && c[0]==a[0] || b[0]==n[1] && c[0]== a[1] ){
			cout<<"Rumah ditemukan";
	}
		else {
		cout<<"Rumah Tidak ditemukan";
	}
}
	
	else if (m%2!=0){
		if (b[0]==n[0] && c[0]==a[0] || b[0]==n[1] && c[0]== a[1] || b[0]==n[2] && c[0]==a[2]){
		cout<<"Rumah ditemukan ";
	}else {
		cout<<"Rumah tidak ditemukan";
	}
	
	}	
	
}
	
	
