#include<bits/stdc++.h>
#include<mutex>
#include<thread>

using namespace std;

class Logger {
private: 
    static Logger* logger; //the singleton instance is managed via this static pointer
    static mutex mtx; // mutex for thread-safe access
    Logger() {}

public:
    static Logger* getLogger() {
        if (!logger) {
            
            //locking mutex here, rather than in the upper if condition.
            //so that other threads can come in and atleast return the already made instance.
            lock_guard<mutex> lock(mtx); 
            if (!logger) {
                logger = new Logger();
            }
            return logger;
        }
    }

    void log(string msg) {
        cout<<"[LOG] "<<msg<<endl;
    }
};



//initialize the static members
Logger* Logger::logger = nullptr;
mutex Logger::mtx;


//testing with threads
void threadFunction(int id) {
    Logger *logger = Logger::getLogger();
    logger->log("Log message from thread " + to_string(id) + " logging!");
}

int main() {
    thread t1(threadFunction, 1);
    thread t2(threadFunction, 2);
    thread t3(threadFunction, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}