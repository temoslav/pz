#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
int random(int a, int b) {
	return a + rand() % (b - a + 1);
}
void peresek(vector <int>& vect1, vector <int>& vect2) {
	cout << "Пересекающиеся элементы: " << endl;
	for (unsigned int i = 0; i < vect1.size(); ++i) {
		for (unsigned int j = 0; j < vect2.size(); ++j) {
			if (vect1[i] == vect2[j]) {
				
				cout << vect2[j] << " ";
				
			}

		}
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, p;
	int sum1 = 0, sum2 = 0;
	cout << "Укажите кол-во элементов для первого и второго вектора" << endl;
	cin >> n >> p;
	vector <int> vect1(n);
	vector <int> vect2(p);
	for (int i = 0; i < n; i++) {
		vect1[i] = random(-100, 100);
		cout << vect1[i] << " ";
		sum1 = sum1 + vect1[i];
	}
	
	cout << "Среднее значение элементов первого вектора = " << static_cast<float>(sum1) / static_cast<float>(n) << endl;
	for (int i = 0; i < p; i++) {
		vect2[i] = random(-100, 100);
		cout << vect2[i] << " ";
		sum2 = sum2 + vect2[i];
	}

	cout << "Среднее значение элементов второго вектора = " << static_cast<float>(sum2) /static_cast<float>( p) << endl;
	peresek(vect1, vect2);
	return 0;
}