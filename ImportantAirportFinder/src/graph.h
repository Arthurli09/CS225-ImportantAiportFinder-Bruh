#pragma once

#include <list>
#include <unordered_map>
#include <utility>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <set>
#include <sstream>
#include <vector>


#include "readFile.h"
using namespace std;

class Graph {
public:
    Graph(string airportFile, string routeFile, string country);
    void addEdge(string source, string dest);
private:
    // Valid airports
    vector<string> validAirports;
    // string      ->      vector<string>
    // airportID   ->      adjacent airportIDs
    unordered_map<string,vector<string>> adjList;
};
