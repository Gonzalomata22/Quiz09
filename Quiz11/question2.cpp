#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;

void check_banana(string fileName){
	string fullString, banana = "banana";

	ifstream inFile;
	inFile.open(fileName);

	int count;

	if (inFile.good()) {
		while (getline (inFile, fullString)) {
	    	transform(fullString.begin(),fullString.end(),fullString.begin(), ::tolower);
		    if (fullString.find(banana) != string::npos) {
		        count ++;
		    }
    	}
    cout << "Times that 'Banana' appears is: " << count << endl;
  	} else {
			cout << "There´s something wrong with your input file. Try again." << endl;
			exit(1);
	}
		
} 

int main(){
	check_banana("banana.txt");	
	return 0;
}