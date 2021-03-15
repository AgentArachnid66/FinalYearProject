# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possibly pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent. 

<b>Commit Update #5</b>

I have updated the visuals, by using a Niagara System and material parameter collection. The system samples the static mesh and reconstructs it using particles, when it is then replaced by the actual mesh. I also updated the table as I wasn't happy with how it looked. I'm counting this as progress towards my level, of which is nearly complete as all I need to do is model the wall that I am going to burn and place the rest of the mid level and small details. I'm also a lot more clear in what I want my UI to look like, especially the UI coming from the table as that will be 3D. As I have an unlocking animation with the particles, I also need to make sure that the player can't use the controls until the animation is complete.

<b> Plans </b>
- Look into other JSON storages solutions. I'm starting to work on my own API that will communicate with MongoDB and upload the data there. It's a more professional method of doing it. I'll also look into alternatives, such as plugins that other people have made for this exact purpose.
- Start writing python script to pull collected data and perform relevant analysis


<b> Next Steps </b>

- Complete the level
- Possibly start recording the vocal instructions
- Start planning UI for:
     - Main Menu
     - Loading Screen (Loading levels, calculating score, uploading data, etc)
     - Score Screen
- 
