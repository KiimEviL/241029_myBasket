#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Fruit {
private:
	string fName;
public:
	Fruit(const string& name = "") :fName(name) {};
	//Fruit(string& name) : fName(name) {};
	string getName() const {
		//string getName()  {
		return fName;
	}
};

class Basket {
private:
	vector<Fruit> fBasket;
public:
	void add(const Fruit& fName) {
		//void add( Fruit& fName) {
		fBasket.push_back(fName);
	}
	void check() {
		cout << "items in basket: " << endl;
		for (vector<Fruit>::iterator i = fBasket.begin();
			i != fBasket.end(); i++) {
			cout << i->getName() << endl;
		}
	}
};

int main() {
	Fruit f("arbuz");
	f.getName();

	Basket fBasket;
	fBasket.add(Fruit("dynia"));
	fBasket.add(Fruit("cherry"));
	fBasket.check();
}