#include <iostream>
using namespace std;

int main()
{
	cout << "\ntask1\n";
	int arr1[5][5] = {};
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr1[i][j] = rand() % 20;
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	int cem = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cem += arr1[i][j];
		}

	}
	cout << cem;


	cout << "\ntask2\n";
	int arr2[5][5] = {};
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr2[i][j] = rand() % 20;
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	int cem2 = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j || j == 4 - i)
				cem2 += arr2[i][j];
		}
	}
	cout << cem2 << ' ';



	cout << "\ntask3\n";
	int arr3[5][5];
	srand(time(0));
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			arr3[i][j] = rand() % 200 - 100;
		}
	}
	int min = arr3[0][0];
	int max = arr3[0][0];
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (arr3[i][j] < min) {
				min = arr3[i][j];
			}
			if (arr3[i][j] > max) {
				max = arr3[i][j];
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	cout << min << endl;
	cout << max << endl;


	cout << "\ntask4\n";
	int arr4[5][5] = {};
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr4[i][j] = rand() % 10 - 5;
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	int menfi = 0, musbet = 0, sifir = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr4[i][j] > 0) {
				musbet++;
			}
			else if (arr4[i][j] < 0) {
				menfi++;
			}
			else {
				sifir++;
			}

		}
		cout << "musbet: " << musbet << ' ';
		cout << "menfi: " << menfi << ' ';
		cout << "sifir: " << sifir << ' ';
		musbet = 0;
		menfi = 0;
		sifir = 0;
	}


	cout << "\ntask5\n";
	int arr5[5][5] = {};
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr5[i][j] = rand() % 20;
			cout << arr5[i][j] << " ";
		}
		cout << endl;
	}
	int cemm = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cemm += arr5[i][j];
		}
		cout << cemm << ' ';
		cemm = 0;
	}


	cout << "\ntask6\n";
	int arr6[5][5] = {};
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr6[i][j] = rand() % 20;
			cout << arr6[i][j] << " ";
		}
		cout << endl;
	}
	int cem6 = 0;
	int size = 0;
	int sizei = 0;
	for (int k = 0; k < 5; k++)
	{
		for (int i = sizei; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (j == size)
				{
					cem6 += arr6[i][j];
				}

			}

		}
		cout << cem6 << " ";
		size++;
		cem6 = 0;
		sizei = 0;
	}



	cout << "\ntask7\n";
	int arr7[5][5] = {};
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr7[i][j] = rand() % 50 - 10;
			cout << arr7[i][j] << " ";
		}
		cout << endl;
	}
	int cem7 = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr7[i][j] >= 0) {
				cem7 += arr7[i][j];
			}
			else {
				cem7 = 0;
				break;
			}


		}cout << cem7 << ' ';
	}


	cout << "\ntask8\n";
	const int n = 6;
	const int m = 6;
	int arr8[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr8[i][j] = (i + 1) * 10 + (j + 1);
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr8[i][j] << " ";
		}
		cout << endl;
	}


	cout << "\ntask9\n";
	const int N = 4;
	const int M = 4;
	int arr9[N][M];
	srand(time(0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr9[i][j] = rand() % 20;
			cout << arr9[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < N / 2; i++) {
		for (int j = 0; j < M; j++) {
			int newarr9 = arr9[i][j];
			arr9[i][j] = arr9[N - i - 1][j];
			arr9[N - i - 1][j] = newarr9;
		}
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr9[i][j] << " ";
		}
		cout << endl;
	}




	cout << "\ntask10\n";
	int arr10[6][6] = {};
	srand(time(0));

	srand(time(0));
	cout << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			arr10[i][j] = rand() % 100; 
			cout << arr10[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 6 - 1; i += 2) {
		for (int j = 0; j < 6; j++) {
			int newarr10 = arr10[i][j];
			arr10[i][j] = arr10[i + 1][j];
			arr10[i + 1][j] = newarr10;
		}
	}
	cout << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << arr10[i][j] << " ";
		}
		cout << endl;
	}

}
