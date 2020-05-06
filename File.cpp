//implemention of file class

#include"File.h"

void File::setSize()
{
	fseek(_file, 0L, SEEK_END);
	size = ftell(_file);
	rewindFile();
}

File::File(char * filename)
{
	_file = fopen(filename, "w+");
}

File::File(string filename)
{
	_file = fopen(filename.c_str(), "w+");
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

void File::openFile(string filename)
{
	_file = fopen(filename.c_str(), "w+");
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
	return size;
}

void File::rewindFile()
{
	rewind(_file);
}

void File::writeToFile(string msg)
{
	fputs(msg.c_str(), _file);
}

void File::writeToFile(char * msg)
{
	fputs(msg, _file);
}	
