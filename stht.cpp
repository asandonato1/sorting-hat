#include <iostream>
#include <vector>
int main() {
	int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0, ans1, ans2, ans3, ans4;
	std::vector<int> options;
	std::cout << "The Sorting Hat Quiz!" << std::endl;

	Q1:std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
	std::cout << "1) The Good\n";
	std::cout << "2) The Great\n";
	std::cout << "3) The Wise\n";
	std::cout << "4) The Bold\n"; 
	std::cin >> ans1;
	
	swtSt:switch (ans1) {
	case 1:
		hufflepuff++;
		options.push_back(1);
		break;
	case 2:
		slytherin++;
		options.push_back(2);
		break;
	case 3: 
		ravenclaw++;
		options.push_back(3);
		break;
	case 4: 
		gryffindor++;
		options.push_back(4);
		break;
	default: 
		std::cout << "\n";
		goto Q1;
		break;
	}

	Q2:std::cout << "Q2) Dawn or Dusk?\n";
	std::cout << "1) Dawn\n";
	std::cout << "2) Dusk\n";
	std::cin >> ans2; 

	if (ans2 == 1) {
		options.push_back(1);
		gryffindor++ && ravenclaw++;

	}
	else if (ans2 == 2) {
		options.push_back(2);
		hufflepuff++ && slytherin++;
	}
	else {
		std::cout << "\n";
		goto Q2;
	}

	Q3:std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
	std::cout << "1) The violin\n";
	std::cout << "2) The trumpet\n"; 
	std::cout << "3) The piano\n";
	std::cout << "4) The drum\n";
	std::cin >> ans3;

	switch (ans3) {
	case 1:
		slytherin++;
		options.push_back(1);
		break;
	case 2:
		hufflepuff++;
		options.push_back(2);
		break;
	case 3:
		ravenclaw++;
		options.push_back(3);
		break;
	case 4:
		gryffindor++;
		options.push_back(4);
		break;
	default:
		goto Q3;
		std::cout << "\n";
		break;
	}

	Q4:std::cout << "Q4) Which road tempts you most?\n";
	std::cout << "1) The wide, sunny grassy lane\n";
	std::cout << "2) The narrow, dark, lantern-lit alley\n";
	std::cout << "3) The twisting, leaf-strewn path through woods\n";
	std::cout << "4) The cobbled street lined (ancient buildings)\n";
	std::cin >> ans4;

	if (ans4 == 1) {
		hufflepuff++;
		options.push_back(1);
	}
	else if (ans4 == 2) {
		slytherin++;
		options.push_back(2);
	}
	else if (ans4 == 3) {
		gryffindor++;
		options.push_back(3);
	}
	else if (ans4 == 4) {
		ravenclaw++;
		options.push_back(4);
	}
	else {
		std::cout << "Invalid input\n";
		goto Q4; 
	}

	std::string house;
	int max = 0;
	if (gryffindor > max) {

		max = gryffindor;
		house = "Gryffindor";

	}

	if (hufflepuff > max) {

		max = hufflepuff;
		house = "Hufflepuff";

	}

	if (ravenclaw > max) {

		max = ravenclaw;
		house = "Ravenclaw";

	}

	if (slytherin > max) {

		max = slytherin;
		house = "Slytherin";

	}

	std::cout << house << "!\n";
	std::cout << "With the options: " << "\n"; 
	for (int i = 0; i < options.size(); i++) {
		std::cout << "Q" << i << ": " << options[i] << std::endl;
	}
}
