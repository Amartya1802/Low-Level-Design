# BUILDER DESIGN METHOD #


## SITUATION ##
We have a complex object with many attributes and optional fields. 
What if we want ot have some paramenters and rest are not required in some situations. 
If there are N params, then there are 2^N combinations. We can't go on having different constructors with diff combinations. It will case overload of constructors for the class. 

There is a lack of readability due to unnecessary parameter passing. 
We wish to use only those that are required by us. Rest should be set to default values. 


## SOLUTION ##
We use Builder pattern!

The Builder pattern allows you to separate the construction process from the final object. It allows you to build an object piece by piece, and the final product is assembled only when you call the build() method.


