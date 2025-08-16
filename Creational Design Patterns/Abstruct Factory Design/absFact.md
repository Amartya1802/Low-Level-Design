# ABSTRUCT FACTORY DESIGN #

This is almost similar to Factory desgin. 

The situation differs by the fact that there can be different varieties of vehicles (as per our base example). 

We considered diff brands of cars. As we keep on increasing the number of brands, it gets difficult to maintain the "if, else" statements in the Factory Design. 


SOLUTION: We create another interface (pure virtual abstruct function) for the factory itself. Then we create separate classes for each brand. Consider these as factories for different brands. 

Earlier the factory design didn't follow  "Open-Closed Principle (open for extension, closed for modification)". We had to interfare with the "if else" statements. 
But now, we can add a new factory anytime w/o disturbing the main factory. 