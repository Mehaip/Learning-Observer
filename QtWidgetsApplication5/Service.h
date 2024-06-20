#pragma once
#include "repo.h"
class Service
{
private:
	repo& repos;
public:
	Service(repo& repos) :repos{ repos } {};
	vector<string> get_all();
	void add(string str);
};

