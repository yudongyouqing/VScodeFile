#include<bits/stdc++.h>
using namespace std;
using namespace std::filesystem;
vector<string>s={"clear.exe", "test.cpp", "Template.cpp", "ConsolePauser.exe", "to_snippet.exe", ".cph", ".vscode"};
bool check(string name)
{
	for(int i=0; i<s.size(); i++)
		if(s[i]==name)return false;
	return true;
}
int main()
{
	path p=current_path();
	directory_iterator list(p);
	for(auto &it:list)
	{
		if(is_directory(it)&&it.path().filename().string()==".cph")
		{
			directory_iterator ls(it.path());
			for(auto &it:ls)
				remove(it.path());
		}
		else
		{
			if(check(it.path().filename().string()))
			{
				cout<<"remove: "<<it.path().filename().string()<<'\n';
				remove(it.path());
			}
		}
	}
	return 0;
}