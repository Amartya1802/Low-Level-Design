# SINGLETON DESIGN PATTERN #

## Situation ##

We are to make a logging system for a large application. 

The goal is to have one and only one instance of the logger throughout the entire application.

Creating multiple instances of the logger could cause issues with memory usage, or even worse, inconsistent logging if multiple loggers are trying to write to the log at the same time.

Singleton patter allows you to create only one instance of a class and ensures that all parts of your application use that same instance.
One logger instance ensures that all logs go to the same place and are written in the same format, making your logs more useful and easier to manage.


