#pragma once
#include "core/frontend/manager/Category.hpp"

namespace YimMenu
{
	std::shared_ptr<Category> CreateOutfitsMenu();
	struct OutfitComponent
	{
		int component;
		int drawable;
		int texture;
		int palette;
	};

	struct OutfitProp
	{
		int prop;
		int drawable;
		int texture;
	};

	struct OutfitData
	{
		std::string name;
		std::vector<OutfitComponent> components;
		std::vector<OutfitProp> props;
	};
}
