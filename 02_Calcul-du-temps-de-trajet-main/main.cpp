/* ---------------------------
Laboratoire : 02
Auteur(s) : Nour El Islam Zarif
Date : 23.09.2026
But : Calcul du temps de trajet (version 1 + version bonus)
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

    // VERSION 1
    l1 = 6;

    // calcul de l2 avec pythagore
    l2 = sqrt(dx * dx + (dy - l1) * (dy - l1));
    t1 = l1 / s1;
    t2 = l2 / s2;
    t_total = t1 + t2;

    cout << "version 1 - le temps total est : " << t_total << " h" << endl;

    // VERSION BONUS
    l1 = dy - dx * s2 / sqrt(s1 * s1 - s2 * s2);

    l2 = sqrt(dx * dx + (dy - l1) * (dy - l1));
    t1 = l1 / s1;
    t2 = l2 / s2;
    t_total = t1 + t2;

    cout << "version bonus - le meilleur l1 est : " << l1 << " km" << endl;
    cout << "version bonus - le temps total est : " << t_total << " h" << endl;

    return EXIT_SUCCESS;
}
