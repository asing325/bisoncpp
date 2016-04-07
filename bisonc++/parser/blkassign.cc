#include "parser.ih"

void Parser::blkAssign(string const &ruleType, Production const &prod)
{
    installDefaultAction(
        prod, 
        svsElement(prod.size(), 1) +
            "Meta__::TypeOf<Tag__::" + ruleType + ">::type{}"
    ) ;
}
