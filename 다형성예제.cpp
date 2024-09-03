#include <iostream>
#include <string>

using namespace std;

class Food {

public:
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {}

	void show() {
		cout << "���� �� : " << civil_ << endl;
		cout << "���� : " << force_ << endl;
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << territory_ << endl;
	}

private:
	int civil_; //���μ�
	int force_; //����
	string name_; //�̸�
	int territory_; //��(����)
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		:Food(civil, force, name, territory), garlic_(garic), pepper_(pepper) {}

	void show() {
		cout << "���� : " << garlic_ << endl;
		cout << "���� : " << pepper_ << endl;
	}
private:
	int garic_;
	int pepper_;
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int suger)
		:Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {}
	void show() {
		cout << "����ƾ : " << gelatin_ << endl;
		cout << "���� : " << suger_ << endl;
	}
private:
	int gelatin_;
	int suger_; //������ ��
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		:Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {}
	void show() {
		cout << "���� : " << milk_ << endl;
		cout << "������ : " << rennet_ << endl;
	}
private:
	int milk_;
	int rennet_; //������

};

void main(void) {
	Food* player = new Kimchi(15, 95, "����ġ", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "¥��ġ", 100, 20, 100);

	friends->show();
	player->show();

	delete friends;
	delete player;
}