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
//  Noun:       cat                     // 1)   
//  action 1:   the cat purrs           // 2)
cat.purr();                             // 3)
//  action 2:   the cat jumps           // 2) 
cat.jump();                             // 3)
//  action 3:   the cat sleeps          // 2)
cat.sleep();                            // 3)
//  2)
//  Noun:       snake                   // 1) 
//  action 1:   the snake slithers      // 2) 
snake.slither();                        // 3)
//  action 2:   the snake hisses        // 2) 
snake.hiss();                           // 3)
//  action 3:   the snake bites         // 2)    
snake.bite();                           // 3)
//  3)
//  Noun:       kid                     // 1)             
//  action 1:   the kid laughs          // 2)
kid.laugh();                            // 3)
//  action 2:   the goes to school      // 2)
kid.goToSchool();                       // 3)
//  action 3:   the kid plays           // 2)
kid.play();                             // 3)
//  4)
//  Noun:       motorbike               // 1)
//  action 1:   the motorbike revs      // 2)    
motorbike.rev();                        // 3)
//  action 2:   the motorbike speeds up // 2) 
motorbike.speedUp();                    // 3)
//  action 3:   the motorbike slows down// 2)
motorbike.slowDown();                   // 3)
//  5)
//  Noun:       printer                 // 1)
//  action 1:   the printer prints      // 2)
printer.print();                        // 3)
//  action 2:   the printer scans       // 2)
printer.scan();                         // 3)    
//  action 3:   the printer faxes       // 2)
printer.fax();                          // 3)
//  6)
//  Noun:       dove                    // 1)
//  action 1:   the dove coos           // 2)
dove.coo();                             // 3)
//  action 2:   the dove flies          // 2)
dove.fly();                             // 3)
//  action 3:   the dove eats           // 2)
dove.eat();                
//  7)
//  Noun:       ball                    // 1)     
//  action 1:   the ball rolls          // 2)
ball.roll();                            // 3)
//  action 2:   the ball bounces        // 2)
ball.bounce();                          // 3)    
//  action 3:   the ball spins          // 2)
ball.spin();                            // 3)
//  8)
//  Noun:       waitress                // 1)    
//  action 1:   the waitress serves     // 2)
waitress.serve();                       // 3)
//  action 2:   the waitress cleans     // 2)
waitress.clean();                       // 3)
//  action 3:   the waitress takes orders // 2) 
waitress.takeOrders();                   // 3)
//  9)
//  Noun:       midiInstrument                      // 1)    
//  action 1:   midi instrument increase volume     // 2)
midiInstrument.incVolume();                         // 3)
//  action 2:   midi instrument increases octave    // 2) 
midiInstrument.incOctave();                         // 3)
//  action 3:   midi instrument sync clock on       // 2)
midiInstrument.syncClock();                         // 3)
//  10)
//  Noun:       cashier                 // 1)
//  action 1:   the cashier rings up    // 2)
cashier.ringUp();                       // 3)
//  action 2:   the cashier counts      // 2)
cashier.count();                        // 3)
//  action 3:   the cashier opens drawer // 2)
cashier.openDrawer();                   // 3)


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
