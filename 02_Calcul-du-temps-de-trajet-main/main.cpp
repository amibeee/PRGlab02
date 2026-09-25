/* ---------------------------
Laboratoire : 02
Auteur(s) : Nour El Islam Zarif
Date : 23.09.2026
But : Calcul du temps de trajet avec l1 en entree
--------------------------- */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double dx = 3;   // km
    double dy = 10;  // km
    double s1 = 5;   // km/h (route)
    double s2 = 2;   // km/h (terrain rocheux)
    double l1, l2, t1, t2, t_total;

    cout << "la longueur du premier segment l1 (km) : ";
    cin >> l1;

    l2 = sqrt(dx * dx + (dy - l1) * (dy - l1));
    t1 = l1 / s1;
    t2 = l2 / s2;
    t_total = t1 + t2;

    cout << "le temps total est : " << t_total << " h" << endl;
    return EXIT_SUCCESS;
}
