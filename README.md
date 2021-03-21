# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possible pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent. 

<b>Commit Update #7</b>

I've used my expanded API to build a UI that serves as a proof of concept that I can use UE4 to do all the things that I require in terms of communicating with my Mongo Database. I can create new accounts and log into existing ones. I can create new users on the right account and log into the correct existing ones. I can also handle of this independently from the UI as I'm using a custom Game Instance to handle it and event dispatchers to handle the callback. As I'm working with Leap Motion and I really don't want to take the players out of it with using a physical keyboard, I'm taking advantage of my theme and environment and plan on buiding my world space UI as a holographic interface.

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
