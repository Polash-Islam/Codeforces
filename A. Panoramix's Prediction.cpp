     #include<iostream>
    using namespace std;
    bool prime(int n) {
    	if (n == 2)
    		return 1;
    	for (int i = 2; i <= n / 2; ++i)
    		if (n%i == 0)
    			return 0;
    	return 1;
    }
    int main() {
    	int x, y;
    	cin >> x >> y;
    	                                           // polash prince
    	for (int i = x + 1; i < y; ++i)
    		if (prime(i)) {
    			cout << "NO";
    			return 0;
    		}
    	if (prime(y))
    		cout << "YES";
    	else
    		cout << "NO";
    	return 0;
    }
