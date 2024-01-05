#include<stdio.h>
void Nhap (int &b , int &h )
{
	printf (" \n chuong trinh tinh tien kraoke ");
	printf (" \n nhap gio tu 12h -> 23h");
	do {
		printf (" gio bat dau la :  "); scanf (" %d",&b);
		printf (" gio ket thuc la : "); scanf ("%d",&h);
		
		if ( b < 12 || h > 23 )
		{
			printf (" Quan chi hoat dong tu 12h -> 23h xin moi nhap lai ");
		}
	} while ( b < 12 || h > 23  );
}
double  tinhtienkaraoke ( int b , int h )
{
	double tongTien ;
	int g = 150000 ;
	int Sogio = h - b ;
	printf (" tong so gio la : %d ", Sogio);
 	if (Sogio <= 3 )
	 {
	 	tongTien = Sogio * g;
	  } 
	else 
	  {
	  	tongTien = 3 * g + (Sogio - 3 ) * g * 0.7 ;
	  }
	if (b >= 14 && b <=17)
	{
		tongTien *= 0.9;
	}
	return tongTien;
}
int main ()
{
	int b ,h ;
	Nhap (b,h);
	printf (" So tien khach phai tra la :  %lf ", tinhtienkaraoke(b,h) );
}
