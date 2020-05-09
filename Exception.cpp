//Exception.h
//custom exceptions

#include<exception>
#include<string>

class file_open_error : public std::exception
{
	std::string _msg;

	public:
		file_open_error() { };
		file_open_error(const std::string& msg) : _msg(msg) { }

		virtual const char* what() const noexcept override
		{
			//return _msg.c_str();
			return "File had error in opening!";
		}
};
