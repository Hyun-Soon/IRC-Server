#include "UserInfo.hpp"

UserInfo::UserInfo() : _auth(false),  _pass(false),_active(false), _nickName("000"), _realName("000"), _userName("000")
{
    std::cout << "UserInfo constructor called" << std::endl;
}

UserInfo::~UserInfo() {}

const std::string &UserInfo::getNickName(void) const
{
    return _nickName;
}

const std::string &UserInfo::getRealName(void) const
{
    return _realName;
}

const std::string &UserInfo::getUserName(void) const
{
    return _userName;
}

bool UserInfo::isAuth(void) const
{
    return _auth;
}

bool UserInfo::isActive(void) const
{
    return _active;
}

bool UserInfo::isPass(void) const
{
    return _pass;
}

void UserInfo::setNickName(const std::string &nickName)
{
    _nickName = nickName;
}

void UserInfo::setRealName(const std::string &realName)
{
    _realName = realName;
}

void UserInfo::setUserName(const std::string &userName)
{
    _userName = userName;
}

void UserInfo::activate(void)
{
	_active = true;
}

void UserInfo::deactivate(void)
{
	_active = false;
}

void UserInfo::allowAccess(void)
{
	_pass = true;
} 

void UserInfo::denyAccess(void)
{
	_pass = false;
}

void UserInfo::authorize()
{
	_auth = true;
}

void UserInfo::deauthorize()
{
	_auth = false;
}
