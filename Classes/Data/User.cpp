#include "User.hpp"

User::User()
    : m_userId(0)
    , m_authCode(0) {}

User::~User() {}

User& User::Instance() {
    static User t;
    return t;
}