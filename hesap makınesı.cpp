#include <iostream>
using namespace std;
int main(){
	int sayi1, sayi2, sonuc;
	char islem;
	cout<<"islem giriniz:"<<endl;
	cin>>sayi1>>islem>>sayi2;
	if (islem == '+')
	sonuc=sayi1+sayi2;
	else if (islem == '-')
	sonuc==sayi1-sayi2;
	else if (islem == '*')
	sonuc=sayi1*sayi2;
	else if (islem == '/'){
		if (sayi2== 0){
			cout<<"bolum sifir olamaz";
			return 0;
		}
		sonuc== sayi1/sayi2;
	}
	cout<<"sonuc:"<<endl;
	cout<<sayi1<<" "<<islem<<" "<<sayi2<<" = "<<sonuc<<"    "<<"developed by ege";
	return 0;
}