//Vi?t chuong trình cho phép nh?p s? KW di?n tiêu th? t? bàn phím. Sau dó tính ti?n di?n và xu?t k?t qu? ra màn hình. 
//- N?u s? KW: 0 -> 100: don giá 2000 d?ng/KW. - N?u s? KW: 101 -> 200: don giá 2500 d?ng/KW. 
//- N?u s? KW: 201 -> 300: don giá 3000 d?ng/KW. - N?u s? KW: > 300: don giá 5000 d?ng/KW.
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