#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _targetForm;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string targetForm);
	ShrubberyCreationForm(ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &r);
};

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string targetForm): Form(targetForm, 145, 137) {
	this->_targetForm = targetForm;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other){
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
