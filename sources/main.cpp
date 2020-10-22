// Copyright 2020 Kushpelev Alexei leha.kushpelev@mail.ru

#include "cache_exploration.hpp"

int main() {
  cache_exploration cache;
  cache.direct_travel();
  std::cout << cache;
  cache.reverse_travel();
  std::cout << cache;
  cache.random_travel();
  std::cout << cache;
  return 0;
}
