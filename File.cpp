//implemention of file class

void File::setSize()
{
	//find size of file
}

File::File(string filename)
{
	file = fopen(filename, "w+");
}

File::~File()
{
	if(file.isOpen())
	{
		fclose(file);
	}
}

File::openFile(string filename);
{
	file = fopen(filename, "w+");
}

File::closeFile()
{
	fclose(file);
}

bool isOpen() const
{
	return file.isOpen();
}

File::getSize()
{
	//get size of file
}

File::writeToFile(string msg)
{
	//write to file
}
