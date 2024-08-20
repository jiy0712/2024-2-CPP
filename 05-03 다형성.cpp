#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num)
	{}
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

void main(void) {
	Animal* animal = new Animal("요아조비", 8, 2);
	animal->bark();
	animal->eat();
	animal->walk();
	delete animal;
}//main

// 다형성 <- 상성
// 함수 오버로딩 : 같은 이름 다른 매개변수
// 이때 함수 오버로딩에 함수는
// -> 함수 : 반환형 함수이름 ( 매개변수 ) -> 이 세가지가 시그니처
