#include <iostream>
#include <string>

using namespace std;

class plane {
public:
	string name;
	double price;
	int capacity;

	string get_info() {
		string s = "";
		s += "Plane name: " + name;
		s += "; price = " + to_string(price);
		s += "; capacity = " + to_string(capacity);
		return s;
	}
};

string get_best_plane(plane pl1, plane pl2) {
	double pr1 = pl1.price / pl1.capacity;
	double pr2 = pl2.price / pl2.capacity;

	return pr1 < pr2 ? pl1.name : pl2.name;
}

int main() {
	plane plane1;
	plane plane2;

	plane1.name = "Airbus";
	plane1.capacity = 300;
	plane1.price = 20000000;

	plane2.name = "Boeing";
	plane2.capacity = 280;
	plane2.price = 21000000;

	cout << plane1.get_info() << endl;
	cout << plane2.get_info() << endl;

	cout << "The best plane is " << get_best_plane(plane1, plane2);

	return 0;
}