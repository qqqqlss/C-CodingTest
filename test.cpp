# include<bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define loop(x,n) for(int x=0; x<n; x++)
typedef string str;
str a;
double b;
char c;
str s;
int T;
int main(){
	
	cin >> a;
	cout << a << "\n";
	
	loop(x,1) {
		cout << x << a << "\n";
	}
	
	scanf("%lf %c", &b, &c);
	printf("%lf\n", b);
	printf("%c\n", c);
	
	getline(cin, s);
	cout << s << '\n';
	printf("아이엠어 아이언맨 : %s\n",str.c_str());
	
	cin >> T;
	string bufferflush;
	getline(cin, bufferflush);
	for(int i = 0; i < T; i++){
		getline(cin, s);
		cout << s << "\n";
	}

	return 0;
}
