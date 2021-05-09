# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possible pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent and presence. 

<b>Commit Update #13</b>

Completely scrapped the original code and came up with a new and improved system that built upon the idea of the previous one. I'm using linetraces in a spherical pattern to sample the surrounding environment and to move away from obstacles I am using a parametric sphere equation to control it's distance to it's parent. I'm not parenting the drone to the player but it should keep in mind it's distance from it and where it is in relation to it. The first problem I had was to sample evenly distributed points on a sphere. If I had used the wrong sort of sphere then I would be sampling too much at the poles and not enough at the middle. I found an algorithm called the Fibonacci Sphere and that gave me a really good result. In my testng environment, I am using 1000 samples which I'll later test to find the right amount to optimise it. I then save the direction vector from hit location to an array and then i find the average direction vector. In my old code, I would have just found the target position and used a VInterp node to go over there. However, since in this new code, I am using a parametric equation to control it, I'm going to be a bit smarter than that. There are three variables ofr me to control, the radius, the height and the position around the circle intersection. To get the radius, I added the dot product of the vector from the drone to the parent and the average direction vector, which I then add to the existing value of the radius to get the right value. The position on the circle was done by taking to dot product of the forward vector of the drone, rotated by the 90 Degrees, and the average direction vector. This is then multiplied by an offset to gain some control over it, then clamped between -2 pi and positive 2 pi. The height is done similarly, except it uses the up vector.

This new and improved approach is a lot better as it relies upon the hit locations of a ray instead of the location of an object to calculate it's path. I plan on improving it by adding in some desired values for it to try and reach if it isn't blocked by anything because right now if something blocks it and moves it upwards, when that object is removed it stays at that height instead of moving down.

<b> Bugs/Improvements </b>
- Drone is still jumping at the threshold but that can be tweaked with the offsets and interlopation speeds

<b> Plans </b>
- Encrypt and hash data
- Finish the level
- Start writing python script to pull collected data and perform relevant analysis

<b> Next Steps </b>

- Complete the level
- Possibly start recording the vocal instructions
- Start planning UI for:
     - [x] Start Screen
     - [ ] Main Menu 
     - [ ] Signup Menu 
     - [ ] Login Menu
     - [ ] Create/Select User 
     - [ ] Loading Screen (Loading levels, calculating score, uploading data, etc) 
     - [x] Score Screen 
