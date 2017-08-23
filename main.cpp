#include <iostream>
#include <string>
#include <cmath>
using namespace std;
long rpc(string name){
	long rp;
	for (int i = 0; i < name.length(); i++)
	{
		rp+=name[i];
	}
	rp = abs(rp);
	return rp % 100;
}

int main(){
	string name;
	cout << "请输入姓名：";
	cin >> name;
	int rpv = 100 - rpc(name);
	cout <<name << "的人品值为：" << rpv  << endl;
	return 0;
}
