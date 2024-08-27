#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num){
		cout << "�̸�" << name_ << endl;
		cout << "����" << age_ << endl;
		cout << "�ٸ�����" << leg_num_ << endl;
	}
	virtual ~Animal() { cout << "Animal �Ҹ���" << endl; }
	
	//���� �����Լ�(�߻�޼���)
	virtual void walk(void) = 0;
	virtual void bark(void) = 0;
	virtual void eat(void) = 0;
	
private:
	string name_;
	unsigned int age_;
	//unsigend : ������� ����ϸ� ���̴� �ڷ���
	int leg_num_;

};

class Dog : public Animal {
	//Animal�ڵ� �ڿ� ��ġ�ؾ���, public���� ���� ����
public:
	Dog(string name, int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty)
	{
		cout << "�漺��" << endl;
	}
	virtual ~Dog() { cout << "Dog �Ҹ���" << endl; }

	//C++�� ����Ʈ�� �������ε��̱� ������ �����Լ��� �������̵� �ؾ� �Ѵ�.
	void bark() override {cout << "��������" << endl;}
	void eat()  override {cout << "��~��~" << endl;}
	void walk() override {cout << "�r�r�r�r" << endl;}

private:
	int loyalty_; //�漺��
};

int main(void) {
	//�߻�Ŭ������ ��ü�� ������ �� ����(new Animal() �Ұ�))
	Animal* animal = new Dog("����", 5, 2, 100);
	animal->bark();
	delete animal;

}//main

// ������ <- ��
// �Լ� �����ε� : ���� �̸� �ٸ� �Ű�����
// �̶� �Լ� �����ε��� �Լ���
// -> �Լ� : ��ȯ�� �Լ��̸� ( �Ű����� ) -> �� �������� �ñ״�ó
