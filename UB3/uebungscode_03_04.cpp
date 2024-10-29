#include <iostream>
#include <string>
#include <cmath>

const double PI = 3.14159265358979323846;

void drucke_text(const std::string& text) {
    std::cout << text << std::endl;
}

double lies_double() {
    std::string wort;
    std::cin >> wort;
    double lies_gleitkommazahl = 0.0;
    try {
    lies_gleitkommazahl = std::stod(wort);
    } catch (const std::invalid_argument& e) {
    lies_gleitkommazahl = NAN; // See https://en.cppreference.com/w/cpp/numeric/math/NAN
    }
    return lies_gleitkommazahl;
}


void drucke_zahl(double zahl) {
    std::string pause;
    std::cout << std::to_string(zahl) << std::endl;
}

double sinus(double x) {
    double sinus = 0; // Berechnet den Sinus als Taylorentwicklung
    double summand = x; // Aktueller Summand der Taylorentwicklung
    double zaehler_helfer = 1; // Hilft beim Berechnen des Nenners
    double klein = 1e-8; // Eine kleine Zahl
    while (summand > klein || -summand > klein) { // Solange |summand| > klein
        sinus += summand;
        summand = -(summand*x*x) / ((zaehler_helfer+1) * (zaehler_helfer+2));
        zaehler_helfer += 2;
    }
    return sinus;
}

double cosinus(double x) {
    return sinus(x+(PI/2));
}

double tangens(double x) {
    return sinus(x)/cosinus(x);
}

double cotangens(double x) {
    return cosinus(x)/sinus(x);
}

double root(double x) {
    double klein = 1e-8;
    if (x < 0) {
        throw std::invalid_argument("Number must be non-negative");
    }

    if (x == 0) {
        return 0;
    }

    double t = x;

    while ((t*t)-x > klein) {
        t = (1.0/2.0) * (t+ (x/t));
        // std::cout << t << " " << t-sqrt(t) << std::endl;
    }
    return t;
}

double sinus(double x, double klein) {
    double sinus = 0; // Berechnet den Sinus als Taylorentwicklung
    double summand = x; // Aktueller Summand der Taylorentwicklung
    double zaehler_helfer = 1; // Hilft beim Berechnen des Nenners
    while (summand > klein || -summand > klein) { // Solange |summand| > klein
        sinus += summand;
        summand = -(summand*x*x) / ((zaehler_helfer+1) * (zaehler_helfer+2));
        zaehler_helfer += 2;
    }
    return sinus;
}

double cosinus(double x, double klein) {
    return sinus(x+(PI/2), klein);
}

double tangens(double x, double klein) {
    return sinus(x, klein)/cosinus(x, klein);
}

double cotangens(double x, double klein) {
    return cosinus(x, klein)/sinus(x, klein);
}

double root(double x, double klein) {
    if (x < 0) {
        throw std::invalid_argument("Number must be non-negative");
    }

    if (x == 0) {
        return 0;
    }

    double t = x;

    while ((t*t)-x > klein) {
        t = (1.0/2.0) * (t+ (x/t));
        // std::cout << t << " " << t-sqrt(t) << std::endl;
    }
    return t;
}

int main() {
    double x = lies_double();
    drucke_zahl(sinus(x));
    drucke_zahl(cosinus(x));
    drucke_zahl(tangens(x));
    drucke_zahl(cotangens(x));
    drucke_zahl(root(x));
    std::cout << "Now enter tolerance:";
    double klein = lies_double();
    drucke_zahl(sinus(x, klein));
    drucke_zahl(cosinus(x, klein));
    drucke_zahl(tangens(x, klein));
    drucke_zahl(cotangens(x, klein));
    drucke_zahl(root(x, klein));
    double pause = lies_double();
}