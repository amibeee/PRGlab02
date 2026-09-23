# Pseudo code - Labo 02

```
dx = saisie("la distance dx (km) : ")
dy = saisie("la distance dy (km) : ")
s1 = saisie("la vitesse sur la route s1 (km/h) : ")
s2 = saisie("la vitesse sur le terrain rocheux s2 (km/h) : ")
L1 = saisie("la longueur du premier segment L1 (km) : ")

L2 = racine(dx puissance 2 + (dy - L1) puissance 2)
t1 = L1 / s1
t2 = L2 / s2
t_total = t1 + t2
ecrire(t_total)
```
