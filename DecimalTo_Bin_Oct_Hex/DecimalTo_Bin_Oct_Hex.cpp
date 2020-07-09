#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int liczba, cyfra, liczona;
	int i = 0, j = 0, k = 0;
	char dwujkowy[20], osemkowy[20], szesnastkowy[20];
	cout << "podaj liczbe ktora mam przeliczyc : ";
	cin >> liczba;
	if (liczba > 0) {
		//system dwujkowy
		liczona = liczba;
		while (liczona > 0 && i < 20) {
			cyfra = liczona % 2;
			if (cyfra == 1) {
				dwujkowy[i] = '1';
			}
			else {
				dwujkowy[i] = '0';
			}
			i++;
			liczona -= cyfra;
			liczona /= 2;
		}
		i--;
		//system osemkowy
		liczona = liczba;
		while (liczona > 0 && j < 20) {
			cyfra = liczona % 8;
			switch (cyfra)
			{
			case 0:
				osemkowy[j] = '0';
				break;
			case 1:
				osemkowy[j] = '1';
				break;
			case 2:
				osemkowy[j] = '2';
				break;
			case 3:
				osemkowy[j] = '3';
				break;
			case 4:
				osemkowy[j] = '4';
				break;
			case 5:
				osemkowy[j] = '5';
				break;
			case 6:
				osemkowy[j] = '6';
				break;
			case 7:
				osemkowy[j] = '7';
				break;
			}
			j++;
			liczona -= cyfra;
			liczona /= 8;
		}
		j--;
		// szesnastkowy
		liczona = liczba;
		while (liczona > 0 && k < 20) {
			cyfra = liczona % 16;
			switch (cyfra)
			{
			case 0:
				szesnastkowy[k] = '0';
				break;
			case 1:
				szesnastkowy[k] = '1';
				break;
			case 2:
				szesnastkowy[k] = '2';
				break;
			case 3:
				szesnastkowy[k] = '3';
				break;
			case 4:
				szesnastkowy[k] = '4';
				break;
			case 5:
				szesnastkowy[k] = '5';
				break;
			case 6:
				szesnastkowy[k] = '6';
				break;
			case 7:
				szesnastkowy[k] = '7';
				break;
			case 8:
				szesnastkowy[k] = '8';
				break;
			case 9:
				szesnastkowy[k] = '9';
				break;
			case 10:
				szesnastkowy[k] = 'A';
				break;
			case 11:
				szesnastkowy[k] = 'B';
				break;
			case 12:
				szesnastkowy[k] = 'C';
				break;
			case 13:
				szesnastkowy[k] = 'D';
				break;
			case 14:
				szesnastkowy[k] = 'E';
				break;
			case 15:
				szesnastkowy[k] = 'F';
				break;
			}
			k++;
			liczona -= cyfra;
			liczona /= 16;
		}
		k--;
	}
	else {
		dwujkowy[0] = '0';
		osemkowy[0] = '0';
		szesnastkowy[0] = '0';
	}
	cout << "twoja liczba : " << liczba << " w systemie dziesietnym to :" << endl;
	for (i; i >= 0; i--) {
		cout << dwujkowy[i];
	}
	cout << " w systemie dwujkowym" << endl;
	for (j; j >= 0; j--) {
		cout << osemkowy[j];
	}
	cout << " w systemie osemkowym" << endl;
	for (k; k >= 0; k--) {
		cout << szesnastkowy[k];
	}
	cout << " w systemie szesnastkowym" << endl;
	return 0;
}