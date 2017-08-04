#include "HeadersModifier.hpp"
using namespace std;

HeadersModifier::HeadersModifier(shared_ptr<Attack> attack)
{
	_attack = attack;
}

void HeadersModifier::modifier(string str)
{
	// Le header doit être de la forme "name: value"
	_attack->setList(curl_slist_append(_attack->getList(), str.c_str()));
}
