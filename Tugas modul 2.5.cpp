#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int ArrayA[2][2] = {4, 8, 2, 10};
	int ArrayB[2][2] = {-5, 4, 8, -12};
	int transpose[2][2];
	
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
	
	cout<<"Hasil Transpose Matriks A\n";
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			transpose[a][b] = ArrayA[b][a];
			cout<<transpose[a][b]<<"\t";
		}
		cout<<endl;
	}
	
	system("PAUSE");
	return 0;
}
