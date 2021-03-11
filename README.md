# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possibly pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent. 

<b>Commit Update #5</b>

Updated the scoring system so that the pressure used is taken into account. I did this by using a normal distribution from a range of 0-1 in the form of a curve asset, and I sampled this curve by normalising the current pressure between 0-1. Whatever value is given is then multiplied with the brush material's texture to control the intensity of that frame's brush stroke. This controls the scoring system as it uses each pixel's data, so if it's darker then it gives less points. I've also been working on a level in a separate project file so that it doesn't clog up this one with unnecessary assets. That level is nearly completed and once it is, I just need to migrate the map over. 

<b> Plans </b>
- For the UI, I had the idea to have a pause menu implemented, so that when you look at the underside of your wrist it will appear there with clickable buttons and everything. I chose the underside of the wrist as it is relatively unexpected to occur during natural gameplay if implemented correctly.
- Look into other JSON storages solutions. I'm starting to work on my own API that will communicate with MongoDB and upload the data there. It's a more professional method of doing it.
<b> Next Steps </b>

- Complete the level
- Possibly start recording the vocal instructions
- Start planning UI for:
     - Main Menu
     - Loading Screen (Loading levels, calculating score, uploading data, etc)
     - Score Screen
