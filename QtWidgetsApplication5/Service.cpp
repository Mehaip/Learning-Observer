#include "Service.h"

vector<string> Service::get_all() {
	return repos.get_all();
}

void Service::add(string str) {
	repos.add(str);
}