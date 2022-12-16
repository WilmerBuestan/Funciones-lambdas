#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {

	int x=50 ,y=100;
	vector <int> v {5,15,1,2,8};
	for_each(v.begin(), v.end(),[&](int i){
		++x;
		--y;
		cout<<i*x*y<<endl;
	});
	return 0;
}