#include <iostream>
using namespace std;

int main()
{
	int ArrayA[2][2] = {4, 2, 8, 10};
	int ArrayB[2][2] = {-5, 8, 4, -12};
	int a, b;
	
	cout<<"### Matriks A ###\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<ArrayA[a][b]<<"\t";  //Menampilkan Matriks A
		}
		cout<<"\n";
	}
	
	cout<<"\n### Matriks B ###\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<ArrayB[a][b]<<"\t";  //Menampilkan Matriks B
		}
		cout<<"\n";
	}
	
	cout<<"\nHasil penjumlahan Matriks A dan Matriks B\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			//Penjumlahan kedua matriks
			cout<<ArrayA[a][b] + ArrayB[a][b]<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}
