#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

    ofstream file;
    string filename = argv[1];
    filename += ".cpp";
    file.open(filename);
    /*
    // license text lmao
    file << "/** This file generated automatically by Connor McDermid's Lab File Template Generator." << endl;
    file << "DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE" << endl;
    file << "Version 2, December 2004" << endl;
    file << "Copyright (C) Sam Hocevar <sam@hocevar.net>" << endl;
    file << "Everyone is permitted to copy and distribute verbatim or modified copies of this license document," << endl;
    file << "and changing it is allowed as long as the name is changed." << endl;
    file << "DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE" << endl;
    file << "TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION, AND MODIFICATION" << endl;
    file << "\n";
    file << "0. You just DO WHAT THE FUCK YOU WANT TO." << endl;
    */
    // real template now
    file << "#include <iostream>" << endl;
    file << "//#include <string>" << endl;
    file << "//#inglude <vector>" << endl;
    file << "//#include <cmath>" << endl;
    file << "// more includes go here" << endl;
    file << endl << "using namespace std;" << endl;
    file << endl << "int main() {" << endl;
    file << "    \n";
    file << "    return 0;" << endl;
    file << "}" << endl;
    return 0;
}
