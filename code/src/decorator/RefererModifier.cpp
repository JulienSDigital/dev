#include "RefererModifier.hpp"
using namespace std;

RefererModifier::RefererModifier(shared_ptr<Attack> attack)
{
	_attack = attack;
}

void RefererModifier::modifier(string str)
{
	str = "Referer: "+str;
	_attack->setList(curl_slist_append(_attack->getList(), str.c_str()));
}