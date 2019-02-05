#pragma once

#include "std/string.h"

class ActorDefinitionIdentifier {
public:
  mcpe::string getCanonicalName() const;
};

class Actor {
public:
  ActorDefinitionIdentifier &getActorIdentifier() const;
  int64_t &getUniqueID() const;
};