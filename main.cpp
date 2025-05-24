#include <iostream>
#include <string>

using namespace std;

string outcomes[3] = {"stone", "scissors", "paper"};

string calculateOutcome(int a) {
	srand(time(NULL));

	int pc = rand() % 3 + 1;

	if (a == pc) {
		return "draw";
	}

	if (pc == 3 && a == 1 || a > pc) {
		return "player win";
	}

	return "player lost";
}

int main() {

	std::cout << calculateOutcome(2) << '\n';
	return 0;
}
