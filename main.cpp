#include <iostream>
using namespace std;

int fib(int n){
	if (n == 1 || n == 2)
		return 1;
	return fib (n-1) + fib (n-2);
}

int main(){
	setlocale (LC_ALL,"RUS");
	int n;
	cout << "n =";
	cin>>n;
	
	cout<<"Результат: "<<fib(n)<<endl;
	return 0;
}