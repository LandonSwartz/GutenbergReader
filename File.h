//container class for FILE

#include"Exception.h"
#include<cstdio>
#include<string>


using namespace std;

class File
{
	private:
		FILE *_file; //file pointer
		int size; //size of file
		string filename; //name of file

		void setSize();
		//rewind file to beginning
		void rewindFile();
	public:
		File() { };
		File(char * filename);
		File(string filename);
		~File();

		void openFile(char * filename);
		void openFile(string filename);
		void closeFile();
		bool isOpen();
		int getSize();
		void writeToFile(string msg);
		void writeToFile(char *msg);
};
