// The transform algorithm.
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
// A simple transformation function.

int xform(int i) {
	return i * i; // square original value
}

int main()
{
	list<int> xl;
	int i;
	// put values into list
	for(i=0; i<10; i++) xl.push_back(i);
		cout << "Original contents of xl:: ";
		list<int>::iterator p = xl.begin();
		
	while(p != xl.end()) {
		cout << *p << " ";
		p++;
	}
	cout << endl;
	// transform xl
	p = transform(xl.begin(), xl.end(), xl.begin(), xform);
	cout << "Transformed contents of xl: ";
	p = xl.begin();
	
	while(p != xl.end()) {
		cout << *p << " ";
		p++;
	}
	
return 0;
}