#include "CookiesModifier.hpp"
using namespace std;

CookiesModifier::CookiesModifier(shared_ptr<Attack> attack)
{
	_attack = attack;
}

void CookiesModifier::modifier(string str)
{
	str = "Cookie: "+str;
	_attack->setList(curl_slist_append(_attack->getList(), str.c_str()));
}