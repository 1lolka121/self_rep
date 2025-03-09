
#Задание 5. Усложнение задачи про кирпич


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, m, n, k;
    cin >> a >> b >> c >> m >> n >> k;

    int box1[] = {a, b, c};
    int box2[] = {m, n, k};
    sort(box1, box1 + 3);
    sort(box2, box2 + 3);

    bool fits = (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2]);
    cout << (fits ? "Можно" : "Нельзя") << endl;

    return 0;
}
