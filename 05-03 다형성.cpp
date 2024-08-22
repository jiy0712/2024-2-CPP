#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num)
	{
		cout << "�̸�" << name_ << endl;
		cout << "����" << age_ << endl;
		cout << "�ٸ�����" << leg_num_ << endl;
	}
	void walk(void) { //�ȴ�
		cout << "�ȴ�" << endl;
	}
	void bark(void) { //¢��
		cout << "¢��" << endl;
	}
	void eat(void) { //�Դ�
		cout << "�Դ�" << endl;
	}
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

	//C++�� ����Ʈ�� �������ε��̱� ������ �����Լ��� �������̵� �ؾ� �Ѵ�.
	void bark() {cout << "��������" << endl;}
	void eat() {cout << "��~��~" << endl;}
	void walk() {cout << "�r�r�r�r" << endl;}

private:
	int loyalty_; //�漺��
};

int main(void) {
	Animal* animal = new Animal("�������", 8, 2);
	animal->bark();
	animal->eat();
	animal->walk();
	delete animal;

	animal = new Dog("����", 5, 2, 100);
	animal->bark();
	animal->eat();
	animal->walk();
	delete animal;

}//main

// ������ <- ��
// �Լ� �����ε� : ���� �̸� �ٸ� �Ű�����
// �̶� �Լ� �����ε��� �Լ���
// -> �Լ� : ��ȯ�� �Լ��̸� ( �Ű����� ) -> �� �������� �ñ״�ó
