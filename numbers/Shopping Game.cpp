#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int aayush = 0, harshit = 0;
        int turn = 1;
        bool isAayushTurn = true;

        while (true) {
            if (isAayushTurn) {
                if (aayush + turn > M) {
                    cout << "Harshit\n";
                    break;
                }
                aayush += turn;
            } else {
                if (harshit + turn > N) {
                    cout << "Aayush\n";
                    break;
                }
                harshit += turn;
            }

            turn++;
            isAayushTurn = !isAayushTurn;
        }
    }

    return 0;
}
