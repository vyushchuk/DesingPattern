#pragma once
#include <iostream>
#include <string>

using namespace std;

class Toy abstract {
private:
	string name;

public:
	Toy(string name):name(name){}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	void print() {
		cout << name << endl;
	}
	void useToys() {

	}

};

class Bear:public Toy{
public:
	Bear(string name):Toy(name){}
	Bear():Toy("Bear"){}

};

class Cat:public Toy{
public:
	Cat(string name) :Toy(name) {}
	Cat():Toy("Cat") {}

};

class TeddyCat :public Cat {
public:
	TeddyCat ():Cat("teddy cat"){}
};

class TeddyBear :public Bear {
public:
	TeddyBear():Bear("teddy bear") {}
};

class WoodenBear :public Bear {
public:
	WoodenBear():Bear("Wooden bear"){}
};

class WoodenCat :public Cat {
public:
	WoodenCat():Cat("Wooden cat"){}
};

class ToysFactory abstract {
public:
	virtual Bear*createBear() = 0;
	virtual Cat*createCat() = 0;
};

class WoodenToys: public ToysFactory {
	Bear*createBear()override
	{
		return new WoodenBear();
	}

	Cat*createCat()override
	{
		return new WoodenCat();
	}
};

class TeddyToys : public ToysFactory {
	Bear*createBear()override {
		return new TeddyBear();
	}

	Cat*createCat()override {
		return new TeddyCat();
	}
};

void useToys(ToysFactory* fact) {
	Bear* bear = fact->createBear();
	bear->print();
	Cat*cat = fact->createCat();
	cat->print();

}
