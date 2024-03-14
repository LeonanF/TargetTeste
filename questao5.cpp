#include <string>

inline std::string invertString(std::string s) {
	
	std::string invertida;

	invertida.reserve(s.size());

	for (auto it = s.crbegin(); it < s.crend(); it++) {
		invertida.push_back(*it);
	}

	return invertida;

}