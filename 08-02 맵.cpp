#include <iostream>
#include <map>

using namespace std;

void main(void) {

	map<string, long long> money;

	//�� �߰�
	money["����"] = 100000000;
	money["����"] = 300000000;
	money["�μ�"] = 100;

	//�ݺ���
	map<string, long long>::iterator iter;
	for (iter = money.begin(); iter != money.end(); iter++)
		cout << iter->first <<"��" << iter->second << endl;

	//�� ����
	money["�μ�"] = 100000000;
	cout << money["�μ�"] << endl;

	//ũ��
	cout << money.size() << endl;
}//main