#include "MrLumps.hpp"

Plugin *plugin;

void init(rack::Plugin *p)
{
	plugin = p;
	p->slug = "MrLumps";
#ifdef VERSION
	p->version = TOSTRING(VERSION);
#endif
	p->addModel(createModel<SEQEuclidWidget>("MrLumps", "SEQE", "SEQ-Euclid", SEQUENCER_TAG));
}
