#include "HostModifier.hpp"
using namespace std;

HostModifier::HostModifier(shared_ptr<Attack> attack)
{
	_attack = attack;
}

void HostModifier::modifier(string str)
{
	str = "Host: "+str;
	_attack->setList(curl_slist_append(_attack->getList(), str.c_str()));
}
