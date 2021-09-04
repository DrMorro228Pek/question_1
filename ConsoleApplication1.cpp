#include <iostream>

void q1() {
	int t1_count = 5, t2_count = 4, t3_count = 3;
	float t1_price = 100, t2_price = 200, t3_price = 300;

	int t1_paid = t1_count * t1_price, 
		t2_paid = t2_count * t2_price, 
		t3_paid = t3_count * t3_price;
}

void q2() {
	int first = 10,
		second = first + 24,
		third = (first + second) * 2;
}

void q3() {
	int example = 1234;
	while (example != 0) {
		std::cout << example % 10;
		example = example / 10;
	}
}

void q4() {
	int input;
	std::cin >> input;
	while (input) {
		std::cout << input * input * input << "\n";
		std::cin >> input;
	}
}

void q5() {
	int a, b, sum = 0;
	std::cin >> a >> b;
	for (int i = a; i != b + 1; i++) {
		int flag = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0 ) {
				flag = 0;
			}
		}
		if (flag) {
			sum += i;
		}
	}
	std::cout << sum;

}

int main()
{
	q5();
}

