#include <iostream>
#include <string>
using namespace std;

class Periodic {
    public:
    int K;
    string inp;
    string len;
    int Enter();
    bool IsKPeriodic(string inp, int K, string len);
};

int Periodic::Enter(){
    cout << "ввод строки" << endl;
    cin >> inp;
    cout << "ввод числа кратности" << endl;
    cin >> K;
    int size = inp.length();
    IsKPeriodic(inp, K, len);
    return 0;
}

bool Periodic::IsKPeriodic(string inp, int K, string len){
    for (int i = 0; i < K; i++){
        len[i] = inp[i];
    }
    int size = inp.length();
    if (size % K != 0){
        cout << "не подходящий размер строки" << endl;
        return true;
    }
    int j = 0;
    while(j<size) {
        for (int i = 0; i < K; i++) {
            if (len[i] != inp[j]){
                cout << "не кратно числу " << K << endl;
                return false;
            }
            j++;
        }
    }
    cout << "кратно числу " << K << endl;
    return true;
}

int main() {
    Periodic periodic {};
    periodic.Enter();
}