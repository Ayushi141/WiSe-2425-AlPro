#pragma once

#include <vector>

// Hier kommt die Deklaration (und Beschreibung) von mergesort hin

std::vector<int> merge_sort(std::vector<int> array);
std::vector<int> merge(std::vector<int> left, std::vector<int> right);

void min_sort_in_place(std::vector<int>& zahlen);
int& find_minimal_int(std::vector<int>& zahlen, const int from, const int to);