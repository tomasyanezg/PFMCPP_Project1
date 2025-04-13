#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        door                   // 1)    
//  action 1:    the door opens         // 2)
door.open();                            // 3)
//  action 2:    the door closes        // 2)            
door.close();                           // 3)
//  action 3:    the door locks         // 2)    
door.lock();                            // 3)    
//  2)
//  Noun:        oven                   // 1)
//  action 1:    the oven heats         // 2)
oven.heat();                            // 3)
//  action 2:    the oven opens         // 2)    
oven.open();                            // 3)
//  action 3:    the oven cooks         // 2)
oven.cook();
//  3)
//  Noun:        chef                        // 1)
//  action 1:    chef cooks Pizza            // 2)
chef.cookingPizza();                         // 3)
//  action 2:    chef cooks Pasta            // 2)
chef.cookingPasta();                         // 3)
//  action 3:    chef prepares ingredients   // 2)
chef.prepareIngredients();                   // 3)    
//  4)
//  Noun:        doctor
//  action 1:    doctor examines patient    // 2)    
doctor.examinePatient();                    // 3)
//  action 2:    doctor prescribes medicine // 2)
doctor.prescribeMedicine();                 // 3)
//  action 3:    doctor operates on patient // 2)
doctor.operateOnPatient();                  // 3)
//  5)
//  Noun:        bike                     // 1)
//  action 1:    bike moves forward       // 2)
bike.moveForward();                       // 3)
//  action 2:    bike moves backward      // 2)
bike.moveBackward();                      // 3)
//  action 3:    bike turns left          // 2)
bike.turnLeft();                          // 3)
//  6)
//  Noun:        movie                   // 1)
//  action 1:    movie plays             // 2)    
movie.play();                            // 3)
//  action 2:    movie pauses            // 2)
movie.pause();                           // 3)    
//  action 3:    movie stops             // 2)
movie.stop();                            // 3)    
//  7)
//  Noun:        guitar                  // 1)
//  action 1:    guitar plays a song     // 2)
guitar.playSong();                       // 3)    
//  action 2:    guitar tunes a string   // 2)
guitar.tuneString();                     // 3)    
//  action 3:    guitar changes a string // 2)
guitar.changeString();                   // 3)
//  8)
//  Noun:        person                   // 1)
//  action 1:    friend talks             // 2)
person.talk();                            // 3)
//  action 2:    friend smiles            // 2)
person.smiles();                          // 3)
//  action 3:    friend cries             // 2)
person.cry();                             // 3)
//  9)
//  Noun:        school                   // 1)
//  action 1:    school opens             // 2)
school.open();                            // 3)
//  action 2:    school closes            // 2)
school.close();                           // 3)
//  action 3:    school teaches           // 2)    
school.teach();                           // 3)
//  10)
//  Noun:        sun                      // 1)
//  action 1:    sun shines               // 2)    
sun.shine();                              // 3)
//  action 2:    sun warms                // 2)
sun.warm();                               // 3)
//  action 3:    sun sets                 // 2)        
sun.set();                                // 3)

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
