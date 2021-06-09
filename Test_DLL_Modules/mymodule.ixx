export module mymodule;

import <string>;

namespace mymodule {
	export __declspec(dllexport) std::string name();
}

