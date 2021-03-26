# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possible pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent and presence. 

<b>Commit Update #9</b>

Continued working on the World Space UI. I've managed to get the basic translation, rotation and scale widgets working. The main idea is to have a UI interaction actor on each finger tip that will activate each element. The plan is to have the keyboard on the wrist, with the other hand being used to interact with the keys. An idea I had was to have the hand open when resizing, rotating and translating the keyboard to the user's needs and then close it into a fist to signify that they are happy with the changes and return to normal interactions. I may be able to use UE4's built in UI system in World Space but this method allows me to have greater control over the interactions and is just more flexible to work with, at least this far. Now that I have the World Space UI as a proof concept, I can move onto improving my scoring system as I believe that I have come up with a better way. The basic idea is to isolate the masks, draw them onto a render target and export them to a png file all on BeginPlay. I then pass the paths with the render target to my API, which has been updated to handle this operation, when I need to calculate the scores. I also have a set of weights for each image, except the render target, which I also pass to my API.

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
