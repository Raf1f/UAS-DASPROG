#include <iostream>
using namespace std;

int main(){
  int i, j, k, n, matriks[10][10], transpose[10][10];

  cout << "Masukkan jumlah baris : ";
  cin >> k ;
  cout << "Masukkan jumlah kolom : ";
  cin >> n ;

  cout << "Masukkan elemen \n";
  for (i = 0; i < k; i++){
    for (j = 0; j < n; j++){
    	 cout <<"("<<i<<","<<j<<") : ";
      cin  >> matriks[i][j];
    }
  }
  cout << endl;
  
  for (i = 0; i < k; i++){
    for (j = 0; j < n; j++){
    	cout << matriks[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;

  for (i = 0; i < k; i++){
    for (j = 0; j < n; j++){
      transpose [j][i] = matriks[i][j];
    }
  }

  cout << "Hasil Transpose : \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < k; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
