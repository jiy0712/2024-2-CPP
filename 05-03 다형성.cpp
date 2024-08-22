#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num)
	{
		cout << "이름" << name_ << endl;
		cout << "나이" << age_ << endl;
		cout << "다리갯수" << leg_num_ << endl;
	}
	void walk(void) { //걷는
		cout << "걷다" << endl;
	}
	void bark(void) { //짖는
		cout << "짖다" << endl;
	}
	void eat(void) { //먹는
		cout << "먹다" << endl;
	}
private:
	string name_;
	unsigned int age_;
	//unsigend : 양수값만 사용하면 쓰이는 자료형
	int leg_num_;

};

class Dog : public Animal {
	//Animal코드 뒤에 위치해야함, public쓰는 것이 좋음
public:
	Dog(string name, int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty)
	{
		cout << "충성도" << endl;
	}

	//C++은 디폴트가 정적바인딩이기 때문에 가상함수로 오버라이딩 해야 한다.
	void bark() {cout << "울프울프" << endl;}
	void eat() {cout << "왕~왕~" << endl;}
	void walk() {cout << "촵촵촵촵" << endl;}

private:
	int loyalty_; //충성도
};

int main(void) {
	Animal* animal = new Animal("요아조비", 8, 2);
	animal->bark();
	animal->eat();
	animal->walk();
	delete animal;

	animal = new Dog("마루", 5, 2, 100);
	animal->bark();
	animal->eat();
	animal->walk();
	delete animal;

}//main

// 다형성 <- 상성
// 함수 오버로딩 : 같은 이름 다른 매개변수
// 이때 함수 오버로딩에 함수는
// -> 함수 : 반환형 함수이름 ( 매개변수 ) -> 이 세가지가 시그니처
