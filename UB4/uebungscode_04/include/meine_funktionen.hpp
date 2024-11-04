#ifndef __MEINE_FUNKTIONEN_HPP__
#define __MEINE_FUNKTIONEN_HPP__


// Implementierung trigonometrischer Funktionen mittels Taylorreihe aus Uebungsblatt 2
// toleranzwert bestimmt die Genauigkeit der Berechnung

// Berechnet den Sinus eines Winkels x in Radian
double sinus(double x, double toleranzwert = 1e-8);

// Berechnet den Kosinus eines Winkels x in Radian
double kosinus(double x, double toleranzwert = 1e-8);

// Berechnet den Tangens eines Winkels x in Radian
double tangens(double x, double toleranzwert=1e-8);

// Berechnet den Kotangens eines Winkels x in Radian
double kotangens(double x, double toleranzwert=1e-8);


#endif
