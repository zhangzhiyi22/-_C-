#include <iostream>
using namespace std;
#include <vector>

class Log
{



public:

enum Level
{
    logLevelError = 0,
    logLevelWarning = 1,
    logLevelInfo = 2
};
    // const int logLevelError = 0;
    // const int logLevelWarning = 1;
    // const int logLevelInfo = 2;

private:
   Level m_LogLevel = logLevelInfo;

public:
   void SetLevel(Level level)
   {
      m_LogLevel = level;
   }

   void Warn(const char* message)
   {
      if (m_LogLevel >= logLevelWarning)
         cout << "[WARNING]: " << message << endl;
   }

    void Error(const char* message)
   {
      if (m_LogLevel >= logLevelError)
         cout << "[ERROR]: " << message << endl;
   }

    void Info(const char* message)
   {
      if (m_LogLevel >= logLevelInfo)
         cout << "[INFO]: " << message << endl;
   }

};

int main() {


    Log log;
    log.SetLevel(log.logLevelWarning);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");

 
   system("pause");
	return 0;
}

