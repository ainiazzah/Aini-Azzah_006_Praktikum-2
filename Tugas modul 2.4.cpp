#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int ArrayA[2][2] = {4, 8, 2, 10};
	int ArrayB[2][2] = {-5, 4, 8, -12};
	int hasil[2][2];
	int a, b, c, jumlah = 0;
	
	cout<<"Matriks A\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<ArrayA[a][b]<<"\t";  //Menampilkan Matriks A
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriks B\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<ArrayB[a][b]<<"\t";  //Menampilkan Matriks B
		}
		cout<<"\n";
	}
	
	cout<<"\nHasil perkalian Matriks A dengan Matriks B\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			for(int c=0; c<2; c++){
				jumlah = jumlah + ArrayA[a][c] * ArrayB[c][b];
			}
			hasil[a][b] = jumlah;
			jumlah = 0;
		}
	}
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<hasil[a][b]<<"\t";
		}
		cout<<"\n";
	}
	
	system("PAUSE");
	return 0;
}
