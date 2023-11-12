ifconfig | grep -w "ether" | cut -d " " -f2

# ifconfig - find the info about the system, includes MAC addresses;
# grep -w "ether" searched for the lines, option -w makes sure it matches the whole words of "ether, not as a part of the word;
# cut -d " " -f2 splits line by space delitmeter and takes the second field from it. (as an address is located in line like that => ether 01:3d:da:5d:a3:f8)