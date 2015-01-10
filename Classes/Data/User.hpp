#ifndef _CLIENT_USER_HPP_
#define _CLIENT_USER_HPP_

#include <cstdint>

class User {
public:
    User();

    ~User();

    static User& Instance();

public:
    int64_t GetUserId() const {
        return m_userId;
    }

    void SetUserId(int64_t value) {
        m_userId = value;
    }

    int64_t GetAuthCode() const {
        return m_authCode;
    }

    void SetAuthCode(int64_t value) {
        m_authCode = value;
    }

private:
    int64_t m_userId;
    int64_t m_authCode;
};

#endif // _CLIENT_USER_HPP_
