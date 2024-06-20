#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;
class repo
{
private:
	vector<string> list;
public:
	repo() { load_from_file(); };
	void load_from_file();
	vector<string> get_all();
	void add(string str);
};

