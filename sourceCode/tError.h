//---------------------------------------------------------------------------

#ifndef tErrorH
#define tErrorH
//---------------------------------------------------------------------------

using namespace std;

class Error : exception {
	public:
		Error(const char* msg) : exception(msg){};
};

#endif
