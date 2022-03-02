#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int ArrayA[2][2] = {4, 8, 2, 10};
	int ArrayB[2][2] = {-5, 4, 8, -12};
	int a, b;
	
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
	
	cout<<"\nHasil pengurangan Matriks A dan Matriks B\nMatriks A - Matriks B =\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			//Pengurangan Matriks A dengan Matriks B
			cout<<ArrayA[a][b] - ArrayB[a][b]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriks B - Matriks A =\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			//Pengurangan Matriks B dengan Matriks A
			cout<<ArrayB[a][b] - ArrayA[a][b]<<"\t";
		}
		cout<<"\n";
	}
	
	system("PAUSE");
	return 0;
}
