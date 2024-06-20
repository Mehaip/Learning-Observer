#include "repo.h"
#include <fstream>
vector<string> repo::get_all() {
	return list;
}

void repo::load_from_file() {
	std::ifstream fin("Text.txt");
	string line;
	while (getline(fin, line)) {
		list.push_back(line);
	}
}

void repo::add(string str) {
	list.push_back(str);
}