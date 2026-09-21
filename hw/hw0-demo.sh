# Display the current user
echo "--------------------------"
echo "Current User:"
echo "--------------------------"
whoami
echo

# Display the operating system details
echo "--------------------------"
echo "Operating System Details:"
echo "--------------------------"
# Display the operating system name
echo "OS Name: $(uname -s)"
# Display the machine architecture
echo "Architecture: $(uname -m)"
echo

# Display the installed version of Vim
echo "--------------------------"
echo "Vim Version:"
echo "--------------------------"
vim --version | head -n 1
echo "--------------------------"
echo "Current working directory:"
echo "--------------------------"
pwd
echo "--------------------------"
echo "Today's date:"
echo "$(date +%Y_%m_%d)"
echo "--------------------------"
