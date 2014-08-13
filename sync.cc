#include <node.h>
#include "worker.h"
#include "sync.h"

using namespace v8;

Handle<Value> CalculateSync(const Arguments& args) {
	HandleScope scope;

	int seconds = args[0]->Uint32Value();
	int result = DoWork(seconds);

	return scope.Close(Number::New(result));
}