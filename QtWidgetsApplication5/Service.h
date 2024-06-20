#pragma once
#include "repo.h"
#include "Observer.h"
class Service:public Observable
{
private:
	repo& repos;
public:
	Service(repo& repos) :repos{ repos } {};
	vector<string> get_all();
	void add(string str);
};

