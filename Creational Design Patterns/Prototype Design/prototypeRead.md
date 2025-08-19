# PROTOTYPE DESIGN PATTERN #

## SCENARIO ##

Lets take the example of making different characters for a game. 
There will be many similarities for many character types. 
In the traditional approach, we create a new character object every time, manually setting all the attributes even if most of them stay the same.

## SOLUTION ##
In the Prototype Pattern, instead of manually creating new objects each time by setting each attribute, we can clone an existing object (the prototype) and modify only the properties that need to change. This allows us to create similar objects quickly and efficiently. 