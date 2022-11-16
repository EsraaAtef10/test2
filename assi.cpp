#include <iostream>
using namespace std;

int main() {
	int inputp[10], count, i, num; 
	cout << "Enter Number of Elment in Array\n";
	cin >> count;

	
	cout << "Enter" << count << "numbers  \n";
	for (i = 0; i < count; i++;) {
		cin >> input[i];
	}
	count << "Enter a number to search in Array\n";
	cin >> num;

	for (i =0; i < count; i++;)  {
		if (input[i] == num) {
			cout << " Elment found at indexv" << i;
			break;
		}




		if (i == count) {
			cout << "Elment Number NOT present in Iput Array\n";
		}

		return 0;







	
}