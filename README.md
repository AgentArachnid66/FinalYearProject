# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possibly pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent. 

<b>Commit Update #4</b>

Updated the player controls to make it look nicer and easier to use. I also scrapped the scoring system and am going for a simplier version with just seeing how much of the wall they hit. I'll still record the centre of each hit for my data analysis, but it will not have any baring on the player's score. Although, I'll see what happens if I tell the player that it will have an impact on their score and see if this suggestion has any impact on their priorities. 

<b> Plans </b>
- For the UI, I had the idea to have a pause menu implemented, so that when you look at the underside of your wrist it will appear there with clickable buttons and everything. I chose the underside of the wrist as it is relatively unexpected to occur during natural gameplay if implemented correctly.
- If I have the time, make a login system so that I can appropriate aggregate the data by user and it will help to improve my analysis. I've looked briefly into this and think that using either GameSparks, FireBase or an Amazon Web Service Database would be a good fit for this purpose.
- Look into other JSON storages solutions. My current logic involves retrieving the entire JSON document, look for the objects array, retrieve the entire array and then append an object onto the end of that and finally upload the entire document. This has the obvious issue of scalability as the longer the document becomes, the bigger the file that each user will need to download and upload and that seems unnecessary. This was a proof of concept at most, so I'm looking into alternative solutions like Microsoft's Blob storage, or writing my own API that will handle it for me instead of doing it within UE4. However, this is lower on my list of priorities as I need to get a level together and fix my controls.

<b> Next Steps </b>

- Make a proper UI on the console mesh
- Fix the aforementioned bugs
- Design and create a level
- Possibly start recording the vocal instructions
