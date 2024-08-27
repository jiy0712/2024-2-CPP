#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num){
		cout << "이름" << name_ << endl;
		cout << "나이" << age_ << endl;
		cout << "다리갯수" << leg_num_ << endl;
	}
	virtual ~Animal() { cout << "Animal 소멸자" << endl; }
	
	//순수 가상함수(추상메서드)
	virtual void walk(void) = 0;
	virtual void bark(void) = 0;
	virtual void eat(void) = 0;
	
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
	virtual ~Dog() { cout << "Dog 소멸자" << endl; }

	//C++은 디폴트가 정적바인딩이기 때문에 가상함수로 오버라이딩 해야 한다.
	void bark() override {cout << "울프울프" << endl;}
	void eat()  override {cout << "왕~왕~" << endl;}
	void walk() override {cout << "촵촵촵촵" << endl;}

private:
	int loyalty_; //충성도
};

int main(void) {
	//추상클래스는 객체를 생성할 수 없다(new Animal() 불가))
	Animal* animal = new Dog("마루", 5, 2, 100);
	animal->bark();
	delete animal;

}//main

// 다형성 <- 상성
// 함수 오버로딩 : 같은 이름 다른 매개변수
// 이때 함수 오버로딩에 함수는
// -> 함수 : 반환형 함수이름 ( 매개변수 ) -> 이 세가지가 시그니처
