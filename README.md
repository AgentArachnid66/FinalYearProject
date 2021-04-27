# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possible pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent and presence. 

<b>Commit Update #12</b>

Started on the prototype drone, with a script that will allow it to move around the world dynamically. At this commit, it can move to keep a certain distance from objects and the player, but there are a few limitations which I'll go over in my bug report. I added in a new font to be used with the text renderer on the pressure controls so that it fits in more.

<b> Bugs/Improvements </b>
(Fixes are to be tried, tested and updated in the next commit. This is mainly to help me to track the main bugs)
- If drone is between the player and a blocking object and the distance between player and said object is too small, then the drone will clip and go through the blocking object.
    - Fix: When the distance goes below a threshold, the drone will relocate to a different position to the player.
- Current script limits the drone repositioning to a radius around the object's location which is identical for each object in the level
    - Fix: raycast to find the surface face and use that as the overlap tolerance per object.
- When the drone approaches the overlap tolerance threshold, it will start jumping so that the position flips between being within the threshold and not. 
    - Fix: When it approaches the threshold, clamp it to that threshold
 - Haven't been able to test how the code handles multiple objects blocking the drone

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
