// Copyright 2018 Futa HIRAKOBA

#include "Q3Parent.h"

void Q3Parent::setDeath(std::shared_ptr<bool> b) {
  isDeath = std::move(b);
}
