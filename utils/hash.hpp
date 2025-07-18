#ifndef HASH_HPP
#define HASH_HPP

#include <string>

namespace Hash
{
  std::string SHA1(const std::string &data);
  std::string to_hex(const unsigned char *digest, std::size_t length);
}

#endif