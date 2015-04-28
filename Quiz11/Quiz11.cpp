#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void readNumbersFromFile(string random_numbers){
	float average = 0.0, Total = 0.0, var = 0.0;
	int counter=0, count = 0;
	string line;
	ifstream theFile(random_numbers);
	if(theFile.is_open()){
		while(getline(theFile,line)){
			int lines = stoi(line);
			Total = Total + lines;
			counter++;
		}
	}

	average = Total/counter;
	if(theFile.is_open()){
		while(getline(theFile, line)){
			int lines = stoi(line);
			var = var + (lines - average) * (lines - average);
		}
	}

	cout<< counter << " lines in that file"<< endl;
	cout << "The total of the values is: " << Total << endl;
	cout << "The average of those values is: " << average << endl;
	cout << "The Standard Deviation in this file is: " << sqrt(var) << endl;
}

int main(){
	readNumbersFromFile("random_numbers.txt");
	return 0;
}