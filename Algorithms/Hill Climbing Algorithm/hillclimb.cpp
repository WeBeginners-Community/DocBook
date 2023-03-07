#include <algorithm>
#include <iostream>
#include <vector>

// Generates neighbors of x
std::vector<int> generate_neighbors(int x) {
// TODO: implement this function
}

int hill_climbing(int (*f)(int), int x0) {
int x = x0; // initial solution
while (true) {
	std::vector<int> neighbors = generate_neighbors(x); // generate neighbors of x
	int best_neighbor = *std::max_element(neighbors.begin(), neighbors.end(),
										[f](int a, int b) { return f(a) < f(b); }); // find the neighbor with the highest function value
	if (f(best_neighbor) <= f(x)) // if the best neighbor is not better than x, stop
	return x;
	x = best_neighbor; // otherwise, continue with the best neighbor
}
}

int main() {
// Example usage
int x0 = 1;
int x = hill_climbing([](int x) { return x * x; }, x0);
std::cout << "Result: " << x << std::endl;
return 0;
}
