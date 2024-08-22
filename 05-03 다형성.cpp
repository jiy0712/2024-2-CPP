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
	~Animal() { cout << "Animal �Ҹ���" << endl; }
	virtual void walk(void) { //�ȴ�
		cout << "�ȴ�" << endl;
	}
	virtual void bark(void) { //¢��
		cout << "¢��" << endl;
	}
	virtual void eat(void) { //�Դ�
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
	~Dog() { cout << "Dog �Ҹ���" << endl; }

	//C++�� ����Ʈ�� �������ε��̱� ������ �����Լ��� �������̵� �ؾ� �Ѵ�.
	void bark() override {cout << "��������" << endl;}
	void eat()  override {cout << "��~��~" << endl;}
	void walk() override {cout << "�r�r�r�r" << endl;}

private:
	int loyalty_; //�漺��
};

int main(void) {
	Animal* animal = new Dog("����", 5, 2, 100);
	//�������ε����� ���� Dog�Ҹ��ڴ� ȣ���� �ȵ�
	delete animal;

}//main

// ������ <- ��
// �Լ� �����ε� : ���� �̸� �ٸ� �Ű�����
// �̶� �Լ� �����ε��� �Լ���
// -> �Լ� : ��ȯ�� �Լ��̸� ( �Ű����� ) -> �� �������� �ñ״�ó
