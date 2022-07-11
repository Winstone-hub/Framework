#include "Object.h"

Object::Object() : pBridge(nullptr) { }
Object::Object(Transform _TransInfo) : TransInfo(_TransInfo) { }
Object::~Object() { }
