# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possible pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent and presence. 

<b>Commit Update #14</b>

Further improved the code by adding some target values for the drone for when there is nothing blocking it. The way that I have it set up is that when there are no longer any blocking objects, it will choose the closest location and begin to travel there. I also added a quick function to rotate the mesh of the drone towards a target actor, which can be changed out at runtime. I'll add a latent function that will slowly transition the drone's rotation between the old and new target actor so it isn't an instant snap. This is unlikely to happen but it's good to have a plan for it anyway.

<b> Bugs/Improvements </b>


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
