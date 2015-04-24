#include <iostream>
#include <vector>
using namespace std;

int findThrees(vector<int> numbers){
	int sumofnumbers=0;

	for(int i = 0; i <= 7; i++){
		if(numbers[i] % 3 == 0) {
			sumofnumbers = sumofnumbers + numbers[i];
		}
	}
	return sumofnumbers;
}

int main(){
	vector<int> v;
	int counter = 0, usernumber, size;
	cout << "This programm makes a sum of numbers divisibles by 3, saved in a vector." << endl << endl;
	cout << "How many numbers you want to put?: ";
	cin >> size;
	do{
		cout << "Give me the value number " << counter+1 << " for the vector: ";
		cin >> usernumber;
		v.push_back(usernumber);
		counter++;
	} while(counter < size);

	cout << "The sum of the numbers divisibles by 3 is: " << findThrees(v) << endl;
	return 0;
}