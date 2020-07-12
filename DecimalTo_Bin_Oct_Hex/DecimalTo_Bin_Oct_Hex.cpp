#include <iostream>
#include <algorithm>
using namespace std;

string CodeNumber(int DecimalNumber,int Code) 
{
	char Numbers[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	string codeNumber = "";
	
	int RestLeftInProces;
	while (DecimalNumber > 0) {
		RestLeftInProces = DecimalNumber % Code;
		DecimalNumber /= Code;
		codeNumber += Numbers[RestLeftInProces];
	}
	reverse(codeNumber.begin(),codeNumber.end());
	return codeNumber;
}

int main(int argc, char** argv) {
	cout << "Podaj liczbe dziesietna :";
	int decimalNumber,code;
	cin >> decimalNumber;
	do
	{
		cout << "Podaj kod liczbowy max 2-16 :";
		cin >> code;
	} while (code < 2 || code > 16);
	cout << "Liczba " << decimalNumber << " w kodzie " << code << "-wym to " << CodeNumber(decimalNumber, code);

}