#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	string b;
	int last, i = 0, pervoe = 0;
	map <string, int> mp;
	string vrem, c;
	getline(cin, b);
	/*for (int i = 0; i < b.size(); i++) {
		if (b[i] == ' ') {
			last = i;
			vrem = b.substr(pervoe, last - pervoe);
			mp[vrem] = mp[vrem] + 1;
			pervoe = last + 1;
		}
		
	} */
	for (int i = 0; i < b.size(); i++) {
		if (isupper(b[i])) {
			b[i] = tolower(b[i]);
		}
	}
	while(true)
	{
		if (b[i] == ' '|| b[i] == '\0') {
			last = i;
			vrem = b.substr(pervoe, last - pervoe);
			mp[vrem] = mp[vrem] + 1;
			pervoe = last + 1;
			
		}
		if (b[i] == '\0') break;

		++i;
	}

	map<string, int>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++){
		std::cout << it->first << ' ' << it->second << '\n';

	}
	return 0;
}
