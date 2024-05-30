#include "Authenticable.hpp"

Authenticable::Authenticable(std::string password) :
	password(password) {

}

bool Authenticable::authenticate(std::string password) {
	return password == this->password;
}