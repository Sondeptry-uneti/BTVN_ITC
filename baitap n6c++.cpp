//Vi?t chuong tr�nh cho ph�p nh?p s? KW di?n ti�u th? t? b�n ph�m. Sau d� t�nh ti?n di?n v� xu?t k?t qu? ra m�n h�nh. 
//- N?u s? KW: 0 -> 100: don gi� 2000 d?ng/KW. - N?u s? KW: 101 -> 200: don gi� 2500 d?ng/KW. 
//- N?u s? KW: 201 -> 300: don gi� 3000 d?ng/KW. - N?u s? KW: > 300: don gi� 5000 d?ng/KW.
#include<iostream.h>
#include<conio.h>
main()
{
 	float n,s=0;
 	cout<<"Nhap so KW dien tieu thu: ";cin>>n;
 	if(n>=0 && n<=100)
 	{
	 	s=n*2000;
	 	cout<<"Tien dien la: "<<s;
	}
	else if(n>=101 && n<=200)
	{
		s=n*2500;
		cout<<"Tien dien la: "<<s;
	}
	else if(n>=201 && n<=300)
	{
		s=n*3000;
		cout<<"Tien dien la: "<<s;
	}
	else
	{
		s=n*5000;
		cout<<"Tien dien la: "<<s;
	}
getche();
}