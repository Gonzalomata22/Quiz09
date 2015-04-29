#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;

void check_banana(string fileName){
	string line, banana = "banana";

	ifstream inFile;
	inFile.open(fileName);

	int counter = 0;

	while(getline(inFile,line)){

		transform(line.begin(), line.end(), line.begin(), :: tolower);

		if(line.find(banana)!=string::npos){
			counter++;
		}
	}
	cout << "The word banana appears " << counter << " times in the file." << endl;
} 

int main(){
	check_banana("banana.txt");	
	return 0;
}