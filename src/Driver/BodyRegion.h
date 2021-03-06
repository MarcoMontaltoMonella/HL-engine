#pragma once
#include "PluginApi.h"


struct nsvr_bodygraph_region {
	nsvr_bodypart bodypart;
	double segment_ratio;
	double rotation;
	double width_cm;
	double height_cm;

	nsvr_bodygraph_region() 
		: bodypart{ nsvr_bodypart::nsvr_bodypart_unknown }
		, segment_ratio{0}
		, rotation {0}
		, width_cm {0}
		, height_cm {0} {}
};

