#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	if (argc == 1) {
		cout << "Neloy C++ template generator v0.2" << endl;
		cout << "Copyright Connor McDermid (C). All rights reserved." << endl;
		cout << "Licensed under the WTFPL Public License. See http://www.wtfpl.net for full license text." << endl;
		return 0;
	}

	if (argc == 2) {
		ofstream file;
		string filename = argv[1]; // these are std::strings
		filename += ".cpp";
		file.open(filename);
		file << "#include <iostream>" << endl;
		file << "//#include <string>" << endl;
		file << "//#inglude <vector>" << endl;
		file << "//#include <cmath>" << endl;
		file << "// more includes go here" << endl;
		file << endl << "using namespace std;" << endl;
		file << endl << "int main(int argc, char** argv) {" << endl;
		file << "    \n";
		file << "    return 0;" << endl;
		file << "}" << endl;
		file.close();
		return 0;
	}
	if (argv[1] == "-c") {
		ofstream hfile;
		string hname = argv[2]; // again a std::string
		string cname = argv[2];
		hname += ".h";
		hfile.open(hname);

		hfile << "#ifndef " << cname << endl; // header guard opening
		hfile << "#define " << cname << endl;

		hfile << endl;
		hfile << "class " << cname << "{" << endl;
		hfile << "	" << endl;
		hfile << "	private:" << endl;
		hfile << "		" << endl;
		hfile << "	public:" << endl;
		hfile << "		" << endl;
		hfile << "};" << endl;
		hfile << endl;

		hfile << "#endif" << endl; // header guard end

		hfile.close();
		ofstream sfile;
		string sname = cname + ".cpp";

		sfile.open(sname); // opening the source file now
		sfile << "#include \"" << hname << "\"" << endl;
		sfile << endl; 

		sfile.close();
		return 0; // done, wrap it up.
	}
}
