#include<bits/stdc++.h>

using namespace std;

class Logger {
private: 
    static Logger* logger; //the singleton instance is managed via this static pointer
    Logger() {}

public:
    static Logger* getLogger() {
        if (!logger) {
            logger = new Logger();
        }
        return logger;
    }

    void log(string msg) {
        cout<<"[LOG] "<<msg<<endl;
    }
};

//initialize the static member
Logger* Logger::logger = nullptr;

class App {
public:
    void run() {
        Logger* logger = Logger::getLogger();
        logger->log("Application is starting...");
    }
};

int main() {
    App app;
    app.run();
    return 0;
}