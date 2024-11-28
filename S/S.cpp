#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	string continent;
	string spacies;
	double weight;
public:
	Animal() = default;
	Animal(const char* _name, const char* king, const char* cont, double _wei) {
		name = _name;
		spacies = king;
		continent = cont;
		weight = _wei;
	}
	void Input() {
		cout << "Input name - ";
		cin >> name;

		cout << "Input kingdown - ";
		cin >> spacies;

		cout << "Input weight - ";
		cin >> weight;

		cout << "Input continent - ";
		cin >> continent;
	}
	void Print() {
		cout << "Name - " << name << endl << "Spacies - " << spacies << endl << "Weight - " << weight << endl << "Continent - " << continent << endl;
	}
	virtual void Eat() = 0;
	virtual void Sound() = 0;
};


class Elephant :public Animal {
public:
	Elephant() {}
	Elephant(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "POO-OOO-OOO" << endl;
	}
	void Eat() {
		cout << "herbivores" << endl;
	}
};

class Cat :public Animal {
public:
	Cat() {}
	Cat(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "Meow-Meow" << endl;
	}
	void Eat() {
		cout << "MEAT-EATERS" << endl;
	}
};

class Dog :public Animal {
public:
	Dog() {}
	Dog(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "Bark-bark" << endl;
	}
	void Eat() {
		cout << "MEAT-EATERS" << endl;
	}
};


class Parrot :public Animal {
public:
	Parrot() {}
	Parrot(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "KAR-KAR" << endl;
	}
	void Eat() {
		cout << "herbivores" << endl;
	}
};

int main()
{
	setlocale(0, "ru");
	Elephant obj1("African elephant", "Elephant", "Africa", 5000);
	obj1.Print();
	obj1.Eat();
	obj1.Sound();

	Cat obj2("Home Cat", "Cats", "Everywhere", 6);
	obj2.Print();
	obj2.Eat();
	obj2.Sound();
	cout << endl << endl;

	Dog obj3; ("Husky", "Dogs", "Europe,Asia,America,Maybe Africa", 80);
	obj3.Input();
	obj3.Print();
	obj3.Eat();
	obj3.Sound();

	Parrot obj4; ("budgie wavy", "Parrots", "Europe,Asia,America,Maybe Africa", 1);
	obj3.Input();
	obj3.Print();
	obj3.Eat();
	obj3.Sound();
}
int main()
{
	setlocale(0, "ru");

	Animal* Elp1 = new Elephant("African elephant", "Elephant", "Africa", 5000);
	Elp1->Print();
	Elp1->Eat();
	Elp1->Sound();

	cout << endl;

	Animal* Catt2 = new Cat("Home Cat", "Cats", "Everywhere", 6);
	Catt2->Print();
	Catt2->Eat();
	Catt2->Sound();

	cout << endl;

	Animal* Dogg3 = new Dog("Husky", "Dogs", "Europe,Asia,America,Maybe Africa", 80);
	Dogg3->Input();
	Dogg3->Print();
	Dogg3->Eat();
	Dogg3->Sound();

	cout << endl;

	Animal* Parrott4 = new Parrot("budgie wavy", "Parrots", "Europe,Asia,America,Maybe Africa", 1);
	Parrott4->Input();
	Parrott4->Print();
	Parrott4->Eat();
	Parrott4->Sound();


	delete Elp1;
	delete Catt2;
	delete Dogg3;
	delete Parrott4;

	return 0;
}
