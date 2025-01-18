#include "data_structures/hashtable.hpp"
#include "data_structures/list.hpp"
#include <iostream>

namespace data_structures
{

    Hashtable::Hashtable() : hashfkt(std::hash<std::string>()),
                             num_buckets(32),
                             num_elements(0)
    {
        // Initialisierung der Buckets als Vektor mit num_buckets vielen Listen
        buckets = std::vector<List>(num_buckets);
    }

    void Hashtable::insert(const std::string x)
    {
        size_t hash_value = hashfkt(x);               // Berechne hash
        HashKeyPair pair(hash_value, x);              // Erstelle HashKeyPair
        size_t bucket_idx = hash_value % num_buckets; // Berechne BucketId

        // Prüfe ob bereits existiert
        ListNodeptr current = buckets[bucket_idx].get_first();
        while (current != nullptr)
        {
            if (current->data.key == x)
            {
                return; // Key existiert
            }
            current = buckets[bucket_idx].next(current);
        }
        // Key existiert nicht
        buckets[bucket_idx].insert_front(pair);
        num_elements++;
    }

    bool Hashtable::find(const std::string &x) const
    {
        size_t hash_value = hashfkt(x);               // Berechne Hash
        size_t bucket_idx = hash_value % num_buckets; // Berechne BucketId

        ListNodeptr current = buckets[bucket_idx].get_first();
        while (current != nullptr)
        {
            if (current->data.key == x)
            {
                return true;
            }
            current = buckets[bucket_idx].next(current);
        }
        return false;
    }

    void Hashtable::remove(const std::string &x)
    {
        size_t hash_value = hashfkt(x);
        size_t bucket_idx = hash_value % num_buckets;

        ListNodeptr current = buckets[bucket_idx].get_first();
        ListNodeptr prev = nullptr;

        // Suche nach einem Element mit passendem Key
        while (current != nullptr)
        {
            if (current->data.key == x)
            { 
                // Lösche Element
                if (prev == nullptr)
                {
                    buckets[bucket_idx].remove_front();
                }
                else
                {
                    buckets[bucket_idx].remove_after(prev);
                }
                num_elements--;
                return;
            }
            prev = current;
            current = buckets[bucket_idx].next(current);
        }
    }

    void Hashtable::print() const
    {
        for (size_t i = 0; i < num_buckets; i++)
        {
            std::cout << "Bucket " << i << ": ";
            buckets[i].print();
        }
        std::cout << std::endl;
    }

    size_t Hashtable::size() const
    {
        return num_elements;
    }
}
