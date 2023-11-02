echo "Welcome to the Neloy Template Install Wizard."
echo $""
echo "Checking prerequisites..."

if [[ ":$PATH:" == *":$HOME/bin:"* ]]; then
	echo "Your path is correctly set."
else
	echo "Your path is missing ~/bin."
	read -p "Add ~/bin to your path? [Y/n]: " usr
	if [ "${usr^^}" = "N" ]; then
		echo "Ignoring path errors..."
		exit 1
	fi
	echo 'PATH="~/bin${PATH:+:${PATH}}"' >> ~/.bash_profile
	PATH="~/bin${PATH:+:${PATH}}"
	echo "Path fixed. Continuing..."
fi
command -v cmake >/dev/null 2>&1 || echo >&2 "I require cmake, but it's not installed. Aborting..."

echo "All prerequisites satisfied. Installing to ~/bin ..."
mkdir cmake-build
cd cmake-build
cmake ..
cmake --build .
make install

echo "Installation complete."
echo "Wizard exiting, have a nice day."
