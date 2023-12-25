#include "log.h"

void InitLog() {
  log("Initializing log...");
}

void log(const char* msg) {
    cout << msg << endl;
}
      