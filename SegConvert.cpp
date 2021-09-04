#include <iostream>

using namespace std;

int main () {
    int hora, min, seg, segf;

    cin >> seg;

    hora = seg/3600;
    min = (seg%3600)/60;
    segf = (seg%3600)%60;

    cout << hora << " hora(s), " << min << " minuto(s) e " << segf << " segundo(s)";

    return 0;
}
