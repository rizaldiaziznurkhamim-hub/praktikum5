#include <iostream>
#include <vector> // mengoperasikan vector
#include <algorithm> // buat sort

using namespace std;

void main() {
	int data[11] = { 12, 17, 10, 5 ,15, 25, 11, 7, 25, 16, 19 };

	// agar vector bisa terbaca
	vector<int> myVector(data, data + 11);

	// agar bisa terbaca diatas dan dibawah
	auto cetakVector = [](const vector<int> vec, const string& judul) {
		cout << judul << endl;
		cout << "====================================================\n";
		for (int val : vec) {
			cout << val << " | ";
		}
		cout << "\n====================================================\n";
		};
	cetakVector(myVector, "Isi Vector awal : \n");

	//sort (ASC) ascending (kecil ke besar)
	sort(myVector.begin(), myVector.end());
	cetakVector(myVector, "\nIsi Vector Setelah Sort Ascending : \n");

	//sort (DESC) descending (besar ke kecil)
	sort(myVector.rbegin(), myVector.rend());
	cetakVector(myVector, "\nIsi Vector Setelah Sort Descending : \n");
}