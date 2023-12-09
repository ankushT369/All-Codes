#include <iostream>
using namespace std;

class Constructor {
	public: 
	        int value;
		int x, y = 0;
	//Default Constructor
	Constructor():value(0){}

	//Param Constructor
	Constructor(int a, int b):x(a), y(b){}

	//Copy Constructor 
	Constructor(const Constructor &source):value(source.value){}
};

int main() {
	Constructor obj;
	obj.value = 435;
	Constructor obj1 = obj;//copy the obj to obj1 by copy construtor
	cout  << obj1.value << '\n'; 
	return 0;
}
