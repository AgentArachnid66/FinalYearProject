# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possible pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent. 

<b>Commit Update #5</b>

I've made a basic API in Node.JS that will access my Mongo DataBase for me and perform login/signup, hold the analytics and whatever else I may need. I tested the basic signup in the engine, which basically just uploads them to a new document in my collection. I still need to implement logging in and, more crucially, hashing and other web security measures. As at the moment I'm the only user and for purely development purposes, I'll focus on getting the relevant data uploaded to the database before the logging in and security measures. 

<b> Plans </b>
- Finish off the MongoDB API
- Start writing python script to pull collected data and perform relevant analysis

<b> Next Steps </b>

- Complete the level
- Possibly start recording the vocal instructions
- Start planning UI for:
     - Main Menu
     - Loading Screen (Loading levels, calculating score, uploading data, etc)
     - Score Screen
