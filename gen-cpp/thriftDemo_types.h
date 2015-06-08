/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef thriftDemo_TYPES_H
#define thriftDemo_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace thriftDemo {

class User;

class ServerManager;

typedef struct _User__isset {
  _User__isset() : userIP(false) {}
  bool userIP :1;
} _User__isset;

class User {
 public:

  static const char* ascii_fingerprint; // = "5B708A954C550ECA9C1A49D3C5CAFAB9";
  static const uint8_t binary_fingerprint[16]; // = {0x5B,0x70,0x8A,0x95,0x4C,0x55,0x0E,0xCA,0x9C,0x1A,0x49,0xD3,0xC5,0xCA,0xFA,0xB9};

  User(const User&);
  User& operator=(const User&);
  User() : username(), userIP() {
  }

  virtual ~User() throw();
  std::string username;
  std::string userIP;

  _User__isset __isset;

  void __set_username(const std::string& val);

  void __set_userIP(const std::string& val);

  bool operator == (const User & rhs) const
  {
    if (!(username == rhs.username))
      return false;
    if (__isset.userIP != rhs.__isset.userIP)
      return false;
    else if (__isset.userIP && !(userIP == rhs.userIP))
      return false;
    return true;
  }
  bool operator != (const User &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const User & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const User& obj);
};

void swap(User &a, User &b);


class ServerManager {
 public:

  static const char* ascii_fingerprint; // = "80B16C7FD3CCD9B0A6BE74B73F41E53D";
  static const uint8_t binary_fingerprint[16]; // = {0x80,0xB1,0x6C,0x7F,0xD3,0xCC,0xD9,0xB0,0xA6,0xBE,0x74,0xB7,0x3F,0x41,0xE5,0x3D};

  ServerManager(const ServerManager&);
  ServerManager& operator=(const ServerManager&);
  ServerManager() : totalAccessCounter(0) {
  }

  virtual ~ServerManager() throw();
  int32_t totalAccessCounter;
  std::map<std::string, int32_t>  userAccessCounter;

  void __set_totalAccessCounter(const int32_t val);

  void __set_userAccessCounter(const std::map<std::string, int32_t> & val);

  bool operator == (const ServerManager & rhs) const
  {
    if (!(totalAccessCounter == rhs.totalAccessCounter))
      return false;
    if (!(userAccessCounter == rhs.userAccessCounter))
      return false;
    return true;
  }
  bool operator != (const ServerManager &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServerManager & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ServerManager& obj);
};

void swap(ServerManager &a, ServerManager &b);

} // namespace

#endif
