#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	int cases;

	while (cin >> cases) {
		for (int i = 0; i < cases; ++i) {
			int n;
			cin >> n;

			map<int, vector<string>> phones;
			for (int j = 0; j < n; ++j) {
				string phone;
				getline(cin, phone);
				int s = phone.size();

				phones[s].push_back(phone);
			}
			for (auto it = phones.begin(); it != phones.end(); it++) {
				auto it2 = it++;
				while (it2 != phones.end()) {
					for (int p = 0; p < it2->second.size(); ++p) {
						
					}
				}
			}
		}
	}
	return 0;
}
