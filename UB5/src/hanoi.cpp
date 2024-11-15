#include <hanoi/hanoi.hpp>

#include <iostream>

namespace hanoi
{

    // Wir speichern die Anzahl an Scheiben in einer privaten const Variable
    Hanoi::Hanoi(size_t _anz) : ANZ(_anz)
    {
        // Initialisiere Stapel
        stapel = std::vector<std::vector<size_t>>(3);
        // Initialisiere drei Türme
        for (size_t i; i < 3; i++)
        {
            // Initialisiere ANZ viele Scheiben im aktuellen Turm
            stapel[i] = std::vector<size_t>(ANZ);
            // Im ersten Turm
            if (i == 0)
            {
                // Initialisiere die Werte nacheinander
                for (size_t i = 0; i < ANZ; i++)
                {
                    // Unser Turm startet von unten, das obere Element ist das letzte.
                    stapel[0][i] = ANZ - i;
                }
            }
        }
    }

    // Wir wollen das Spiel so drucken, wie sie im echten Leben aussehen würde.
    // Daher wird nicht jeder Turm nacheinander, sondern das Spielfeld zusammen ausgedruckt.
    void Hanoi::drucke() const
    {
        std::cout << "Stand des Hanoi-Spiels:" << std::endl;
        // Drucke die obersten Scheiben
        for (size_t i = 0; i < ANZ; i++)
        {
            std::cout << stapel[0][ANZ - i - 1] << " " << stapel[1][ANZ - i - 1] << " " << stapel[2][ANZ - i - 1] << std::endl;
        }
        std::cout << "=====" << std::endl;
    }

    // Bewegt Scheiben. Range der Parameter von und nach ist [1;3]
    bool Hanoi::bewege(size_t von, size_t nach)
    {
        if (von < 1 || von > 3 || nach < 1 || nach > 3)
        {
            // Ungülitger Turm
            return false;
        }
        if (von == nach)
        {
            // Türme stimmen überein
            return false;
        }
        // von und nach um Minus 1 versetzt, damit es mit 0-based Indizes kompatibel bleibt
        von -= 1;
        nach -= 1;

        try
        {
            // Ist der Turm frei, so ist der Index gleich 0 und wir überspringen die Checks
            if (indexUntersterPlatz(nach) != 0)
            {
                // Ist der Turm nicht frei, ist der Index ungleich 0 und wir vergleichen die Scheiben miteinander
                if (stapel[von][indexObersterScheibe(von)] > stapel[nach][indexUntersterPlatz(nach) - 1])
                {
                    // Ist der Wert der Scheibe, die wir darauflegen größer, als der Wert der darunterliegenden
                    // Scheibe, so ist der Zug nicht zulässig
                    return false;
                }
            }

            // Bewege die Scheiben
            stapel[nach][indexUntersterPlatz(nach)] = stapel[von][indexObersterScheibe(von)];
            stapel[von][indexObersterScheibe(von)] = 0;
            return true;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Bewegung nicht möglich: " << e.what() << std::endl;
            return false;
        }
    }

    // Diese Methode gibt zurück Index der obersten Scheibe im Turm
    // Falls der Turm leer ist, werfe out_of_range Fehler
    size_t Hanoi::indexObersterScheibe(size_t indexTurm)
    {
        // Gehe von oben nach unten den Turm durch
        for (size_t i = ANZ - 1; i >= 0; i--)
        {
            // Falls eine Scheibe gefunden wurde
            if (stapel[indexTurm][i] != 0)
            {
                // Gebe den Index der Scheibe zurück
                return i;
            }
        }
        throw std::out_of_range("Turm ist leer");
    }

    // Diese Methode gibt zurück Index des untersten freien Platzes im Turm
    // Falls der Turm voll ist, werfe out_of_range Fehler
    size_t Hanoi::indexUntersterPlatz(size_t indexTurm)
    {
        // Gehe den Turm von unten nach oben durch
        for (size_t i = 0; i < ANZ; i++)
        {
            // Falls ein leerer Platz gefunden wurde
            if (stapel[indexTurm][i] == 0)
            {
                // Gebe den Index der Position zurück
                return i;
            }
        }
        throw std::out_of_range("Turm ist voll");
    }

    // Zeigt die Anzahl an Scheiben im gesamten Spiel
    size_t Hanoi::anzahl() const {
        return ANZ;
    }
}
