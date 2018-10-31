#include <iostream>
#include <iterator>

int main() {
	return 0;
}

int MDotProduct(int vec1 [], int vec2 []) {
	int result;
	int dim = *(&vec1 + 1) - vec1;

	result = 0;
	for (int i = 0; i < dim; i++) {
		result += vec1[i] * vec2[i];
	}

	return result;
}
