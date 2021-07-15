//count vowels
#include <iostream>
#include <string>
using namespace std;
int main(){
	cout << "enter your text to count vowels" << endl;
	char text[1000];
	cin >> text;
	char v1 = 'e';
	char v2 = 'o';
	char v3 = 'u';
	char v4 = 'a';
	char v5 = 'i';
	int nv1 = 0;
	int nv2 = 0;
	int nv3 = 0;
	int nv4 = 0;
	int nv5 = 0;
	for (int i = 0; i < sizeof(text); i++){
		if (text[i] == v1) nv1++;
		else if (text[i] == v2) nv2++;
		else if (text[i] == v3) nv3++;
		else if (text[i] == v4) nv4++;
		else if (text[i] == v5) nv5++;
	}
	cout << "letter 'e' is found " << nv1 << " times in the text" << endl;
	cout << "letter 'o' is found " << nv2 << " times in the text" << endl;
	cout << "letter 'u' is found " << nv3 << " times in the text" << endl;
	cout << "letter 'a' is found " << nv4 << " times in the text" << endl;
	cout << "letter 'i' is found " << nv5 << " times in the text" << endl;
}