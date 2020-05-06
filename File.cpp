//implemention of file class

#include"File.h"

void File::setSize()
{
	//set size of file
}

File::File(char * filename)
{
	_file = fopen(filename, "w+");
}

File::~File()
{
	if(this->isOpen())
	{
		fclose(_file);
	}
}

void File::openFile(char * filename)
{
	_file = fopen(filename, "w+");
}

void File::closeFile()
{
	fclose(_file);
}

bool File::isOpen() 
{
	if(_file == NULL)
	{
		//file is not open
		return 0;
	}
	else
		return 1; 
		//file is open
}

int File::getSize()
{
	fseek(_file, 0L, SEEK_END);
	size = ftell(_file);
	rewindFile();
}

void File::rewindFile()
{
	rewind(_file);
}

void File::writeToFile(string msg)
{
	//write to file
}
