#include <iostream>
#include <vector> 

// Wir printen direkt die Werte, also muss die Funktion kein Wert zurückgeben.
// Aus diesem Grund deklarieren wir die Funktion als void. 
// Wir verwenden Call by const Reference, weil wir das Array nicht ändern wollen und es 
// so vor dem Überschreiben schützen. Auch die Laufzeit ist besser als sonstige Alternativen, 
// da wir Speicherplatz sparen und unnötiges Kopieren vermeiden. 
void drucke_int_array(const std::vector<int>& array) {
    // Hier muss man trotzdem Call by const Reference verwenden, sonst kopiert for-loop die Werte 
    for (const int& zahl : array) {
        std::cout << zahl << std::endl;
    }
    // Explizites return ist besser als kein return (Geschmackssache)
    return;
}

// Wir wollen explizit das übergebene Array ändern, also müssen wir Call by Reference verwenden.
// Da wir das Array by Reference ändern, müssen wir kein Wert zurückgeben und deklarieren die Funktion als void. 
void betrag(std::vector<int>& array) {
    // Hier muss man trotzdem Call by Reference verwenden, sonst kopiert for-loop die Werte 
    for (int& zahl : array) {
        // Wenn die Zahl größer gleich Null, dann mache nichts.
        if (zahl >= 0) {
            continue;
        } 
        // Wenn die Zahl kleiner als Null ist, dann ist sie negativ. Der Betrag einer negativen Zahl ist gleich Minus Zahl.  
        else {
            // Setze zahl als Wert im Array auf Wert -zahl. Beispiel: -3 wird zu 3.
            zahl = -zahl;
        }
    }
    return;
}

// Wir printen direkt die Werte, also muss die Funktion kein Wert zurückgeben.
// Aus diesem Grund deklarieren wir die Funktion als void. 
// Wir verwenden Call by const Reference, weil wir das Array nicht ändern wollen und es 
// so vor dem Überschreiben schützen. Auch die Laufzeit ist besser als sonstige Alternativen, 
// da wir Speicherplatz sparen und unnötiges Kopieren vermeiden. 
void drucke_string_array(const std::vector<std::string>& array) {
    // Hier muss man trotzdem Call by const Reference verwenden, sonst kopiert for-loop die Werte 
    for (const std::string& wort : array) {
        std::cout << wort << std::endl;
    }
    return;
}

void einfuege_werte_bis_42(std::vector<int>& array) {
    int aktuellerWert = 0;
    while (true) {
        // Frage User nach einer ganzen Zahl
        std::cout << "Bitte eine ganze Zahl eingeben..." << std::endl;
        std::cin >> aktuellerWert;

        // Verlasse die while-Schleife, falls der User 42 eintippt
        if (aktuellerWert == 42) {
            return;
        }

        // Füge die eingetippte Zahl am Ende des Arrays ein
        array.push_back(aktuellerWert);
    }
}

int main() {
    std::vector<int> zahlen = {-1,2,-3,4,-5,6,-7,8};
    drucke_int_array(zahlen);
    betrag(zahlen);
    drucke_int_array(zahlen);
    std::vector<std::string> worte = {"homotopie", "gruppe", "homologie", "ring"};
    drucke_string_array(worte);
    einfuege_werte_bis_42(zahlen);
    drucke_int_array(zahlen);
}