//container class for FILE

#include<cstdio>

class File
{
	private:
		FILE *file; //file pointer
		int size; //size of file

		void setSize();
	public:
		File() { };
		File(string filename);
		~File();

		void openFile(string filename);
		void closeFile();
		bool isOpen() const;
		int getSize();
		void writeToFile(string msg);
}
