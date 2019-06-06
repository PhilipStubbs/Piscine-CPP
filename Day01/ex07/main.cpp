#include <iostream>
#include <fstream>
#include <string>

std::string		string_replace(std::string& str, std::string& search, std::string& replace)
{
	if (str.empty() || search.empty()) {
		return str;
	}
	size_t pos = 0;
	std::string newstr = str;
	// npos is a static member constant value with the greatest possible value for an element of type size_t.
	while ((pos = newstr.find(search)) != std::string::npos)
	{
		newstr.replace(pos, search.size(), replace);
		pos += replace.size();
	}
	return newstr;
}

int main(int arc, char **argv) {
	if (arc != 4) {
		std::cout << "Incorrect Args: " << arc-1 << "\n";
		return (0);
	}
	std::string outputStr;
	std::string search = argv[2];
	std::string replace = argv[3];
	std::string filename = argv[1];
	std::ifstream readFile(filename);
	if (readFile.fail()) {
		std::cout<<"ERROR: Failed to read file."<<std::endl;
		return (0);
	}
	std::ofstream outFile(filename + ".replace");
	while(std::getline(readFile, outputStr)) {
		outFile << string_replace(outputStr, search, replace) + '\n';
	}
	std::cout<<"Replace completed."<<std::endl;
	return(0);
}
