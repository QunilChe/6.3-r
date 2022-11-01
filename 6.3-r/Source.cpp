#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create1(int* t, const int size, const int Low, const int High, int i)
{
	t[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create1(t, size, Low, High, i + 1);
}


void Print1(int* t, const int size, int i)
{
	cout << setw(4) << t[i];
	if (i < size - 1)
		Print1(t, size, i + 1);
	else
		cout << endl;
}

int Sum1(int* t, const int size, int i, int S)
{
	if (t[i] < 0)
		S += t[i];
	if (i < size - 1)
		return Sum1(t, size, i + 1, S);
	else
	return S;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int t[n];
	int Low = -5;
	int High = 12;
	Create1(t, n, Low, High, 0);
	Print1(t, n, 0);
	cout << "s = " << Sum1(t, n, 0, 0) << endl;
	return 0;
}
