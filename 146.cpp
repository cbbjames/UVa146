#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
bool judge(string s) {
	for (int i = 0; i < s.size()-1; i++)
		if (s[i + 1]>s[i]) return true;
	return false;
}
int main() {
	char s[55]; 
	while (scanf("%s",s)!=EOF&&s[0] != '#') {
		if (!judge(s)) { cout << "No Successor" << endl; }
		else { next_permutation(s, s + strlen(s)); cout << s << endl; }
	}
	//system("PAUSE");
	return 0;
}