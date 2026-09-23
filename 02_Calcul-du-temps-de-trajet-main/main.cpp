/* --------------------------- 
Laboratoire : 02
Auteur(s) : Nour El Islam Zarif
Date : 23.09.2026
But : Calcul du temps de trajet 
--------------------------- */


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double dx, dy, s1, s2, L1, L2, t1, t2, t_total;

    cout << "la distance dx (km) : ";
    cin >> dx;
    cout << "la distance dy (km) : ";
    cin >> dy;
    cout << "la vitesse sur la route s1 (km/h) : ";
    cin >> s1;
    cout << "la vitesse sur le terrain rocheux s2 (km/h) : ";
    cin >> s2;
    cout << "la longueur du premier segment (km) : ";
    cin >> L1;

    L2 = sqrt(dx * dx + dy * dy);
    t1 = L1 / s1;
    t2 = L2 / s2;
    t_total = t1 + t2;

    cout << "Le temps total est : " << t_total << "h" << endl;
    return EXIT_SUCCESS;
}

