#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("Default Shrubbery Creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Shrubbery Creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f) : Form(f) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& f)
{
    Form::operator=(f);
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& b) const
{
    if (!isSigned) throw Form::FormNotSignedException("Form is not signed");
    if (b.getGrade() > gradeToExecute) throw Form::GradeTooLowException("Grade is too low to execute!");

    std::ofstream os((target + "_shrubbery").c_str());
    if (!os.good()) throw std::runtime_error("Failed to write to file");
    os << "                 .o00o\n";
    os << "               o000000oo\n";
    os << "              00000000000o\n";
    os << "             00000000000000\n";
    os << "          oooooo  00000000  o88o\n";
    os << "       ooOOOOOOOoo  ```''  888888\n";
    os << "     OOOOOOOOOOOO'.qQQQQq. `8888'\n";
    os << "    oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n";
    os << "    OOOOOOOOOO'.QQQQQQQQQQ/ /q\n";
    os << "     OOOOOOOOO QQQQQQQQQQ/ /QQ\n";
    os << "       OOOOOOOOO `QQQQQQ/ /QQ'\n";
    os << "         OO:F_P:O `QQQ/  /Q'\n";
    os << "            \\\\. \\ |  // |\n";
    os << "            d\\ \\\\\\|_////\n";
    os << "            qP| \\\\ _' `|Ob\n";
    os << "               \\  / \\  \\Op\n";
    os << "               |  | O| |\n";
    os << "       _       /\\. \\_/ /\\\n";
    os << "        `---__/|_\\\\   //|  __\n";
    os << "              `-'  `-'`-'-'\n";
    os.close();
}