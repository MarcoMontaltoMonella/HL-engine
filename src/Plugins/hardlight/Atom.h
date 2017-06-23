#pragma once
#include "Locator.h"
#include "json/json-forwards.h"
#include <vector>
#include "Effects.h"
class Atom 
{
public:
	Atom();
	~Atom();
	std::string Id() const;
	Effect GetEffect(float volume) const;
	virtual void Serialize(const Json::Value& root);
	virtual void Deserialize(const Json::Value& root);
private:
	std::vector<Effect> _levels;
	std::string _id;
	std::size_t _numLevels;
};

