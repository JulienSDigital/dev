#include "UserAgentModifier.hpp"
using namespace std;

UserAgentModifier::UserAgentModifier(shared_ptr<Attack> attack)
{
	_attack = attack;
}

void UserAgentModifier::modifier(string str)
{
	str = "User-Agent: "+str;
	_attack->setList(curl_slist_append(_attack->getList(), str.c_str()));
}