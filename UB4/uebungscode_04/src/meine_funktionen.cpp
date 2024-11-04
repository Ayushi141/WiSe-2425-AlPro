#include "../include/meine_funktionen.hpp"

const double PI = 3.14159265358979323846;

double sinus(double x, double toleranzwert) {
    double sinus = 0; // Berechnet den Sinus als Taylorentwicklung
    double summand = x; // Aktueller Summand der Taylorentwicklung
    double zaehler_helfer = 1; // Hilft beim Berechnen des Nenners
    while (summand > toleranzwert || -summand > toleranzwert) { // Solange |summand| > toleranzwert
        sinus += summand;
        summand = -(summand*x*x) / ((zaehler_helfer+1) * (zaehler_helfer+2));
        zaehler_helfer += 2;
    }
    return sinus;
}

double kosinus(double x, double toleranzwert) {
    // Kosinus ist eine Sinusfunktion mit Phasenverschiebung von +PI/2 
    return sinus(x+(PI/2), toleranzwert);
}

double tangens(double x, double toleranzwert) {
    // Errechne Tangens als Sinus/kosinus
    return sinus(x, toleranzwert)/kosinus(x, toleranzwert);
}

double kotangens(double x, double toleranzwert) {
    // Errechne Kotangens als Kosinus/Sinus
    return kosinus(x, toleranzwert)/sinus(x, toleranzwert);
}