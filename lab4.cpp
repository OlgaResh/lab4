#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	char quote[128] = "";

	cout << "Ваша любимая цитата из мультфильма";
	cin >> quote;
	cout << quote << endl;

	return 0;
}