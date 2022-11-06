// Лабораторна робота № 5.4

#include <iostream>
#include  <cmath>

using namespace std;

double S0(const int K, const int N)
{
	double s = 0;
	for (int j = 2; j <= N; j++)
		s += (1. * j * (N - j)) / (j * j + pow((N - j), 2));
	return s;
}

double S1(const int K, const int N, const int j)
{
	if (j > N)
		return 0;
	else
		return (1. * j * (N - j)) / (j * j + pow((N - j), 2)) + S1(K, N, j + 1);
}

double S2(const int K, const int N, const int j)
{
	if (j < K)
		return 0;
	else
		return (1. * j * (N - j)) / (j * j + pow((N - j), 2)) + S2(K, N, j - 1);
}

double S3(const int K, const int N, const int j, double t)
{
	t = t + (1. * j * (N - j)) / (j * j + pow((N - j), 2));
	if (j >= N)
		return t;
	else
		return S3(K, N, j + 1, t);
}

double S4(const int K, const int N, const int j, double t)
{
	t = t + (1. * j * (N - j)) / (j * j + pow((N - j), 2));
	if (j <= K)
		return t;
	else
		return S4(K, N, j - 1, t);
}

int main()
{
	int K = 2, N;

	cout << "j = 2" << endl;
	cout << "N = "; cin >> N;

	cout << "(iter) S0 = " << S0(K, N) << endl;
	cout << "(rec up ++) S1 = " << S1(K, N, K) << endl;
	cout << "(rec up --) S2 = " << S2(K, N, N) << endl;
	cout << "(rec down ++) S3 = " << S3(K, N, K, 0) << endl;
	cout << "(rec down --) S4 = " << S4(K, N, N, 0) << endl;

	return 0;
}