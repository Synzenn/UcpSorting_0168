//SOAL TYPE 2
//1.Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
//2.Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen.
//3.Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa.
//4.	Konversi Algorithma berikut kedalam C++:
//1.	Repeat steps 2 and 3 varying j from 0 to n – 2
//2.	Find the minimum value in arr[j] to arr[n – 1]:
//a.Set min_index = j
//.Repeat step c varying i from j + 1 to n – 1//
//c.If arr[i] < arr[min_index] :
	//i.min_index = i
	//3.	Swap arr[j] with arr[min_index]


//Jawaban
//1. Dengan cara menyeleksi/melihat keseluruhan list, membandingkan antar elemen elemen dan menukar mereka jika value dari elemen di index n lebih besar dari n - 1, sampai menjadi bentuk yg benar
//2. Shell sort membandingkan elemen dengan cara, membandingkan elemen yang terpisah dengan jarak beberapa dari pass(misal longkap tiga) menjadi bentuk multiple subtitusi
//3. Menurut saya dengan memakai Selection sort, memungkinkan kita untuk meyusun data (langsung tanpa harus melewati proses proses yang tidak diperlukan karena sudah ada data yg tersusun) dengan efisien sesuai dengan urutannya.
//4. 


#include <iostream>
using namespace std;

int ariel[68];				
int n;					

void input() {		
	while (true) {	
		cout << "Masukkan banyaknya elemen pada array : ";	
		cin >> n;		
		if (n <= 68)	
			break;		
		else {			
			cout << "\nArray dapat mempunyai maksimal 68 elemen.\n";	
		}

	}
	cout << endl;							
	cout << "=====================" << endl;		
	cout << "Masukkan Elemen Array" << endl;	
	cout << "=====================" << endl;	

	for (int i = 0; i < n; i++) {	
		cout << "Data ke-" << (i + 1) << ": ";	
		cin >> ariel[i];
	}
}

void Kenchan() {			
	cout << endl;
	cout << "================================" << endl;	
	cout << "Elemen Array yang telah tersusun" << endl;		
	cout << "================================" << endl;		
	for (int j = 0; j < n; j++) {				
		cout << "Data Ke-" << j + 1 << ": ";
		cout << ariel[j] << endl;		
	}
	cout << endl;								
}

void Selection() {								
		for (int j = 0; j < n - 2; j++) {	

			if (ariel[j] > ariel[j + 1]) {				
				int temp = ariel[j];			
				ariel[j] = ariel[j + 1];				
				ariel[j + 1] = temp;				
			}
		}
}

int main() {
	input();		
	Selection();	
	Kenchan();		
	return 0;
}