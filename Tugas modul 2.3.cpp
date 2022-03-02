#include <iostream>
using namespace std;

int main()
{
	int ArrayA[2][2] = {4, 2, 8, 10};
	int ArrayB[2][2] = {-5, 8, 4, -12};
	int hasil[2][2];
	int a, b, c;
	
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
	
	cout<<"\nHasil perkalian Matriks A dengan eksponen 5\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			hasil[a][b] = 5*ArrayA[a][b];   //Menghitung perklaian Matriks A dengan eksponen lima
		}
	}
	for(a=0; a<2; a++){
		for(b=0; b<2; b++){
			cout<<hasil[a][b]<<"\t";
		}
		cout<<endl;
	}
	
}
