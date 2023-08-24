#include <iostream>

unsigned int fib(unsigned int position);
int main()
{
	using namespace std;
	unsigned int answer, position;
	
	cout << "Ktory wyraz ciagu?";
	cin >> position;
	cout << endl;
	
	answer = fib(position);
	cout << position << " wyraz ciagu Fibonacciego ma wartosc " << answer << endl;
	cout << "Wprowadz dowolny znak, aby zakonczyc program...";
	
	char quit;
	cin >> quit;
	return 0;
}

unsigned int fib(unsigned int n)
{
	unsigned int M2 = 1, M1 = 1, answer = 2;
	
	if (n < 3)
	return 1;
	
	for (n -=3; n !=0; n--)
	{
		M2 = M1;
		M1 = answer;
		answer = M1 + M2;
	}
	
	return answer;
}
