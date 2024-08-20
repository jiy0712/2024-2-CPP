#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num)
	{}
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

void main(void) {
	Animal* animal = new Animal("�������", 8, 2);
	animal->bark();
	animal->eat();
	animal->walk();
	delete animal;
}//main

// ������ <- ��
// �Լ� �����ε� : ���� �̸� �ٸ� �Ű�����
// �̶� �Լ� �����ε��� �Լ���
// -> �Լ� : ��ȯ�� �Լ��̸� ( �Ű����� ) -> �� �������� �ñ״�ó
