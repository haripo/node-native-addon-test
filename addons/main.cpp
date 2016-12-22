#include <iostream>

#include <node.h>
#include <v8.h>
#include <nan.h>

NAN_METHOD(add) {
  int x = info[0]->NumberValue();
  int y = info[1]->NumberValue();
  info.GetReturnValue().Set(Nan::New(x + y));
}

NAN_MODULE_INIT(init) {
  NAN_EXPORT(target, add);
}

NODE_MODULE(addon, init)
