#include "StdAfx.h"

#include "EnumTranslator.h"
#include <boost/assign/list_of.hpp>
#include <boost/assign/list_inserter.hpp>
template<typename T> struct map_init_helper
{
	T& data;
	map_init_helper(T& d) : data(d) {}
	map_init_helper& operator() (typename T::key_type const& key, typename T::mapped_type const& value)
	{
		data[key] = value;
		return *this;
	}
};

template<typename T> map_init_helper<T> map_init(T& item)
{
	return map_init_helper<T>(item);
};

std::string EnumTranslator::ToString(Location loc) const
{
	return _locationMap.left.at(loc);

}

std::string EnumTranslator::ToString(Effect effect) const
{
	return _effectMap.left.at(effect);


}


nsvr_bodypart EnumTranslator::ToBodypart(std::string bodypart, nsvr_bodypart default) const
{
	if (_bodypartMap.left.find(bodypart) != _bodypartMap.left.end()) {
		return _bodypartMap.left.at(bodypart);
	}
	return default;
}

Effect EnumTranslator::ToEffect(std::string effect, Effect defaultEffect)
{
	
	if (_effectMap.right.find(effect) != _effectMap.right.end())
	{
		return _effectMap.right.at(effect);
	}
	return defaultEffect;
}

Effect EnumTranslator::ToEffect(std::string effect) const
{
	return _effectMap.right.at(effect);
}




Location EnumTranslator::ToLocation(std::string location, Location defaultLocation) 
{
	if (_locationMap.right.find(location) != _locationMap.right.end()) {
		return _locationMap.right.at(location);
	}
	return defaultLocation;
	
}

Location EnumTranslator::ToLocation(std::string location) const
{
	return _locationMap.right.at(location);
}

EnumTranslator::EnumTranslator() {
	init_locations();
	init_effects();
	init_familymap();
	init_bodyparts();
	//this is error prone and I always forget to init a new one
	//todo: make better
}

void EnumTranslator::init_effects() {

	boost::assign::insert(_effectMap)
		(Effect::Buzz_100, "Buzz_100")
		(Effect::Buzz_20, "Buzz_20")
		(Effect::Buzz_40, "Buzz_40")
		(Effect::Buzz_60, "Buzz_60")
		(Effect::Buzz_80, "Buzz_80")
		(Effect::Double_Click_100, "Double_Click_100")
		(Effect::Double_Click_60, "Double_Click_60")
		(Effect::Long_Buzz_for_Program_Stop_100, "Long_Buzz_for_Program_Stop_100")
		(Effect::Long_Double_Sharp_Click_Medium_100, "Long_Double_Sharp_Click_Medium_100")
		(Effect::Long_Double_Sharp_Click_Medium_60, "Long_Double_Sharp_Click_Medium_60")
		(Effect::Long_Double_Sharp_Click_Medium_80, "Long_Double_Sharp_Click_Medium_80")
		(Effect::Long_Double_Sharp_Click_Strong_100, "Long_Double_Sharp_Click_Strong_100")
		(Effect::Long_Double_Sharp_Click_Strong_30, "Long_Double_Sharp_Click_Strong_30")
		(Effect::Long_Double_Sharp_Click_Strong_60, "Long_Double_Sharp_Click_Strong_60")
		(Effect::Long_Double_Sharp_Click_Strong_80, "Long_Double_Sharp_Click_Strong_80")
		(Effect::Long_Double_Sharp_Tick_100, "Long_Double_Sharp_Tick_100")
		(Effect::Long_Double_Sharp_Tick_60, "Long_Double_Sharp_Tick_60")
		(Effect::Long_Double_Sharp_Tick_80, "Long_Double_Sharp_Tick_80")
		(Effect::Medium_Click_100, "Medium_Click_100")
		(Effect::Medium_Click_60, "Medium_Click_60")
		(Effect::Medium_Click_80, "Medium_Click_80")
		(Effect::Pulsing_Medium_100, "Pulsing_Medium_100")
		(Effect::Pulsing_Medium_60, "Pulsing_Medium_60")
		(Effect::Pulsing_Sharp_100, "Pulsing_Sharp_100")
		(Effect::Pulsing_Sharp_60, "Pulsing_Sharp_60")
		(Effect::Pulsing_Strong_100, "Pulsing_Strong_100")
		(Effect::Pulsing_Strong_60, "Pulsing_Strong_60")
		(Effect::Sharp_Click_100, "Sharp_Click_100")
		(Effect::Sharp_Click_30, "Sharp_Click_30")
		(Effect::Sharp_Click_60, "Sharp_Click_60")
		(Effect::Sharp_Tick_100, "Sharp_Tick_100")
		(Effect::Sharp_Tick_60, "Sharp_Tick_60")
		(Effect::Sharp_Tick_80, "Sharp_Tick_80")
		(Effect::Short_Double_Click_Medium_100, "Short_Double_Click_Medium_100")
		(Effect::Short_Double_Click_Medium_60, "Short_Double_Click_Medium_60")
		(Effect::Short_Double_Click_Medium_80, "Short_Double_Click_Medium_80")
		(Effect::Short_Double_Click_Strong_100, "Short_Double_Click_Strong_100")
		(Effect::Short_Double_Click_Strong_30, "Short_Double_Click_Strong_30")
		(Effect::Short_Double_Click_Strong_60, "Short_Double_Click_Strong_60")
		(Effect::Short_Double_Click_Strong_80, "Short_Double_Click_Strong_80")
		(Effect::Short_Double_Sharp_Tick_100, "Short_Double_Sharp_Tick_100")
		(Effect::Short_Double_Sharp_Tick_60, "Short_Double_Sharp_Tick_60")
		(Effect::Short_Double_Sharp_Tick_80, "Short_Double_Sharp_Tick_80")
		(Effect::Smooth_Hum_10, "Smooth_Hum_10")
		(Effect::Smooth_Hum_20, "Smooth_Hum_20")
		(Effect::Smooth_Hum_30, "Smooth_Hum_30")
		(Effect::Smooth_Hum_40, "Smooth_Hum_40")
		(Effect::Smooth_Hum_50, "Smooth_Hum_50")
		(Effect::Soft_Bump_100, "Soft_Bump_100")
		(Effect::Soft_Bump_30, "Soft_Bump_30")
		(Effect::Soft_Bump_60, "Soft_Bump_60")
		(Effect::Soft_Fuzz, "Soft_Fuzz")
		(Effect::Strong_Buzz, "Strong_Buzz")
		(Effect::Strong_Click_100, "Strong_Click_100")
		(Effect::Strong_Click_1_100, "Strong_Click_1_100")
		(Effect::Strong_Click_2_80, "Strong_Click_2_80")
		(Effect::Strong_Click_30, "Strong_Click_30")
		(Effect::Strong_Click_3_60, "Strong_Click_3_60")
		(Effect::Strong_Click_4_30, "Strong_Click_4_30")
		(Effect::Strong_Click_60, "Strong_Click_60")
		(Effect::Transition_Click_10, "Transition_Click_10")
		(Effect::Transition_Click_100, "Transition_Click_100")
		(Effect::Transition_Click_20, "Transition_Click_20")
		(Effect::Transition_Click_40, "Transition_Click_40")
		(Effect::Transition_Click_60, "Transition_Click_60")
		(Effect::Transition_Hum_10, "Transition_Hum_10")
		(Effect::Transition_Hum_100, "Transition_Hum_100")
		(Effect::Transition_Hum_20, "Transition_Hum_20")
		(Effect::Transition_Hum_40, "Transition_Hum_40")
		(Effect::Transition_Hum_60, "Transition_Hum_60")
		(Effect::Transition_Hum_80, "Transition_Hum_80")

		(Effect::Triple_Click, "Triple_Click")
		(Effect::Transition_Click_80, "Transition_Click_80");


}
uint32_t EnumTranslator::ToEffectFamily(std::string effectFamily) const
{
	return _effectFamilyMap.left.at(effectFamily);
}

