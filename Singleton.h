#pragma once
#include <iostream>
#include <string>

using namespace std;


class Singleton {

private:
	int value;
	static Singleton*obj;
		Singleton(int v) :value(v){}

public:


	int getValue()const {
		return value;
	}

	static Singleton* getObj(int v=4100) {
		if (obj == nullptr) {

			obj = new Singleton(v);

		}
		return obj;
	}

	void setValue(int value) {
		this->value = value;
	}

};


class Logger {

private:
	string name;
	static Logger*obj;
	Logger(string name) :name(name){}

public:

	string getName()const {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	static Logger*getObj(string name = "user") {
		if (obj == nullptr) {
			
			obj = new Logger(name);
			
		}
		return obj;
	}

	void print() {
		cout << name << " on " << endl;
	}


};
