#include "generator.hh"

void Generator::ifInsertStype(bool &accept) const
{
    accept = d_arg.option(0, "insert-stype");
}
