//Bando Arsene
//Andrew  Fuller
//Cogan Spery
//Victor Hernandez
//Michael Kessel

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ifstream file;
	string g,b;
	cout << "please enter the name of the file: " << endl;
	cin >> g;
	file.open(g);
	if (file) {  //checks if file is open
		while (file >> b) { // read file into string
			cout << b << endl;
		}
	}
	
	else
	{
		cout << "error opening file " << endl;
	}
	file.close();
	system("pause");
	return 0;
}
