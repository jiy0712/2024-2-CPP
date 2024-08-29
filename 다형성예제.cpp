#include <iostream>
#include <string>

using namespace std;

class Food {

public:
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {}
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
private:
	int garic_;
	int pepper_;
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int suger)
		:Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {}
private:
	int gelatin_;
	int suger_; //������ ��
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int Rennet)
		:Food(civil, force, name, territory), milk_(milk), Rennet_(Rennet) {}
private:
	int milk_;
	int Rennet_; //������

};