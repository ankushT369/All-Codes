#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base function\n"; }
};

class Der : public Base {
public: 
	void f() override { cout << "Der funtion\n"; }
};

int main() {
	Base* base = new Der;
	base->f();
	return 0;
}
