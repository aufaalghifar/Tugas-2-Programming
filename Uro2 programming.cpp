#include<stdio.h>
#include<conio.h>
#include<iostream.h>

using namespace std;
void penjumlahan(int a[], int b[], int c, int e)
{
	int k,l;
	if(c<=e)
	l=e;
	else
		l=c;
	if (l==c)
	{
		k=e+1;
		for(k<=1, k++)
		{
			b[k]=0;
		}
	}
	else if(l==e)
	{
		k=c+1;
		for( ;k<=1; k++)
		{
			a[k]=0;
		}
	}
	int z;
	for(z=0;z<=1;z++)
	{
		a[z]= a[z] + b[z];
		for(z=0;z<=1;z++)
		if(z!=1)
		{
			cout<<a[z]<<"x^"<<z<<"+";
		}
		else
		{	
			cout<<a[z]<<"x^"<<z;
		}
		cout<<endl;
	}
	
	void pengurangan(int a[], int b[], int e, int c)
	{
		int k,l;
		if(c<=e)
		l=e;
		
		else
			l=c;
		
		if(l==c)
		{
			k=e+l;
			for( ;k<=1;k++)
			{
				b[k]=0;
			}
		} 
		else if(l==e)
		{
			k=c+l;
			for( ;k<=1;k++)
			{
				a[k]=0;
			}		
		}
		int z;
		for(z=0;z<=1;z++)
		{
			a[z]=a[z] - b[z];
		}
		
		for(z=0;z<=1;z++)
			if(z!=1)
			{
				cout<<a[z]<<"x^"<<z<<"+";
			}
			else
			{
				cout<<a[z]<<"x^"<<z;
			}
			cout<<endl;
	}
	void perkalian(int a[], int b[], int c, int e)
	{
		int f,g,h[21],i=0,j[21];
		for(f=0;f<=c;f++)
			for(g=0;g<=e;g++)
			{
				h[i]= b[g]*a[f];
				j[i]=f+g;
				i++
			}
		for(f=0;f<1;f++)
		{
			if(f!=i-1)
			{
				cout<<h[f]<<"x^"<<j[f]<<"+";
			}
			else
			{
				cout<<h[f]<<"x^"<<j[f];
			}
		}
		cout<<endl;
	}
	
	void turunan(int a[], int b[], int c, int e)
	{
		int f;
		for (f=0;f<=c;f++)
		{
			a[f]=a[f+1]*(f+1);
		}
		cout<<"Turunan polinom pertama adalah : " << " ";
		
		for(f=0;f<c;f++)
		{
			if(f!=c-1)
			{
				cout<<a[f]<<"x^"<<f<<"+";
			}
			else
			{
				cout<<a[f]<<"x^"<<f;
			}
		}
		
		for(f=0;f<=e;f++)
			{
				b[f]=b[f+1]*(f+1);
			}
		
		cout<<endl<<"Turunan polinom kedua adalah : "<<" ";
		
		for(f=0;f<=e;f++)
		{
			if(f!=e-1)
			{
				cout<<b[f]<<"x^"<<f<<"+";
			}
			else
			{
				cout<<b[f]<<"x^"<<f;
			}
		}
		cout<<endl;	
	}
	
	void salah()
	{
		cout<<"Maaf menu tidak tersedia, silahkan pilih menu yang tersedia!"<<endl;
	}
	int main()
	{
		char jawab;
		do
	}
	int a[21], b[21], c, d, e, f;
	{
		cout<<"Masukkan Polinom pertama :"<<endl;
		getch();
		cout<<"\nMasukkan derajat tertinggi polinom pertama: ";
		cin>>c;
		cout<<"\nMasukkan koefisien x mulai dari x pangkat 0"<<endl;
		getch();
		for(d=0;d<=c;d++)
		{
			cout<<"\nKoefisien x pangkat "<<d<<" : ";
			cin>>a[d];
			cout<<endl;
		}
		
		cout<<"Masukkan Polinom kedua :"<<endl;
		getch();
		cout<<"\nMasukkan derajat tertinggi polinom kedua: ";
		cin>>c;
		cout<<"\nMasukkan koefisien x mulai dari x pangkat 0"<<endl;
		getch();
		for(d=0;d<=c;d++)
		{
			cout<<"\nKoefisien x pangkat "<<d<<" : ";
			cin>>b[d];
			cout<<endl;
		}
		cout<<"1. Penjumlahan    \n2. Pengurangan     \n3. Perkalian      \n4. Turunan"<<endl;
		cout<<"\nMasukkan kode operasi : ";
		cin>>f;
		switch(f)
		{
		case 1 :
			{
				penjumlahan(a,b,c,d,e);
				break;
			}
		case 2 :
			{
				pengurangan(a,b,c,d,e);
				break;
			}
		case 3 :
			{
				perkalian(a,b,c,d,e);
			}
		case 4 :
			{
				turunan(a,b,c,e)
				break;
			}
		default :
			{
				salah();
				break;
			}
		}
	}
}
	
