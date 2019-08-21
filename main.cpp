#include"Header.h"
#include"Toy.h"

Singleton*Singleton::obj = 0;

int main() {

	Singleton*value1 = Singleton::getObj();
	cout << value1->getValue() << endl;

	Singleton*value2 = Singleton::getObj(5000);
	cout << value2->getValue() << endl;
	value2->setValue(5000);
	cout << value2->getValue() << endl;
	cout << value1->getValue() << endl;

	WoodenToys* toy = new WoodenToys();
	useToys(toy);

	system("pause");
}