std::string EnumTranslator::ToString(uint32_t effectFamily) const
{
	return _effectFamilyMap.right.at(effectFamily);
}

void EnumTranslator::init_familymap()
{
	boost::assign::insert(_effectFamilyMap)
		("bump", 1)
		("buzz", 2)
		("click", 3)
		("double_click", 4)
		("fuzz", 5)
		("hum", 6)
		("long_double_sharp_tick", 7)
		("pulse", 8)
		("pulse_sharp", 9)
		("sharp_click", 10)
		("sharp_tick", 11)
		("short_double_click", 12)
		("short_double_sharp_tick", 13)
		("transition_click", 14)
		("transition_hum", 15)
		("triple_click", 16)
		("doom_buzz", 666);
}

void EnumTranslator::init_bodyparts()
{
	boost::assign::insert(_bodypartMap)
		("unknown", nsvr_bodypart_unknown)
		("upperarm_left", nsvr_bodypart_upperarm_left)
		("lowerarm_left", nsvr_bodypart_lowerarm_left)
		("palm_left", nsvr_bodypart_palm_left)
		("upperleg_left", nsvr_bodypart_upperleg_left)
		("lowerleg_left", nsvr_bodypart_lowerleg_left)

		("upperarm_right", nsvr_bodypart_upperarm_right)
		("lowerarm_right", nsvr_bodypart_lowerarm_right)
		("palm_right", nsvr_bodypart_palm_right)
		("upperleg_right", nsvr_bodypart_upperleg_right)
		("lowerleg_right", nsvr_bodypart_lowerleg_right)

		("hips", nsvr_bodypart_hips)
		("torso", nsvr_bodypart_torso)
		("neck", nsvr_bodypart_neck)
		("head", nsvr_bodypart_head);
}



void EnumTranslator::init_locations() {
	boost::assign::insert(_locationMap)
	(Location::Chest_Left, "Chest_Left")
	(Location::Chest_Right, "Chest_Right")
	(Location::Forearm_Left, "Forearm_Left")
	(Location::Forearm_Right, "Forearm_Right")
	(Location::Lower_Ab_Left, "Lower_Ab_Left")
	(Location::Lower_Ab_Right, "Lower_Ab_Right")
	(Location::Mid_Ab_Left, "Mid_Ab_Left")
	(Location::Mid_Ab_Right, "Mid_Ab_Right")
	(Location::Shoulder_Left, "Shoulder_Left")
	(Location::Shoulder_Right, "Shoulder_Right")
	(Location::Upper_Ab_Left, "Upper_Ab_Left")
	(Location::Upper_Ab_Right, "Upper_Ab_Right")
	(Location::Upper_Arm_Left, "Upper_Arm_Left")
	(Location::Upper_Arm_Right, "Upper_Arm_Right")
	(Location::Upper_Back_Left, "Upper_Back_Left")
	(Location::Upper_Back_Right, "Upper_Back_Right")
		;
}
