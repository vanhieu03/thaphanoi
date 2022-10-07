#include<iostream>
using namespace std;
int thaphn(int n, char nguon, char trunggian, char dich)
{
	if (n == 1)
		cout << nguon << "-->" << dich << endl;
	else
	{
		thaphn(n - 1, nguon, dich, trunggian);
		thaphn(1, nguon, trunggian, dich);
		return thaphn(n - 1, trunggian, nguon, dich);
	}
}
int main()
{
	int n;
	cout << "Nhap vao so dia: ";
	cin >> n;
	thaphn(n, 'A', 'B', 'C');
	return 0;
}
