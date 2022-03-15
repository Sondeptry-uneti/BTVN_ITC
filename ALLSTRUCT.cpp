#include<iostream.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
struct Doanhnghiep
{
	char madn[20];
	char giamdoc[20];
	float vondl;
	int sonv;
};
void Nhap1ds(Doanhnghiep &dn)
{
	cout<<"\nNhap MA DN: ";
	cin.ignore();
	cin.getline(dn.madn,20);
	cout<<"Nhap giam doc: "<<endl;
	cin.getline(dn.giamdoc,20);
	cout<<"Nhap von dle: "<<endl;cin>>dn.vondl;
	cout<<"Nhap so nv: "<<endl; cin>>dn.sonv;	
}
void Xuat1ds( Doanhnghiep dn)
{
	cout<<"\nMA DN: "<<dn.madn<<endl;
	cout<<"Giam doc: "<<dn.giamdoc<<endl;
	cout<<"Von dieu le: "<<dn.vondl<<endl;
	cout<<"SO nhan vien: "<<dn.sonv<<endl;
}
void NhapDS(Doanhnghiep ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		Nhap1ds(ds[i]);
	}
}
void XuatDS(Doanhnghiep ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		Xuat1ds(ds[i]);
	}	
}

void sapxep(Doanhnghiep ds[],int n)
{
	Doanhnghiep tg;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].vondl>ds[j].vondl)
			{
				tg=ds[i];
				ds[i]=ds[j];
				ds[j]=tg;
			}
		}
	}
}

void InMDN(Doanhnghiep dn)
{
	cout<<"MA DN: "<<dn.madn<<endl;
	cout<<"So nv: "<<dn.sonv<<endl;
}

void InraMDN(Doanhnghiep ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(ds[i].sonv>300 && ds[i].madn[0]=='D' && ds[i].madn[1]=='N')
		{
			InMDN(ds[i]);
		}
	}
}

void Kiemtraspace(char madn[])
{
	for(int i=0;i<strlen(madn);i++)
	{
		if(madn[i] ==' ')		
		return 1;
	}
	return 0;
}

void Demkohople(Doanhnghiep ds[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(ds[i].vondl<10 || Kiemtraspace(ds[i].madn)==1)
		dem++;
	}
	cout<<"\n So doanh nghiep ko hop le la: "<<dem<<endl;
}
main()
{
	Doanhnghiep ds[100];
	int n;
	cout<<"Nhap N= "<<endl;
	cin>>n;
	NhapDS(ds,n);
	cout<<"\nDanh sach vua nhap la: "<<endl;
	XuatDS(ds,n);
	sapxep(ds,n);
	cout<<"\nDanh sach sau khi sap xep:"<<endl;
	XuatDS(ds,n);
	cout<<"\nIn ra  MDN bat dau bang chu 'DN', so nhan vien >300"<<endl;
	InraMDN(ds,n);
	
}