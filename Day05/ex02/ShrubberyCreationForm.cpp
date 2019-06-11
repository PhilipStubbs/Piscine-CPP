
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string targetForm): Form(targetForm, 145, 137) {
	this->_targetForm = targetForm;

	std::string tree =	"                      ___\r\n                _,-'\"\"   \"\"\"\"`--.\r\n             ,-'          __,,-- \\\r\n           ,'    __,--\"\"\"\"dF      )\r\n          /   .-\"Hb_,--\"\"dF      /\r\n        ,'       _Hb ___dF\"-._,-'\r\n      ,'      _,-\"\"\"\"   \"\"--..__\r\n     (     ,-'                  `.\r\n      `._,'     _   _             ;\r\n       ,'     ,' `-'Hb-.___..._,-'\r\n       \\    ,'\"Hb.-'HH`-.dHF\"\r\n        `--'   \"Hb  HH  dF\"\r\n                \"Hb HH dF\r\n                 \"HbHHdF\r\n                  |HHHF\r\n                  |HHH|\r\n                  |HHH|\r\n                  |HHH|\r\n                  |HHH|\r\n                  dHHHb\r\n                .dFd|bHb.               o\r\n      o       .dHFdH|HbTHb.          o /\r\n\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\r\n##########################################";
	std::ofstream outFile(targetForm + "_shrubbery");
	outFile << tree;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other){
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form){
	(void)form;
	return(*this);
}

