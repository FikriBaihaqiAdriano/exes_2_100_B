#include <iostream>
using namespace std;

int haqi[32];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Masukkan Jumlah elemen dalam array : ";
		cin >> n;

		if ((n > 0) && n <= 32)
			break;
		else
			cout << "\n\nArray harus memiliki minimum 1 dan maksimum 32 array" << endl;
	}

	cout << "\n----------------------\n";
	cout << " \nMasukkan Elemen Array \n";
	cout << "\n----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> haqi[i];
	}
}

void BinarySearch()
{
	char ch;

	do {
		cout << "\nMasukkan Elemen yang Ingin Anda Cari : ";  
		int memori;
		cin >> memori;

		int fikri = 0;		
		int adriano = n - 1;		
		int mid = (fikri + adriano) / 2;	

		while (fikri <= adriano)		
		{
			mid = (fikri + adriano) / 2;
			if (haqi[mid] == memori)		
			{
				cout << "\n" << memori << " Found " << (mid + 1);
				break;
			}
			else {
				if (memori < haqi[mid])	
				{
					adriano = mid - 1;
				}
				else
				{
					fikri = mid + 1;	
				}
			}
		
		if (fikri > adriano)
			cout << "\n" << memori << " Not Found ";
		cout << "\nLanjutkan pencarian ? (y/n) : ";
		cin >> ch;

	} while ((ch == 'y'));

}

int main()
{
	input();
	BinarySearch();
	return 0;
}