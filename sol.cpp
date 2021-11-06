#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a, b, c;
	cin >> a >> b >> c;
	// edge case: if n is equal to 1, then there's no need to travel
	if (n == 1) {
		cout << 0 << '\n';
		return 0;
	}
	// view the image in this repository for better understanding
	// otherwise, decrement n since Winnie-the-Pooh is already in Rabbit's house
	// afterwards, choose the next house to visit, min(a, b)
	// compare the minimum distance between going back to the previous house or
	// going to the another house
	n -= 1;
	int start = min(a, b);
	cout << start + (min(start, c) * (n - 1)) << '\n';
	return 0;
}
