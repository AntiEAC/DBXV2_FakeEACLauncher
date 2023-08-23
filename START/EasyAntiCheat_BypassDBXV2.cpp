#include <iostream>
#include <Windows.h>
#include <LibBlackBone/BlackBone/Process/Process.h>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

namespace AntiEAC {
	void RunDBXV2() {
		std::wstring path = fs::current_path();
		blackbone::Process handle_proc;
		NTSTATUS st = handle_proc.CreateAndAttach(path + L"\\bin\\DBXV2.exe");
		if (st) {
			cout << "FILE IS NOT FOUNDED OR FAILED TO GET CURRENT PATH..." << endl;
			Sleep(1500);
			exit(44);
		}
		else 
		{
			cout << "EAC HAS BEEN BYPASSED SUCCESSFULLY!!!" << endl;
			Sleep(2800);
			cout << "If you wanted, you can support me in Patreon!!!" << endl;
			Sleep(1600);
			exit(555);
		}
	}
}

int main() {
	SetConsoleTitleA("Dragon Ball Xenoverse 2 EAC Bypass by ClarkKeyton");
	AntiEAC::RunDBXV2();
	return 0;
}