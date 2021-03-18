# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possible pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent. 

<b>Commit Update #6</b>

Buiding on my API, I made a route for when I want to calculate the scores based on the resulting render targets from the player. To do this, I exported the render target to a png file on the computer, got the file path to this file and my code takes the image as an array of pixel values. I simply add up all the Red Channel pixel values and divide the result by 256. After testing it, the performance increase was unbelievable and I'm glad that I dedicated time to learning how to do this. I've also started working on a way to make sure that all relvant data has been returned to the data collector before uploading, by using event dispatchers. I'll move onto the UI and expanding the environment.

<b> Plans </b>
- Finish off the MongoDB API
- Finish the level
- Start writing python script to pull collected data and perform relevant analysis

<b> Next Steps </b>

- Complete the level
- Possibly start recording the vocal instructions
- Start planning UI for:
     - Main Menu
     - Loading Screen (Loading levels, calculating score, uploading data, etc)
     - Score Screen
