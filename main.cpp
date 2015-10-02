#include <iostream>
#include <string>
#include <math.h>
using namespace std;
long rp(string a){
	long c;
	for (int i = 0; i <a.length(); ++i)
	{
		c+=a[i];
	}
	c = abs(c);
	return c % 100;
}

int main(){
	string name;
	cout << "请输入姓名：";
	cin >> name;
	int rpv = 100 - rp(name);
	cout <<name << "的人品值为:" << rpv  << endl;
	return 0;
}

