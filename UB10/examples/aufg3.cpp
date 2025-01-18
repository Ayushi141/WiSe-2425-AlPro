#include <iostream>
#include "data_structures/hashtable.hpp"

int main()
{
  // Hashtable erstellen
  data_structures::Hashtable ht;

  // Leere Hashtable testen
  std::cout << "Teste leere Hashtable:" << std::endl;
  std::cout << "Anzahl Elemente: " << ht.size() << std::endl;
  ht.print();
  std::cout << std::endl;

  // Einfügen testen
  std::cout << "Füge Elemente ein:" << std::endl;
  ht.insert("Apfel");
  ht.insert("Banane");
  ht.insert("Himbeere");
  ht.insert("Dattel");
  ht.insert("Erdbeere");

  // Weitere Elemente einfügen, die möglicherweise im gleichen Bucket landen
  ht.insert("Apfelmuss");
  ht.insert("Apfelsaft");
  ht.insert("Bananenbrot");

  std::cout << "Nach dem Einfügen, Anzahl: " << ht.size() << std::endl;
  ht.print();
  std::cout << std::endl;

  // Suchen testen
  std::cout << "Teste Suchfunktion:" << std::endl;
  std::cout << "Suche nach 'Apfel': "
            << (ht.find("Apfel") ? "Gefunden" : "Nicht gefunden") << std::endl;
  std::cout << "Suche nach 'Weintraube': "
            << (ht.find("Weintraube") ? "Gefunden" : "Nicht gefunden") << std::endl;
  std::cout << "Suche nach 'Bananenbrot': "
            << (ht.find("Bananenbrot") ? "Gefunden" : "Nicht gefunden") << std::endl;
  std::cout << std::endl;

  // Löschen testen
  std::cout << "Teste Löschfunktion:" << std::endl;
  std::cout << "Lösche 'Apfel'" << std::endl;
  ht.remove("Apfel");
  std::cout << "Anzahl nach dem Löschen: " << ht.size() << std::endl;
  std::cout << "Suche nach 'Apfel': "
            << (ht.find("Apfel") ? "Gefunden" : "Nicht gefunden") << std::endl;

  // Versuche nicht existierendes Element zu löschen
  std::cout << "Versuche nicht existierendes Element 'Weintraube' zu löschen" << std::endl;
  ht.remove("Weintraube");
  std::cout << "Anzahl nach Löschversuch: " << ht.size() << std::endl;

  std::cout << "\nFinaler Zustand der Hashtable:" << std::endl;
  ht.print();

  // Doppeltes Einfügen testen
  std::cout << "\nTeste doppeltes Einfügen:" << std::endl;
  std::cout << "Aktuelle Anzahl: " << ht.size() << std::endl;
  std::cout << "Füge 'Banane' erneut ein" << std::endl;
  ht.insert("Banane");
  std::cout << "Anzahl nach erneutem Einfügen: " << ht.size() << std::endl;
}