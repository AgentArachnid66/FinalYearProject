# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possible pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent and presence. 

<b>Commit Update #8</b>

Started working on my UI that work in world space. I've managed to get a basic key input, text display and Shift/Capslock key as a proof of concept. It's event driven and takes advantage of inheritance. I'm using the game instance to help communicate between each UI element as all actors necessary can easily access it. It's still not complete, as I still need to check that I can trigger the relevant events using the Leap Motion. An idea that I've had for a while now is to have a UI on the wrist, so I'm going to use that idea for my keyboard with a way to rescale and rotate it relative to the wrist to the user's preference. I can also save this preference to the user's collection in the database. 

<b> Plans </b>
- Encrypt and hash data
- Finish the level
- Start writing python script to pull collected data and perform relevant analysis

<b> Next Steps </b>

- Complete the level
- Possibly start recording the vocal instructions
- Start planning UI for:
     - Main Menu
     - Signup Menu
     - Login Menu
     - Create/Select User
     - Loading Screen (Loading levels, calculating score, uploading data, etc)
     - Score Screen
