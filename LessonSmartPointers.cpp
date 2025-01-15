#include <memory>
#include <iostream>

using namespace std;

//class Car {
//	string brand;
//	string model;
//
//public:
//	Car() {
//		this->brand = "BMW";
//		this->model = "X5";
//	}
//
//	Car(string brand, string model) {
//		this->brand = brand;
//		this->model = model;
//	}
//
//	void print() {
//		cout << "Brand: " << brand << ", Model: " << model << endl;
//	}
//};

class Human {
	string fullName;
	int age;
public:
	Human() {
		this->fullName = "Alexey Marahovskiy Pavlovich";
		this->age = 16;
	}

	Human(string fullName, int age) {
		this->fullName = fullName;
		this->age = age;
	}

	void print() {
		cout << "Full name: " << fullName << endl;
		cout << "Age: " << age << endl;
	}
};

int main()
{

	unique_ptr<Human[]> humans(new Human[5]);
	for (int i = 0; i < 5; i++) {
		humans[i].print();
	}
	shared_ptr<Human[]> humans2 = move(humans);
	for (int i = 0; i < 5; i++) {
		humans2[i].print();
	}



	//unique_ptr<Car[]> cars(new Car[10]);

	//for (int i = 0; i < 10; i++) {
	//	cars[i].print();
	//}

	//unique_ptr<int> ptr = make_unique<int>(42);
	//cout << "Value = " << *ptr << endl;

	//Передача властності
	//unique_ptr<int> ptr2 = move(ptr);
	//if (!ptr) cout << "ptr is now null" << endl;

	//shared_ptr<int> ptr1 = make_shared<int>(42);
	//shared_ptr<int> ptr2 = ptr1;
	//cout << "Value: " << *ptr1 << " , use_count: " << ptr1.use_count() << endl;

	//shared_ptr<int[]> p1(new int[10]);
	//
	//for (int i = 0; i < 10; i++) {
	//	p1[i] = i;
	//	cout << p1[i] << endl;
	//}
}