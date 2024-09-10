#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Food {

public:
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {}

	virtual void show() {
		Food::show();
		cout << "국민 수 : " << civil_ << endl;
		cout << "군력 : " << force_ << endl;
		cout << "이름 : " << name_ << endl;
		cout << "면적 : " << territory_ << endl;
	}

//	void attack(Food* target) {
//		target->force_ -= force_;
//		if (target->force_ <= 0)
//			delete target;
//	}

	virtual void attack(Food* target) = 0;

	int civil_; //국민수
	int force_; //군력
	string name_; //이름
	int territory_; //땅(면적)
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		:Food(civil, force, name, territory), garlic_(garic), pepper_(pepper) {
		ca_ = 0;
	}

	void show() {
		Food::show();
		cout << "마늘 : " << garlic_ << endl;
		cout << "고추 : " << pepper_ << endl;
	}

	//기본공격 매 3타마다 크리티컬 데미지
	void attack(Food* target) override {
		ca_++;
		if (ca_ % 3 == 0)
			target->force_ -= this->force_ * 2;
		else
			target->force_ -= this->force_;
	}

	int garic_;
	int pepper_;
	int ca_; //3타당 크리티컬 어택
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int suger)
		:Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {}
	void show() {
		Food::show();
		cout << "젤라틴 : " << gelatin_ << endl;
		cout << "설탕 : " << suger_ << endl;
	}

	void attack(Food* target) override {
		target->forece_ += this->force_ / 2;
	}

	int gelatin_;
	int suger_; //설탕의 힘
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		:Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {}
	void show() {
		Food::show();
		cout << "우유 : " << milk_ << endl;
		cout << "응고제 : " << rennet_ << endl;
	}
	void attack(Food* target) override {
		target->forece_ -= this->force_ / 3;
	}

	int milk_;
	int rennet_; //응고제

};

void main(void) {
	Food* player = new Kimchi(15, 95, "갓김치", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "짜계치", 100, 20, 100);

	cout << "★나★" << endl;
	friends->show();

	cout << endl << endl;
	cout << "★상대방★" << endl;
	player->show();

	cout << "----------------------------------" << endl;

	while (true) {
		int select;
		cout << "1. 공격" << endl;
		cout << "2. 특수1" << endl;
		cout << "3. 특수2" << endl;
		cout << "4. 방어" << endl;
		cin >> select;

		switch (select) {
		case 1:
			//TODO : 공격
			cout << "공격" << endl;

			break;
		case 2:
			//TODO : 특수1
			cout << "특수1" << endl;
			break;
		case 3:
			//TODO : 특수2
			cout << "특수2" << endl;
			break;
		case 4:
			//TODO : 방어
			cout << "방어" << endl;
			break;
		default:

		}
		ststem("pause");
	}

	delete friends;
	delete player;
}