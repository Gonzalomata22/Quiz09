#include <iostream>
#include <vector>
using namespace std;

int dotProduct(vector<int> v1, vector<int> v2, int size){
	int dotProduct=0;
	for(int i=0; i<size; i++){
		dotProduct = dotProduct + (v1[i] * v2[i]);
	}
	return dotProduct;
}

int main(){
	vector<int> v1;
	vector<int> v2;
	int size, counter1=0, counter2=0, usernumber;

	cout << "This programm makes a dotProduct of two vectors." << endl;
	cout << "Give me the size for vector1 and 2, please: ";
	cin >> size;
	do{
		cout << "Give me the value number" << counter1+1 << ", for vector 1" << endl; 
		cout << "(Remember that it must be same size between the two vectors): ";
		cin >> usernumber;
		v1.push_back(usernumber);
		counter1++;
	}while(counter1 < size);
	do{
		cout << "Give me the value number" << counter2+1 << ", for vector 2" << endl; 
		cout << "(Remember that it must be same size between the two vectors): ";
		cin >> usernumber;
		v2.push_back(usernumber);
		counter2++;
	}while(counter2 < size);

	cout << "The dotProduct of those two vectors is: " << dotProduct(v1, v2, size) << endl;
	return 0;
}