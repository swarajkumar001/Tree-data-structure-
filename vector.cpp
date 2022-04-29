#include <iostream>
#include <vector> // header file for using vector
using namespace std;

int main() {
	//vector<int> * vp = new vector<int>(); // dynamivcally allocated vector
	vector<int> v;  // vector  is actually  a template.... 

	for (int i = 0; i < 100; i++) {
		cout << "cap:" << v.capacity() << endl;
		cout << "size:" << v.size() << endl;
		v.push_back(i + 1);
	}

	v.push_back(10); // it will also increase the whenever need ...its safer to use this for insertion not [ ]
	v.push_back(20);
	v.push_back(30);

	v[1] = 100; // for updatation we should use this 
	v.at(1)=100;// it is also use for update but one benefit with this is it will also refelect the error if it 
	            // occuring....

	// dont use [] for inserting elements
	//v[3] = 1002;
	//v[4] = 1234;

	v.push_back(23);
	v.push_back(234);

	v.pop_back();

	/*
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}


	cout << v[0] << endl;
	cout << v[1] << endl;
	cout << v[2] << endl;
	cout << v[3] << endl;
	cout << v[4] << endl;
	cout << v[5] << endl;
	cout << v[6] << endl;

	cout << "Size: " << v.size() << endl;

	cout << v.at(2) << endl;
	cout << v.at(6) << endl;
	*/
}
