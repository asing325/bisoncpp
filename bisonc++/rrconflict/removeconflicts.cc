#include "rrconflict.hh"

void RRConflict::removeConflicts(StateItem::Vector &itemVector)
{
    for (auto &rm: d_rmReduction)
       StateItem::removeRRConflict(rm, itemVector);
}
