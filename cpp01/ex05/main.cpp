#include "Karen.hpp"

int main()
{
    Karen martha;

    martha.complain("DEBUG");
    martha.complain("INFO");
    martha.complain("WARNING");
    martha.complain("ERROR");
    std::cout << "\n\n...\n\n";
    martha.complain("DEBUG");
    return 0;
}