#include<iostream.h>
#include<conio.h>
main()
{
	int n;
	nhaplai:
	cout<<"Nhap thu: ";cin>>n;

	if(n>=2 && n<=8)
	{
		cout<<"Thu ban vua nhap la thu: ";
		if(n==2)
		cout<<"2.Monday";	
		else if(n==3)
		cout<<"3.Tuesday";
		else if(n==4)
		cout<<"4.Wednesday";
		else if(n==5)
		cout<<"5.Thursday";
		else if(n==6)
		cout<<"6.Friday";
		else if(n==7)
		cout<<"7.Saturday";
		else
		cout<<"8.Sunday";
	}
	else
	{
		cout<<"Khong co thu nay vui long nhap lai!"<<endl;
		goto nhaplai;
	}
getche();
}