#include <iostream>

int main() {
	int img_width = 3, img_height = 2, value = 255;
	std::cout << "P3\n" << img_width << ' ' << img_height << ' ' << value << '\n';

	std::cout << "255   0   0\n";
	std::cout << "  0 255   0\n";
	std::cout << "  0   0 255\n";
	std::cout << "255 255   0\n";
	std::cout << "255 255 255\n";
	std::cout << "  0   0   0\n";
    
}
